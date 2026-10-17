# 机械臂控制器 (Episode Controller)

## 环境要求

1. **测试环境**: 在 Ubuntu 24.04 + ROS2 Jazzy 下通过测试

2. 无需再使用机械臂上位机软件，所有控制均通过 ROS2 节点完成

## 安装步骤

### 1. 安装 PEAK 驱动
首先需要安装 PEAK 驱动程序，安装完成后可以使用以下命令检查：
```bash
pcaninfo
```

### 2. 安装 Python 相关包
安装 wheelhouse 目录下的 Python 包：
```bash
pip install wheelhouse/*.whl
```


### 3. 编译项目
使用 colcon 编译项目：
```bash
colcon build
```

### 4. 设置环境
```bash
source install/setup.bash
```
## 使用说明

### 启动机械臂控制接口

**方法一：启动机器人（初始化模式）**
在第一个终端中运行：
```bash
ros2 run episode_controller interface --ros-args -p init_mode:=0
```

**方法二：从当前位置恢复**
在第一个终端中运行：
```bash
ros2 run episode_controller interface
```

### 测试机械臂移动

在另一个终端中运行以下命令测试移动功能：
```bash
ros2 run episode_controller client_demo --action move_xyz
```

## 示例代码

所有示例代码位于：
```
src/episode_controller/demo/client_demo.py
```

## 注意事项

- 确保在使用前已正确安装 PEAK 驱动
- 使用前务必先设置 ROS2 环境变量 (`source install/setup.bash`)
- 可以根据需要选择不同的初始化模式