from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from moveit_configs_utils import MoveItConfigsBuilder


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder(
        "episode1_urdf_1113", package_name="episode1_moveit_config"
    ).to_moveit_configs()

    # RViz 的 MoveIt 插件（MotionPlanning / PlanningScene）内部也会用 RDFLoader
    # 加载机器人模型。它先找参数 robot_description / robot_description_semantic，
    # 找不到再去订阅同名话题（std_msgs/String，默认等 10s）。
    # 上游 generate_moveit_rviz_launch 只给 rviz2 传了 planning_pipelines /
    # robot_description_kinematics / joint_limits，没传 robot_description_semantic，
    # 指望 move_group 以 latch 话题发布 SRDF，但该路径在本工程里不可靠，
    # 于是报 "Could not find parameter robot_description_semantic ... within 10s"。
    # 这里把 URDF 和 SRDF 直接作为参数传给 rviz2，让它的 RDFLoader 秒读，
    # 不再依赖话题发布。
    rviz_parameters = [
        moveit_config.robot_description,
        moveit_config.robot_description_semantic,
        moveit_config.planning_pipelines,
        moveit_config.robot_description_kinematics,
        moveit_config.joint_limits,
        {"use_sim_time": LaunchConfiguration("use_sim_time")},
    ]

    rviz_node = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", str(moveit_config.package_path / "config" / "moveit.rviz")],
        parameters=rviz_parameters,
    )

    return LaunchDescription(
        [
            DeclareLaunchArgument("use_sim_time", default_value="true"),
            rviz_node,
        ]
    )
