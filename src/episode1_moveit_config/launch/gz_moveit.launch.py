import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
    SetEnvironmentVariable,
)
from launch.substitutions import LaunchConfiguration, Command
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from pathlib import Path


def generate_launch_description():

    # ================================================================
    # 包路径
    # ================================================================
    moveit_config_pkg = get_package_share_directory("episode1_moveit_config")
    urdf_pkg = get_package_share_directory("episode1_urdf_1113")

    # ================================================================
    # URDF (xacro 处理，包含 ros2_control 标签)
    # ================================================================
    urdf_xacro_path = os.path.join(
        moveit_config_pkg, "config", "episode1_urdf_1113.urdf.xacro"
    )
    robot_description_content = Command(
        [
            "xacro",
            " ",
            urdf_xacro_path,
            " initial_positions_file:=",
            os.path.join(moveit_config_pkg, "config", "initial_positions.yaml"),
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    # ================================================================
    # Gazebo 相关
    # ================================================================
    world_path = os.path.join(moveit_config_pkg, "config", "empty_ground.sdf")

    # 软件渲染 (VirtualBox/无GPU环境必须)
    software_render = SetEnvironmentVariable(
        name="LIBGL_ALWAYS_SOFTWARE",
        value="1",
    )

    gz_resource_path = SetEnvironmentVariable(
        name="GZ_SIM_RESOURCE_PATH",
        value=":".join(
            [
                os.path.join(urdf_pkg, "world"),
                os.path.join(urdf_pkg, "models"),
                str(Path(urdf_pkg).parent.resolve()),
            ]
        ),
    )

    gz_sim = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                get_package_share_directory("ros_gz_sim"),
                "launch",
                "gz_sim.launch.py",
            )
        ),
        launch_arguments={"gz_args": ["-r -s -v 4 ", world_path]}.items(),
    )

    # ================================================================
    # ros_gz_bridge (话题桥接)
    # ================================================================
    bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        parameters=[
            {
                "config_file": os.path.join(moveit_config_pkg, "config", "gz_bridge.yaml"),
            }
        ],
        output="screen",
    )

    # ================================================================
    # robot_state_publisher
    # ================================================================
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        output="screen",
        parameters=[robot_description, {"use_sim_time": True}],
    )

    # ================================================================
    # 在 Gazebo 中生成机器人 (URDF via param)
    # ================================================================
    spawn_entity = Node(
        package="ros_gz_sim",
        executable="create",
        arguments=[
            "-name",
            "episode1_urdf_1113",
            "-topic",
            "robot_description",
            "-x",
            "0",
            "-y",
            "0",
            "-z",
            "0.05",
        ],
        output="screen",
    )

    # ================================================================
    # world -> base_link 静态 TF（虚拟关节），供 MoveIt 规划场景使用
    # ================================================================
    world_to_base_tf = Node(
        package="tf2_ros",
        executable="static_transform_publisher",
        name="world_to_base_link",
        arguments=["0", "0", "0.05", "0", "0", "0", "world", "base_link"],
    )

    # ================================================================
    # ros2_control controller_manager
    # ================================================================
    controller_manager_yaml = os.path.join(
        moveit_config_pkg, "config", "ros2_controllers.yaml"
    )
    controller_manager = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, controller_manager_yaml, {"use_sim_time": True}],
        output="screen",
    )

    # ================================================================
    # 加载控制器 (joint_state_broadcaster + arm_group_controller)
    # ================================================================
    spawn_jsb = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster"],
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    spawn_arm_ctrl = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["arm_group_controller"],
        output="screen",
        parameters=[{"use_sim_time": True}],
    )

    # ================================================================
    # MoveIt move_group
    # ================================================================
    move_group = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                moveit_config_pkg, "launch", "move_group.launch.py"
            )
        ),
        launch_arguments={"use_sim_time": "true"}.items(),
    )

    # ================================================================
    # RViz (MoveIt 插件)
    # ================================================================
    rviz = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(
                moveit_config_pkg, "launch", "moveit_rviz.launch.py"
            )
        ),
        launch_arguments={"use_sim_time": "true"}.items(),
    )

    # ================================================================
    # 按顺序启动 (Gazebo → 生成 → 控制器 → MoveIt → RViz)
    # ================================================================
    return LaunchDescription(
        [
            DeclareLaunchArgument(
                "use_sim_time",
                default_value="true",
                description="Use simulation clock if true",
            ),
            software_render,
            gz_resource_path,
            gz_sim,
            bridge,
            robot_state_publisher,
            world_to_base_tf,
            # 等 Gazebo 启动后再生成机器人
            TimerAction(period=3.0, actions=[spawn_entity]),
            # 等机器人 spawn 后再启动 controller_manager（硬件接口需在机器人就位后初始化）
            TimerAction(period=5.0, actions=[controller_manager]),
            # 等 controller_manager 准备好再加载控制器
            TimerAction(period=7.0, actions=[spawn_jsb]),
            TimerAction(period=8.0, actions=[spawn_arm_ctrl]),
            # 等控制器加载完再启动 MoveIt
            TimerAction(period=10.0, actions=[move_group]),
            # RViz 最后启动
            TimerAction(period=12.0, actions=[rviz]),
        ]
    )
