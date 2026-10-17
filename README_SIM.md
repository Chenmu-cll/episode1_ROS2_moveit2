# 机械臂 Gazebo 仿真指南

## 架构概览

```
┌─────────────────────────────────────────────────────────┐
│                    ROS2 Launch                          │
│                                                         │
│  ┌──────────┐  ┌──────────────┐  ┌──────────────────┐  │
│  │  Gazebo  │  │ ros_gz_bridge│  │ robot_state      │  │
│  │  (世界+  │  │ (话题翻译)   │  │ _publisher       │  │
│  │   机械臂) │  │              │  │ (TF发布)         │  │
│  └────┬─────┘  └──────┬───────┘  └────────┬─────────┘  │
│       │               │                   │             │
│  ┌────┴───────────────┴───────────────────┴─────────┐  │
│  │              通信层                               │  │
│  │  Gazebo Transport ←→ ros_gz_bridge ←→ ROS2 Topic │  │
│  └──────────────────────────────────────────────────┘  │
└─────────────────────────────────────────────────────────┘
```

### 关键文件

| 文件 | 作用 |
|------|------|
| `world/empty_ground.sdf` | 仿真世界：灰色地面 + 光源 + 机械臂 |
| `models/robot/model.sdf` | 机械臂模型（6 关节 + PID 控制器） |
| `models/robot/model.config` | 模型元信息（Gazebo 识别用） |
| `launch/gz_simulator_launch.py` | 一键启动仿真 |
| `launch/launch.py` | RViz 可视化（无物理，仅查看模型） |
| `config/gz_bridge.yaml` | Gazebo ↔ ROS2 话题桥接配置 |

---

## 环境要求

- **OS**: Ubuntu 24.04
- **ROS2**: Jazzy
- **Gazebo**: Harmonic (随 ros-jazzy-ros-gz-sim 安装)
- **VirtualBox**: 需启用 3D 加速 + 软件渲染（见下方）

---

## 快速启动

### 1. 安装依赖

```bash
sudo apt install ros-jazzy-ros-gz-sim ros-jazzy-ros-gz-bridge \
  ros-jazzy-robot-state-publisher ros-jazzy-joint-state-publisher-gui
```

### 2. 编译

```bash
cd ~/student_ros
colcon build
source install/setup.bash
```

### 3. 启动仿真

```bash
export LIBGL_ALWAYS_SOFTWARE=1    # VirtualBox 必需
ros2 launch episode1_urdf_1113 gz_simulator_launch.py
```

### 4. 启动 RViz 可视化（可选）

```bash
ros2 launch episode1_urdf_1113 launch.py
```

---

## 机械臂控制

仿真中通过 Gazebo 原生话题直接控制关节（速度模式）：

### 列出可用关节

```bash
gz topic -l | grep joint
# 输出:
# /model/episode1_urdf_1113/joint/joint1/cmd_vel
# /model/episode1_urdf_1113/joint/joint2/cmd_vel
# ...
```

### 关节控制命令

```bash
# 格式: gz topic -t "/model/模型名/joint/关节名/cmd_vel" -m gz.msgs.Double -p "data: 速度(rad/s)"

# joint1 正转 0.5 rad/s
gz topic -t "/model/episode1_urdf_1113/joint/joint1/cmd_vel" \
  -m gz.msgs.Double -p "data: 0.5"

# 停止
gz topic -t "/model/episode1_urdf_1113/joint/joint1/cmd_vel" \
  -m gz.msgs.Double -p "data: 0.0"

# 批量控制示例
for j in 1 2 3 4 5 6; do
  gz topic -t "/model/episode1_urdf_1113/joint/joint${j}/cmd_vel" \
    -m gz.msgs.Double -p "data: 0.2"
done

# 一键回零（全部停止）
for j in 1 2 3 4 5 6; do
  gz topic -t "/model/episode1_urdf_1113/joint/joint${j}/cmd_vel" \
    -m gz.msgs.Double -p "data: 0.0"
done
```

### PID 参数（已预设）

每个关节的控制器参数（在 `models/robot/model.sdf` 中配置）：

| 参数 | 值 | 含义 |
|------|-----|------|
| p_gain | 200 | 比例增益（响应速度） |
| i_gain | 5 | 积分增益（消除稳态误差） |
| d_gain | 10 | 微分增益（抑制振荡） |
| damping | 5 | 被动阻尼（防自由落体） |
| friction | 1 | 静摩擦（断电保持位置） |

