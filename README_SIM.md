# 机械臂 Gazebo 仿真指南

> 本文档描述 episode1 六轴机械臂的 Gazebo 仿真环境，覆盖两种仿真方式：
> **MoveIt + ros2_control 完整流水线**（推荐）与**传统 SDF + PID 关节控制**（旧版）。

---

## 一、环境要求

| 项目 | 版本 |
| --- | --- |
| 操作系统 | Ubuntu 24.04 |
| ROS 2 | Jazzy |
| Gazebo | Harmonic（随 `ros-jazzy-ros-gz-sim` 安装） |
| gz_ros2_control | 1.2.20（随 `ros-jazzy-gz-ros2-control` 安装） |
| MoveIt 2 | 随 Jazzy 发行版 |
| 硬件 | 物理机 + NVIDIA 独显（RTX 4060） |

> **注意**：本项目运行在物理机上，**不需要** `LIBGL_ALWAYS_SOFTWARE=1` 软件渲染。
> 若通过 snap 版 VS Code 启动终端，需清理 snap 注入的环境变量（见下文「常见问题」），
> 该清理已内置在 `gz_moveit.launch.py` 中，无需手动处理。

---

## 二、推荐方式：MoveIt + ros2_control 完整流水线

这是当前主用的仿真方式，实现「Gazebo 物理仿真 + ros2_control 控制器 + MoveIt 运动规划 + RViz 可视化」全链路：

```
RViz 拖拽 → MoveIt move_group 规划 → FollowJointTrajectory Action
         → arm_group_controller (joint_trajectory_controller)
         → gz_ros2_control GazeboSimSystem → Gazebo 关节运动
```

### 架构

```
┌────────────────────────────────────────────────────────────┐
│  gz_moveit.launch.py                                       │
│                                                            │
│  Gazebo (gz sim)  ←→  ros_gz_bridge (clock)  → use_sim_time│
│      │                                                     │
│      └─ GazeboSimROS2ControlPlugin                         │
│           └─ controller_manager（跑在 Gazebo 进程内）       │
│                ├─ joint_state_broadcaster                  │
│                └─ arm_group_controller (position 接口)      │
│                                                            │
│  robot_state_publisher (xacro → robot_description)         │
│  static TF world → base_link（虚拟关节）                    │
│  move_group（MoveIt，use_sim_time）                        │
│  rviz2（MoveIt 插件，直接读 robot_description_semantic）    │
└────────────────────────────────────────────────────────────┘
```

### 关键文件

| 文件 | 作用 |
| --- | --- |
| `episode1_moveit_config/launch/gz_moveit.launch.py` | 一键启动完整流水线 |
| `episode1_moveit_config/config/episode1_urdf_1113.urdf.xacro` | 汇总 URDF + ros2_control 标签 |
| `episode1_moveit_config/config/episode1_urdf_1113.ros2_control.xacro` | 硬件接口 + Gazebo 插件 + 位置增益 |
| `episode1_moveit_config/config/ros2_controllers.yaml` | controller_manager 与控制器配置 |
| `episode1_moveit_config/config/moveit_controllers.yaml` | MoveIt 侧控制器映射 |
| `episode1_moveit_config/config/gz_bridge.yaml` | 桥接仿真时钟（仅 clock） |
| `episode1_moveit_config/config/empty_ground.sdf` | 仿真世界 |

### 启动

```bash
cd ~/student_ros
colcon build
source install/setup.bash

ros2 launch episode1_moveit_config gz_moveit.launch.py
```

### 使用

1. 等待 Gazebo GUI、RViz、move_group 全部就绪（按 3s/7s/10s/12s 顺序自动拉起）。
2. 在 RViz 的 MotionPlanning 面板拖拽末端执行器设定目标位姿。
3. 点击 **Plan & Execute**，Gazebo 中机械臂应实际运动并保持目标位姿。

---

## 三、关键配置说明

### 1. ros2_control 标签结构（顶层）

`<ros2_control>` 必须是 `<robot>` 的**直接子元素**（顶层），不能嵌套在 `<gazebo><plugin>` 里。
Gazebo 内的 controller_manager 通过 `/robot_description` 话题收到 URDF 后，用 `parse_urdf`
读取顶层 `<ros2_control>` 标签来初始化 `GazeboSimSystem` 硬件接口。

`<gazebo><plugin>` 只负责实例化 controller_manager 并加载控制器 YAML 配置。

### 2. 位置接口增益 `position_proportional_gain`

位置指令接口（`command_interface position`）**不走力矩**，而是用一个比例速度控制器追位置：

