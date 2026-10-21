import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    TimerAction,
    SetEnvironmentVariable,
    UnsetEnvironmentVariable,
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

    # ================================================================
    # 清理 snap 环境污染 (物理机 + NVIDIA 独显)
    # ================================================================
    # 根因：本环境通过 snap 版 VS Code 启动，集成终端继承了 snap 的
    #       GTK_PATH=/snap/code/.../gtk-3.0，导致 gz sim gui 的 Qt 进程
    #       加载 /snap/code/.../gtk-3.0/modules/libcanberra-gtk-module.so，
    #       而该 .so 的 RPATH 指向 /snap/core20/.../libpthread.so.0
    #       （Ubuntu 20.04 的 glibc 2.31）。Ubuntu 24.04 系统 glibc 2.39
    #       已把 libpthread 并入 libc，加载旧版 libpthread 会触发
    #       "undefined symbol: __libc_pthread_init, version GLIBC_PRIVATE"，
    #       导致 gz sim gui 闪退、连带 server 一起被回收。
    # 修复：清掉这些 snap 变量，让 Gazebo GUI 使用系统原生库。
    # 注意：必须清 GTK_PATH（不是 SNAP_LIBRARY_PATH）；后者只含显卡驱动
    #       目录（/var/lib/snapd/lib/gl），并不含 core20 的 libpthread。
    clear_snap_gtk_path = UnsetEnvironmentVariable(name="GTK_PATH")
    clear_snap_gtk_modules = UnsetEnvironmentVariable(name="GTK_MODULES")
    clear_snap_pixbuf_dir = UnsetEnvironmentVariable(name="GDK_PIXBUF_MODULEDIR")
    clear_snap_pixbuf_file = UnsetEnvironmentVariable(name="GDK_PIXBUF_MODULE_FILE")
    clear_snap_lib_path = UnsetEnvironmentVariable(name="SNAP_LIBRARY_PATH")

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
        launch_arguments={"gz_args": ["-r -v 4 ", world_path]}.items(),
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
    # ros2_control controller_manager —— 不再单独启动 ros2_control_node！
    # 根因：gz_ros2_control 的 GazeboSimROS2ControlPlugin 在 Gazebo 进程内部
    #       实例化 controller_manager（从 <gazebo><plugin> 里读取嵌套的
    #       <ros2_control> 与 <parameters>）。单独启动的 ros2_control_node
    #       会用基类 hardware_interface::SystemInterface 去加载
    #       GazeboSimSystem，从而抛出 LibraryLoadException（该插件实际注册在
    #       基类 gz_ros2_control::GazeboSimSystemInterface 下）。
    # 因此：spawn_entity 生成机器人后，Gazebo 插件会自动拉起 controller_manager，
    #       我们只需要用 spawner 往它里面加载控制器即可。
    # ================================================================

    # ================================================================
    # 加载控制器 (joint_state_broadcaster + arm_group_controller)
    # ================================================================
    # 合并成一个 spawner 一次性加载两个控制器。
    # 根因：之前分开成两个 spawner（jsb @7s、arm @8s），它们共用同一个
    #       ~/.ros/locks/ros2-control-controller-spawner.lock 文件锁。
    #       先拿到锁的 jsb spawner 若在 list_controllers 上等待
    #       controller_manager（Gazebo 内的 CM 尚未就绪时 service_timeout=0
    #       会无限等待），就会一直占着锁不放，导致 arm spawner 5 次
    #       (20s+3s) 全部超时 → "Failed to acquire lock" → exit 1。
    #       单个 spawner 按顺序加载 joint_state_broadcaster → arm_group_controller，
    #       只拿一次锁，彻底消除锁竞争。
    spawn_controllers = Node(
        package="controller_manager",
        executable="spawner",
        arguments=["joint_state_broadcaster", "arm_group_controller"],
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
            clear_snap_gtk_path,
            clear_snap_gtk_modules,
            clear_snap_pixbuf_dir,
            clear_snap_pixbuf_file,
            clear_snap_lib_path,
            gz_resource_path,
            gz_sim,
            bridge,
            robot_state_publisher,
            world_to_base_tf,
            # 等 Gazebo 启动后再生成机器人
            TimerAction(period=3.0, actions=[spawn_entity]),
            # 机器人 spawn 后，Gazebo 插件内的 controller_manager 自动上线；
            # 等它准备好再加载控制器
            TimerAction(period=7.0, actions=[spawn_controllers]),
            # 等控制器加载完再启动 MoveIt
            TimerAction(period=10.0, actions=[move_group]),
            # RViz 最后启动
            TimerAction(period=12.0, actions=[rviz]),
        ]
    )
