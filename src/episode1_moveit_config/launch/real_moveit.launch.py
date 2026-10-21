"""真机 + MoveIt 一键启动（不使用 Gazebo / ros2_control / 仿真时钟）。

与 gz_moveit.launch.py 的区别：
  - 不启动 Gazebo、ros_gz_bridge、spawn_entity、controller spawner；
  - 控制执行层由 episode_controller 的 `interface` 节点承担（真机 CAN 驱动），
    它同时发布 /joint_states 并提供 FollowJointTrajectory 动作服务器
    （动作名 arm_group_controller/follow_joint_trajectory，与
     moveit_controllers.yaml 对齐）；
  - use_sim_time 默认 false（系统时钟）。

用法：
  ros2 launch episode1_moveit_config real_moveit.launch.py

  如需自行启动真机控制节点（便于传 usb_index/init_mode 等参数）：
  ros2 launch episode1_moveit_config real_moveit.launch.py start_controller:=false
  ros2 run episode_controller interface --ros-args -p publish_mode:=joint_states
"""
import os

from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.conditions import IfCondition
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launch_utils import DeclareBooleanLaunchArg


def generate_launch_description():
    moveit_config = (
        MoveItConfigsBuilder(
            "episode1_urdf_1113", package_name="episode1_moveit_config"
        )
        .to_moveit_configs()
    )

    use_sim_time = LaunchConfiguration("use_sim_time")
    start_controller = LaunchConfiguration("start_controller")

    # 发布 /robot_description 并订阅 /joint_states 计算各连杆 TF
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="screen",
        parameters=[
            moveit_config.robot_description,
            {"use_sim_time": use_sim_time},
        ],
    )

    # 真机控制节点：驱动 CAN、发布 /joint_states、
    # 提供 arm_group_controller/follow_joint_trajectory 动作服务器。
    # 节点默认 publish_mode:=joint_states、init_mode:=1，正是 MoveIt 所需；
    # 需要改 usb_index/init_mode 时用 start_controller:=false 自行启动。
    controller_node = Node(
        package="episode_controller",
        executable="interface",
        name="episode_robot_interface",
        output="screen",
        condition=IfCondition(start_controller),
    )

    # 静态 TF world -> base_link（对应 SRDF 虚拟关节，fixed，无偏移）
    world_to_base_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="world_to_base_link",
        arguments=["0", "0", "0", "0", "0", "0", "world", "base_link"],
    )

    # move_group（默认系统时钟）
    move_group = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                moveit_config.package_path, "launch", "move_group.launch.py"
            )
        ),
        launch_arguments={"use_sim_time": use_sim_time}.items(),
    )

    # RViz（MoveIt 插件）
    rviz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                moveit_config.package_path, "launch", "moveit_rviz.launch.py"
            )
        ),
        launch_arguments={"use_sim_time": use_sim_time}.items(),
    )

    return LaunchDescription(
        [
            DeclareBooleanLaunchArg("use_sim_time", default_value=False),
            DeclareBooleanLaunchArg("start_controller", default_value=True),
            robot_state_publisher,
            controller_node,
            world_to_base_tf,
            move_group,
            rviz,
        ]
    )