```
关节速度 = position_proportional_gain × 位置误差 × controller_manager_update_rate
```

- 默认增益 0.1 太弱，在真实重力下有稳态误差，表现为「规划完成但机械臂抬不起来」。
- 本项目已设为 **0.5**（官方文档示例值）。
- 取值规则：`≤1` 不振荡，`≤2` 稳定。偏软可加到 0.8，抖动则降回 0.3~0.4。

> 关节 `<limit effort="...">` 对位置接口**无影响**，只在 effort/velocity 接口下才生效。

### 3. controller_manager 由 Gazebo 插件拉起

无需单独启动 `ros2_control_node`。`GazeboSimROS2ControlPlugin` 会在 Gazebo 进程内实例化
controller_manager，`spawn_entity` 生成机器人后自动上线；只需用 `spawner` 往其中加载控制器。

---

## 四、传统方式：SDF + PID 关节控制（旧版）

该方式使用 Gazebo 原生 `JointController`（PID）插件直接控制关节，不经过 ros2_control / MoveIt。

```bash
ros2 launch episode1_urdf_1113 gz_simulator_launch.py
```

通过 Gazebo 原生话题以速度模式控制关节：

```bash
# 列出关节话题
gz topic -l | grep joint

# joint1 正转 0.5 rad/s
gz topic -t "/model/episode1_urdf_1113/joint/joint1/cmd_vel" \
  -m gz.msgs.Double -p "data: 0.5"
```

模型文件 `models/robot/model.sdf` 中为每个关节预设了 PID 控制器（`p_gain=200, i_gain=5, d_gain=10`）。

> 该方式为旧版验证用途，后续统一迁移到上文的 ros2_control 流水线。

---

## 五、RViz 查看（无物理）

```bash
ros2 launch episode1_urdf_1113 launch.py
```

用于查看模型结构与 TF，`joint_state_publisher_gui` 可拖拽关节滑块。

---

## 六、常见问题

### Gazebo GUI 闪退

snap 版 VS Code 注入的 `GTK_PATH` 会引导加载 `/snap/core20/.../libpthread.so.0`
（Ubuntu 20.04 的 glibc 2.31），与系统 glibc 2.39 冲突，报
`undefined symbol: __libc_pthread_init`。

`gz_moveit.launch.py` 已内置 `UnsetEnvironmentVariable` 清掉 `GTK_PATH` / `GTK_MODULES` 等
snap 变量，无需手动处理。

### 控制器 spawner 退出码 1（Failed to acquire lock）

两个 spawner 竞争同一个文件锁导致。已合并为单个 spawner 一次加载两个控制器。

### 机械臂抬不起来（看似扭矩不足）

位置接口增益过低导致，见上文「位置接口增益」。不是扭矩问题。

### 机械臂自由落体

清理旧进程与缓存后重启：

```bash
pkill -9 gz 2>/dev/null
rm -rf ~/.gz
```

---

## 七、目录结构

```
episode1_urdf_1113/
├── launch/
│   ├── gz_simulator_launch.py   # 传统 SDF+PID 仿真启动
│   └── launch.py                # RViz 可视化（无物理）
├── world/
│   ├── empty_ground.sdf         # 仿真世界（简版）
│   └── depot.sdf
├── models/robot/                # Gazebo SDF 模型（旧版 PID）
│   ├── model.config
│   └── model.sdf
├── urdf/
│   ├── episode1_urdf_1113.urdf  # URDF 格式模型（权威源）
│   └── robot.sdf                # SDF 格式模型（原始）
├── meshes/
│   ├── visual/                  # 可视化网格 (STL)
│   └── collision/               # 碰撞网格 (STL)
├── config/gz_bridge.yaml        # Gazebo-ROS 桥接
└── rviz/view.rviz               # RViz 配置

episode1_moveit_config/
├── config/
│   ├── episode1_urdf_1113.urdf.xacro          # 汇总 URDF + ros2_control
│   ├── episode1_urdf_1113.ros2_control.xacro  # 硬件接口 + 插件 + 增益
│   ├── episode1_urdf_1113.srdf                # 规划组 / 预置姿态
│   ├── ros2_controllers.yaml                  # 控制器配置
│   ├── moveit_controllers.yaml                # MoveIt 控制器映射
│   ├── gz_bridge.yaml                         # clock 桥接
│   ├── empty_ground.sdf                       # 仿真世界
│   └── ...                                    # kinematics / OMPL / joint_limits
└── launch/
    ├── gz_moveit.launch.py                    # 完整流水线（主入口）
    ├── move_group.launch.py
    ├── moveit_rviz.launch.py
    └── ...
```