---

## RViz 查看 TF 树

仿真启动后，ROS2 侧可以查看关节状态：

```bash
# 查看 TF 树
ros2 run tf2_tools view_frames

# 监听 joint_states
ros2 topic echo /joint_states

# 查看 TF 变换
ros2 topic echo /tf
```

---

## 对比：仿真 vs 真机

| | 仿真 (Gazebo) | 真机 |
|------|------|------|
| 控制节点 | 不需要 | `episode_controller interface` |
| 通信方式 | Gazebo Transport | CAN 总线 (PEAK) |
| 关节命令 | `gz topic ... cmd_vel` | ROS2 Action (`angle_mode`) |
| Python 依赖 | 不需要 | `episode_controller_core` wheel |
| 夹爪 | 无 3D 模型 | 有伺服夹爪 (0-110°) |

---

## 文件目录结构

```
episode1_urdf_1113/
├── launch/
│   ├── gz_simulator_launch.py   # 仿真启动
│   └── launch.py                # RViz 启动
├── world/
│   └── empty_ground.sdf         # 仿真世界（简版）
├── models/
│   └── robot/
│       ├── model.config         # 模型元信息
│       └── model.sdf            # 机械臂 SDF 模型
├── urdf/
│   ├── episode1_urdf_1113.urdf  # URDF 格式模型
│   └── robot.sdf                # SDF 格式模型（原始）
├── meshes/
│   ├── visual/                  # 可视化网格 (STL)
│   └── collision/               # 碰撞网格 (STL)
├── config/
│   └── gz_bridge.yaml           # Gazebo-ROS 桥接
├── rviz/
│   └── view.rviz                # RViz 配置
└── setup.py                     # 包安装配置
```

---

## VirtualBox 常见问题

### 黑屏 / 无画面

```bash
export LIBGL_ALWAYS_SOFTWARE=1
```

世界文件已使用 `ogre` 替代 `ogre2` 渲染引擎，VirtualBox 兼容。

### 机械臂自由落体

确保启动前清理旧进程：

```bash
pkill -9 gz 2>/dev/null
rm -rf ~/.gz
```

### 看不到关节话题

模型文件路径错误。检查 `GZ_SIM_RESOURCE_PATH` 是否包含 `models/` 目录：

```bash
echo $GZ_SIM_RESOURCE_PATH
```

应包含 `.../share/episode1_urdf_1113/models/`。

---

## SDF 世界文件写法要点

### 1. 世界级插件（`<world><plugin>`）

物理、传感器、渲染等全局系统：

```xml
<world name="xxx">
  <plugin name='gz::sim::systems::Physics' filename='gz-sim-physics-system'/>
  <plugin filename="gz-sim-sensors-system" name="gz::sim::systems::Sensors">
    <render_engine>ogre</render_engine>
  </plugin>
</world>
```

### 2. 模型级插件（`<model><plugin>`）

关节控制器等模型专属功能：

```xml
<model name="robot">
  <plugin filename="gz-sim-joint-controller-system"
          name="gz::sim::systems::JointController">
    <joint_name>joint1</joint_name>
    <p_gain>200</p_gain>
  </plugin>
</model>
```

### 3. `<include>` 加载外部模型

```xml
<include>
  <pose>0 0 0.05 0 0 0</pose>
  <uri>model://robot</uri>  <!-- 解析路径: GZ_SIM_RESOURCE_PATH/models/robot/ -->
</include>
```

`model://` URI 要求在 `GZ_SIM_RESOURCE_PATH` 的某个路径下存在 `模型名/model.config` 文件。

---

## 两种仿真模式对比

| | RViz (launch.py) | Gazebo (gz_simulator_launch.py) |
|------|------|------|
| 用途 | 查看模型结构 + TF | 完整物理仿真 |
| 物理引擎 | 无 | ODE |
| 关节控制 | 滑块拖拽 | `gz topic` 命令 |
| 传感器 | 无 | IMU/Camera/LaserScan |
| GPU 需求 | 低 | 较高（VirtualBox 需软渲染） |
| 启动速度 | 秒开 | 需要初始化物理引擎 |
