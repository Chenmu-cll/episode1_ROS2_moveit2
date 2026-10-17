import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup

from control_msgs.action import FollowJointTrajectory
from robot_arm_interfaces.action import AngleMode, MoveXyzRotation, LinearMove
from robot_arm_interfaces.srv import ReadMotorAngles, GripperControl, ServoGripper, SetFreeMode
from robot_arm_interfaces.msg import MotorAngles
from sensor_msgs.msg import JointState

# only for development debug
# from .core.controller_core import MotorControl
# for production use:
from episode_controller_core.controller_core import MotorControl
import time
import math
import threading
from typing import List
import numpy as np



class EpisodeRobotInterface(Node):

    def __init__(self):
        super().__init__('episode_robot_interface')

        # 使用 ReentrantCallbackGroup 允许并发处理 Action 请求
        self.callback_group = ReentrantCallbackGroup()

        # 定义 Episode 机器人的关节名称（与 MoveIt 期望的名称一致）
        self.joint_names = ['joint1', 'joint2', 'joint3', 'joint4', 'joint5', 'joint6']

        # 关节回零超时时间配置（秒）
        self.joint_calibration_timeout = 120.0  # 每个关节最大回零时间120秒

        # 缓存的电机角度，避免在回调中重复读取CAN
        self.cached_motor_angles = [0.0] * 6

        # 声明并获取初始化参数
        self.declare_parameter('usb_index', 1)
        self.declare_parameter('init_mode', 1)  # 0: calibration, 1: recover from current
        usb_index = self.get_parameter('usb_index').get_parameter_value().integer_value
        init_mode = self.get_parameter('init_mode').get_parameter_value().integer_value

        # 声明并获取publish_mode参数 ('motor_angles' 或 'joint_states')
        self.declare_parameter('publish_mode', 'joint_states')
        self.publish_mode = self.get_parameter('publish_mode').get_parameter_value().string_value

        # 初始化电机控制
        self.motor_control = None
        # 串行化对电机/CAN 的访问：任意运动期间持锁，短操作（读取、夹爪等）非阻塞获取。
        self._motor_lock = threading.Lock()

        # 在后台线程中执行初始化，避免阻塞节点启动
        self._init_thread = threading.Thread(
            target=self._perform_initialization,
            args=(usb_index, init_mode),
            daemon=True,
            name='motor_init',
        )
        self._init_thread.start()

        # 创建 Action Server 用于接收 MoveIt 的 FollowJointTrajectory 动作
        self._moveit_action_server = ActionServer(
            self,
            FollowJointTrajectory,
            'episode_arm_controller/follow_joint_trajectory',
            self.follow_joint_trajectory_callback,
            callback_group=self.callback_group
        )

        # 创建角度模式动作服务器
        self._angle_mode_action_server = ActionServer(
            self,
            AngleMode,
            'angle_mode',
            self.angle_mode_callback,
            callback_group=self.callback_group)

        # 创建位姿模式动作服务器
        self._move_xyz_rotation_action_server = ActionServer(
            self,
            MoveXyzRotation,
            'move_xyz_rotation',
            self.move_xyz_rotation_callback,
            callback_group=self.callback_group)

        # 创建直线运动动作服务器
        self._linear_move_action_server = ActionServer(
            self,
            LinearMove,
            'linear_move',
            self.linear_move_callback,
            callback_group=self.callback_group)

        # 创建服务服务器，用于读取电机角度
        self._service_server = self.create_service(
            ReadMotorAngles,
            'read_motor_angles',
            self.read_motor_angles_callback,
            callback_group=self.callback_group)

        # 创建夹爪控制服务服务器
        self._gripper_control_server = self.create_service(
            GripperControl,
            'gripper_control',
            self.gripper_control_callback,
            callback_group=self.callback_group)

        # 创建舵机夹爪服务服务器
        self._servo_gripper_server = self.create_service(
            ServoGripper,
            'servo_gripper',
            self.servo_gripper_callback,
            callback_group=self.callback_group)

        # 创建自由模式服务服务器
        self._set_free_mode_server = self.create_service(
            SetFreeMode,
            'set_free_mode',
            self.set_free_mode_callback,
            callback_group=self.callback_group)

        # 创建话题发布器，根据publish_mode参数选择
        if self.publish_mode == 'joint_states':
            # 创建joint_states发布器，用于MoveIt集成
            self._joint_states_publisher = self.create_publisher(
                JointState,
                'joint_states',
                10)  # 队列大小为10
            
        else:
            # 创建motor_angles发布器（默认行为）
            self._motor_angles_publisher = self.create_publisher(
                MotorAngles,
                'motor_angles',
                10)  # 队列大小为10

        # 创建定时器，根据publish_mode选择不同的回调和频率
        
        if self.publish_mode == 'joint_states':
            hz = 120.0
            # 这里不能用 ReentrantCallbackGroup，否则会导致CAN堵塞
            self._timer = self.create_timer(1.0 / hz, self.publish_joint_states)
            self.get_logger().info(f'以{hz}Hz频率发布关节状态')
        else:
            # 30Hz (1 second)
            # 使用 ReentrantCallbackGroup 允许定时器与动作服务器并发执行
            self._timer = self.create_timer(1.0 / 30.0, self.publish_motor_angles, callback_group=self.callback_group)
            self.get_logger().info('以30Hz频率发布电机角度')

        # 打印日志，显示节点已启动
        self.get_logger().info('Episode1机械臂接口准备就绪')

    def _perform_initialization(self, usb_index, init_mode):
        """
        执行初始化流程，根据init_mode选择回零或恢复当前位置
        """
        self.get_logger().info(f'开始初始化: usb_index={usb_index}, init_mode={init_mode}')
        
        # 初始化电机控制
        try:
            self._initialize_motor_control(usb_index)
        except RuntimeError as e:
            self.motor_control = None
            self.get_logger().error(f'初始化失败: {str(e)}')
            return

        if init_mode == 1:
            # 从当前位置恢复
            with self._motor_lock:
                last = self.motor_control.read_motor_angles()
            if not last:
                self.get_logger().error('从当前位置恢复失败 - 无法读取电机角度')
                return
            
            # 更新系统记录的角度
            self.motor_control.last_degrees = [
                last[i] * self.motor_control.motor_ratios[i] for i in range(6)
            ]
            self.get_logger().info(f'成功从当前位置恢复: {last}')
        else:
            # 回零初始化
            self.get_logger().info('开始回零校准流程...')
            
            for joint_index, addr in enumerate(self.motor_control.motor_address):
                self.get_logger().info(f'正在校准关节 {joint_index}...')
                
                with self._motor_lock:
                    self.motor_control.trigger_home(addr, 0x02)
                time.sleep(0.05)
                
                joint_start_time = time.perf_counter()
                
                while True:
                    if not rclpy.ok():
                        self.get_logger().warn('初始化期间检测到节点关闭，中止校准')
                        return
                    with self._motor_lock:
                        done = self.motor_control.check_home_status(addr)
                    
                    if done:
                        self.get_logger().info(f'关节 {joint_index} 校准完成')
                        break
                    else:
                        joint_elapsed_time = time.perf_counter() - joint_start_time
                        if joint_elapsed_time > self.joint_calibration_timeout:
                            self.get_logger().error(f'关节 {joint_index} 校准超时')
                            return
                        
                        time.sleep(0.5)
            
            # 运行到默认位置
            time.sleep(1)
            target = [180, 90, 83, 30, 110, 30]
            with self._motor_lock:
                t = self.motor_control.execute_motors_degrees_normal(target)
            time.sleep(t)
            
            self.get_logger().info(f'校准完成，已移动到默认位置: {target}')

    def _initialize_motor_control(self, usb_index):
        """
        初始化电机控制，如果已经用相同的usb_index初始化过则跳过
        """
        if self.motor_control is None or getattr(self.motor_control, 'usb_index', None) != usb_index:
            self.get_logger().info(f'正在初始化电机控制，usb_index={usb_index}')
            self.motor_control = MotorControl(usb_index)
            # 存储usb_index以便后续比较
            self.motor_control.usb_index = usb_index
            
            if not self.motor_control.initialized:
                self.get_logger().error(f'初始化电机控制失败，usb_index={usb_index} - CAN设备初始化失败')
                raise RuntimeError(f'电机控制初始化失败，usb_index={usb_index}')
            
            self.get_logger().info(f'电机控制初始化成功，usb_index={usb_index}')

    def _read_motor_angles_safe(self, timeout=0.0):
        """
        在电机锁保护下读取电机角度。

        运动期间（锁被运动线程持有）非阻塞失败并返回 None，调用方应回退到缓存值，
        避免定时器/服务回调在 CAN 忙碌时长时间阻塞。
        """
        if self.motor_control is None:
            return None
        if not self._motor_lock.acquire(timeout=timeout):
            self.get_logger().debug('电机忙（运动进行中），跳过实时读取，使用缓存角度')
            return None
        try:
            return self.motor_control.read_motor_angles()
        finally:
            self._motor_lock.release()

    def _request_motion_stop(self):
        """
        尽力让底层电机停止运动（若 MotorControl 提供停止接口）。

        在取消路径中调用，此时电机锁通常仍被运动线程持有，因此直接调用停止接口
        （紧急停止），不再额外获取锁。
        """
        if self.motor_control is None:
            return
        for method_name in ('emergency_stop', 'stop', 'stop_motion', 'halt'):
            method = getattr(self.motor_control, method_name, None)
            if callable(method):
                try:
                    method()
                    self.get_logger().info(f'已调用电机停止接口: {method_name}()')
                    return
                except Exception as e:
                    self.get_logger().warn(f'调用电机停止接口 {method_name}() 失败: {e}')
        self.get_logger().warn('MotorControl 未提供停止接口，运动将自然结束')

    def publish_motor_angles(self):
        """
        定时器回调函数，每秒发布一次电机角度
        """
        # 只有在motor_control已初始化时才发布
        if self.motor_control is None:
            return
        
        try:
            # 读取电机角度（非阻塞，运动期间回退到缓存）
            angles = self._read_motor_angles_safe()
            
            # 创建消息
            msg = MotorAngles()
            msg.timestamp = self.get_clock().now().to_msg()
            
            if angles and all(angle is not None for angle in angles):
                msg.angles = angles
                msg.success = True
                msg.message = "Topic-发布角度-成功"
                # 更新缓存的角度
                self.cached_motor_angles = list(angles)
            
            else:
                msg.angles =  self.cached_motor_angles  # 返回默认值
                msg.success = False
                msg.message = "Topic-发布角度-失败 - 某些角度为None"
            
            # 发布消息
            self._motor_angles_publisher.publish(msg)
            
            # 记录日志（可选，避免过多日志输出）
            if msg.success:
                self.get_logger().debug(f'Published motor angles: {angles}')
            else:
                self.get_logger().warn(msg.message)
                
        except Exception as e:
            # 创建错误消息
            msg = MotorAngles()
            msg.timestamp = self.get_clock().now().to_msg()
            msg.angles = self.cached_motor_angles
            msg.success = False
            msg.message = f"Topic-发布角度-失败 - 读取电机角度时出错: {str(e)}"
            
            # 发布错误消息
            self._motor_angles_publisher.publish(msg)
            self.get_logger().error(msg.message)

    def publish_joint_states(self):
        """
        定时器回调函数，每1/60秒发布一次joint_states
        """
        # 只有在motor_control已初始化时才发布
        if self.motor_control is None:
            return

        try:
            # 读取电机角度（单位：度，非阻塞，运动期间回退到缓存）
            angles_deg = self._read_motor_angles_safe()

            # 创建JointState消息
            msg = JointState()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.header.frame_id = ''
            msg.name = self.joint_names

            if angles_deg and all(angle is not None for angle in angles_deg):
                # 更新缓存的角度
                self.cached_motor_angles = list(angles_deg)
                # 减去偏移量，将电机角度转换为Moveit关节角度
                offsets = [180, 90, 83, 30, 110, 30]
                joint_angles_deg = [angles_deg[i] - offsets[i] for i in range(6)]

                # 转换为弧度
                msg.position = [math.radians(angle) for angle in joint_angles_deg]
                msg.velocity = []
                msg.effort = []

                # 发布消息
                self._joint_states_publisher.publish(msg)

                # 记录调试日志（可选，避免过多日志输出）
                self.get_logger().debug(f'Published joint_states: {joint_angles_deg}')
            else:
                self.get_logger().warn('Failed to publish joint_states - Some angles are None')

        except Exception as e:
            self.get_logger().info(f'Failed to publish joint_states - Error reading motor angles: {str(e)}')

    def read_motor_angles_callback(self, request, response):
        """
        读取电机角度的服务回调函数
        """
        try:
            # 检查motor_control是否已初始化
            if self.motor_control is None:
                response.angles =  self.cached_motor_angles
                response.success = False
                response.message = "Services-读取角度-失败 - 电机控制未初始化，请先运行初始化动作"
                self.get_logger().error(response.message)
                return response
            
            # 实时读取电机角度（最多等待1秒，运动期间回退到缓存）
            angles = self._read_motor_angles_safe(timeout=1.0)
            
            if angles and all(angle is not None for angle in angles):
                # 更新缓存
                self.cached_motor_angles = list(angles)
                response.angles = angles
                response.success = True
                response.message = "Services-读取角度-成功"
                self.get_logger().info( response.message + f": {angles}")
            else:
                response.angles = self.cached_motor_angles  # 返回默认值
                response.success = False
                response.message = "Services-读取角度-失败 - 某些角度为None"
                self.get_logger().error(response.message)
                
        except Exception as e:
            response.angles = self.cached_motor_angles  # 返回默认值
            response.success = False
            response.message = f"Services-读取角度-失败 - 读取电机角度时出错: {str(e)}"
            self.get_logger().error(response.message)
            
        return response

    def gripper_control_callback(self, request, response):
        """
        夹爪控制服务回调函数
        """
        try:
            # 检查motor_control是否已初始化
            if self.motor_control is None:
                response.success = False
                response.message = "Services-夹爪控制-失败 - 电机控制未初始化，请先运行初始化动作"
                self.get_logger().error(response.message)
                return response
            
            # 根据enable参数调用相应的夹爪控制方法（运动期间返回忙）
            if not self._motor_lock.acquire(blocking=False):
                response.success = False
                response.message = "Services-夹爪控制-失败 - 电机忙（运动进行中），请稍后再试"
                self.get_logger().warn(response.message)
                return response
            try:
                if request.enable:
                    self.motor_control.gripper_on()
                    response.success = True
                    response.message = "Services-夹爪控制-成功 - 夹爪开启"
                else:
                    self.motor_control.gripper_off()
                    response.success = True
                    response.message = "Services-夹爪控制-成功 - 夹爪关闭"
            finally:
                self._motor_lock.release()
            self.get_logger().info(response.message)
                
        except Exception as e:
            response.success = False
            response.message = f"Services-夹爪控制-失败 - 控制夹爪时出错: {str(e)}"
            self.get_logger().error(response.message)
            
        return response

    def servo_gripper_callback(self, request, response):
        """
        舵机夹爪服务回调函数
        """
        try:
            # 检查motor_control是否已初始化
            if self.motor_control is None:
                response.success = False
                response.message = "Services-舵机夹爪-失败 - 电机控制未初始化，请先运行初始化动作"
                response.actual_angle = 0
                self.get_logger().error(response.message)
                return response
            
            # 限制角度范围到0-110度
            clamped_angle = max(0, min(int(request.angle), 110))
            
            # 调用舵机夹爪控制方法（运动期间返回忙）
            if not self._motor_lock.acquire(blocking=False):
                response.success = False
                response.message = "Services-舵机夹爪-失败 - 电机忙（运动进行中），请稍后再试"
                response.actual_angle = 0
                self.get_logger().warn(response.message)
                return response
            try:
                self.motor_control.servo_gripper(clamped_angle)
            finally:
                self._motor_lock.release()
            
            response.success = True
            response.message = f"Services-舵机夹爪-成功 - 角度设置为: {clamped_angle}度"
            response.actual_angle = clamped_angle
            self.get_logger().info(response.message)
                
        except Exception as e:
            response.success = False
            response.message = f"Services-舵机夹爪-失败 - 控制舵机夹爪时出错: {str(e)}"
            response.actual_angle = 0
            self.get_logger().error(response.message)
            
        return response

    def set_free_mode_callback(self, request, response):
        """
        自由模式服务回调函数
        """
        try:
            # 检查motor_control是否已初始化
            if self.motor_control is None:
                response.success = False
                response.message = "Services-自由模式-失败 - 电机控制未初始化，请先运行初始化动作"
                self.get_logger().error(response.message)
                return response
            
            # 调用自由模式控制方法（运动期间返回忙）
            # enable: True (1) for free mode, False (0) for locked mode
            if not self._motor_lock.acquire(blocking=False):
                response.success = False
                response.message = "Services-自由模式-失败 - 电机忙（运动进行中），请稍后再试"
                self.get_logger().warn(response.message)
                return response
            try:
                enable_value = 1 if request.enable else 0
                self.motor_control.set_free_mode(enable_value)
            finally:
                self._motor_lock.release()
            
            mode_str = "自由模式" if request.enable else "锁定模式"
            response.success = True
            response.message = f"Services-自由模式-成功 - 已切换到{mode_str}"
            self.get_logger().info(response.message)
                
        except Exception as e:
            response.success = False
            response.message = f"Services-自由模式-失败 - 控制自由模式时出错: {str(e)}"
            self.get_logger().error(response.message)
            
        return response

    def linear_move_callback(self, goal_handle):
        """
        直线运动动作回调函数
        """
        self.get_logger().info('执行直线运动动作...')

        # 检查motor_control是否已初始化
        if self.motor_control is None:
            result = LinearMove.Result()
            result.success = False
            result.message = "Action-直线运动-失败 - 电机控制未初始化，请先运行初始化动作"
            result.execution_time = 0.0
            result.total_steps = 0
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

        # 获取请求参数
        position = list(goal_handle.request.position)
        rotation = list(goal_handle.request.rotation)
        rotation_mode = goal_handle.request.rotation_mode if goal_handle.request.rotation_mode else 'zyx'
        step_size = goal_handle.request.step_size if goal_handle.request.step_size > 0 else 8.0

        self.get_logger().info(
            f'Action-直线运动: 目标位置: {position}, 目标姿态: {rotation}, '
            f'旋转模式: {rotation_mode}, 步长: {step_size}mm'
        )

        start_time = time.perf_counter()

        # 创建反馈消息
        feedback_msg = LinearMove.Feedback()
        feedback_msg.elapsed_time = 0.0
        feedback_msg.progress = 0.0
        feedback_msg.current_step = 0
        feedback_msg.total_steps = 0
        feedback_msg.current_angles =  self.cached_motor_angles
        feedback_msg.status_message = "开始直线运动..."
        goal_handle.publish_feedback(feedback_msg)

        # 创建结果消息
        result = LinearMove.Result()

        try:
            # 同一时刻只允许一个运动，避免并发操作 CAN
            if not self._motor_lock.acquire(blocking=False):
                result.success = False
                result.message = "Action-直线运动-失败 - 已有其它运动在执行"
                result.execution_time = 0.0
                result.total_steps = 0
                self.get_logger().warn(result.message)
                goal_handle.abort()
                return result

            # 在单独的线程中执行运动（运动线程持有电机锁直到运动结束）
            execution_done = threading.Event()
            execution_result = [None]  # 用列表存储结果以便在线程间传递
            
            def execute_motion():
                try:
                    # 调用封装好的直线运动函数
                    success, t_total, total_steps, message = self.motor_control.ros2_linear_move_execute(
                        position, rotation, rotation_mode, step_size
                    )
                    execution_result[0] = (success, t_total, total_steps, message)
                finally:
                    execution_done.set()
                    self._motor_lock.release()
            
            motion_thread = threading.Thread(target=execute_motion, daemon=True)
            motion_thread.start()
            
            # 在运动执行期间提供反馈
            feedback_interval = 0.1  # 每0.1秒更新一次反馈
            while not execution_done.is_set():
                if goal_handle.is_cancel_requested:
                    # 尽力停止运动（底层库若不支持中断，运动将自然结束）
                    self._request_motion_stop()
                    goal_handle.canceled()
                    result.success = False
                    result.message = "Action-直线运动-取消"
                    result.execution_time = float(time.perf_counter() - start_time)
                    result.total_steps = 0
                    # 不要在此 join 运动线程，否则回调会被长时间阻塞
                    return result
                
                # 更新反馈
                elapsed = time.perf_counter() - start_time
                feedback_msg.elapsed_time = elapsed
                feedback_msg.current_angles = self.cached_motor_angles
                feedback_msg.status_message = f"执行直线运动中... ({elapsed:.1f}秒)"
                goal_handle.publish_feedback(feedback_msg)
                
                execution_done.wait(timeout=feedback_interval)
            
            # 等待运动线程完成
            motion_thread.join()
            
            # 获取执行结果
            success, t_total, total_steps, message = execution_result[0]
            execution_time = time.perf_counter() - start_time
            
            if success:
                result.success = True
                result.message = f"Action-直线运动-成功 - {message}, 实际时间: {execution_time:.2f}秒"
                result.execution_time = float(t_total)
                result.total_steps = total_steps
                self.get_logger().info(result.message)
                goal_handle.succeed()
            else:
                result.success = False
                result.message = f"Action-直线运动-失败 - {message}"
                result.execution_time = float(execution_time)
                result.total_steps = total_steps
                self.get_logger().error(result.message)
                goal_handle.abort()
            
            return result

        except Exception as e:
            result.success = False
            result.message = f"Action-直线运动-失败 - 执行直线运动时出错: {str(e)}"
            result.execution_time = float(time.perf_counter() - start_time)
            result.total_steps = 0
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

    def angle_mode_callback(self, goal_handle):
        """
        角度模式动作回调函数
        """
        self.get_logger().info('执行角度模式动作...')

        # 检查motor_control是否已初始化
        if self.motor_control is None:
            result = AngleMode.Result()
            result.success = False
            result.message = "Action-角度模式-失败 - 电机控制未初始化，请先运行初始化动作"
            result.execution_time = 0.0
            result.final_angles = self.cached_motor_angles
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

        # 获取请求参数
        angles = list(goal_handle.request.angles)
        speed_ratio = goal_handle.request.speed_ratio

        start_time = time.perf_counter()

        # 创建反馈消息
        feedback_msg = AngleMode.Feedback()
        feedback_msg.elapsed_time = 0.0
        feedback_msg.progress = 0.0
        feedback_msg.current_angles = self.cached_motor_angles
        feedback_msg.status_message = "开始角度模式运动..."

        # 创建结果消息
        result = AngleMode.Result()

        try:
            # 执行角度运动
            self.get_logger().info(f'Action-角度模式: 目标角度: {angles}, 速度比例: {speed_ratio}')
            # 同一时刻只允许一个运动，避免并发操作 CAN
            if not self._motor_lock.acquire(blocking=False):
                result.success = False
                result.message = "Action-角度模式-失败 - 已有其它运动在执行"
                result.execution_time = 0.0
                result.final_angles = self.cached_motor_angles
                self.get_logger().warn(result.message)
                goal_handle.abort()
                return result
            try:
                execution_time = float(self.motor_control.execute_motors_degrees_normal(angles, speed_ratio))
            finally:
                self._motor_lock.release()
            
            
            # 模拟进度反馈
            steps = 10
            for i in range(steps + 1):
                if goal_handle.is_cancel_requested:
                    goal_handle.canceled()
                    result.success = False
                    result.message = "Action-角度模式-取消"
                    result.execution_time = float(time.perf_counter() - start_time)
                    result.final_angles = self.cached_motor_angles
                    return result

                feedback_msg.elapsed_time = time.perf_counter() - start_time
                feedback_msg.progress = i / steps
                feedback_msg.current_angles = self.cached_motor_angles
                feedback_msg.status_message = f"角度模式运动进度: {int(feedback_msg.progress * 100)}%"
                goal_handle.publish_feedback(feedback_msg)
                
                if i < steps:
                    time.sleep(execution_time / steps)

            # 成功
            result.success = True
            result.message = f"Action-角度模式-成功 - 预计运动时间: {round(execution_time, 2)} 秒"
            result.execution_time = float(round(execution_time, 2))
            result.final_angles =  self.cached_motor_angles
            
            self.get_logger().info(result.message)
            goal_handle.succeed()
            return result

        except Exception as e:
            result.success = False
            result.message = f"Action-角度模式-失败 - 执行角度运动时出错: {str(e)}"
            result.execution_time = float(time.perf_counter() - start_time)
            result.final_angles = self.cached_motor_angles
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

    def move_xyz_rotation_callback(self, goal_handle):
        """
        位姿模式动作回调函数
        """
        self.get_logger().info('执行位姿模式动作...')

        # 检查motor_control是否已初始化
        if self.motor_control is None:
            result = MoveXyzRotation.Result()
            result.success = False
            result.message = "Action-位姿模式-失败 - 电机控制未初始化，请先运行初始化动作"
            result.execution_time = 0.0
            result.solution_angles = self.cached_motor_angles
            result.final_position = [0.0] * 3
            result.final_rotation = [0.0] * 3
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

        # 获取请求参数
        position = list(goal_handle.request.position)
        rotation = list(goal_handle.request.rotation)
        ik_mode = goal_handle.request.ik_mode
        speed_ratio = goal_handle.request.speed_ratio

        start_time = time.perf_counter()

        # 创建反馈消息
        feedback_msg = MoveXyzRotation.Feedback()
        feedback_msg.elapsed_time = 0.0
        feedback_msg.progress = 0.0
        feedback_msg.current_angles = self.cached_motor_angles
        feedback_msg.status_message = "开始位姿模式运动..."

        # 创建结果消息
        result = MoveXyzRotation.Result()

        try:
            self.get_logger().info(f'Action-位姿模式: 目标位置: {position}, 目标姿态: {rotation}, IK模式: {ik_mode}, 速度比例: {speed_ratio}')
            
            # 执行逆运动学求解
            sol = self.motor_control.ik_normal_move(position, rotation, ik_mode)
            
            if sol is not None:
                rounded_angles = [round(x, 2) for x in sol]
                # 同一时刻只允许一个运动，避免并发操作 CAN
                if not self._motor_lock.acquire(blocking=False):
                    result.success = False
                    result.message = "Action-位姿模式-失败 - 已有其它运动在执行"
                    result.execution_time = 0.0
                    result.solution_angles = self.cached_motor_angles
                    result.final_position = [0.0] * 3
                    result.final_rotation = [0.0] * 3
                    self.get_logger().warn(result.message)
                    goal_handle.abort()
                    return result
                try:
                    execution_time = float(self.motor_control.execute_motors_degrees_normal(rounded_angles, speed_ratio))
                finally:
                    self._motor_lock.release()
                
                # 模拟进度反馈
                steps = 10
                for i in range(steps + 1):
                    if goal_handle.is_cancel_requested:
                        goal_handle.canceled()
                        result.success = False
                        result.message = "Action-位姿模式-取消"
                        result.execution_time = float(time.perf_counter() - start_time)
                        result.solution_angles = self.cached_motor_angles
                        result.final_position = [0.0] * 3
                        result.final_rotation = [0.0] * 3
                        return result

                    feedback_msg.elapsed_time = time.perf_counter() - start_time
                    feedback_msg.progress = i / steps
                    feedback_msg.current_angles = self.cached_motor_angles
                    feedback_msg.status_message = f"位姿模式运动进度: {int(feedback_msg.progress * 100)}%"
                    goal_handle.publish_feedback(feedback_msg)
                    
                    if i < steps:
                        time.sleep(execution_time / steps)

                # 成功
                result.success = True
                result.message = f"Action-位姿模式-成功 - IK求解成功，角度解: {rounded_angles}, 预计运动时间: {round(execution_time, 2)} 秒"
                result.execution_time = float(round(execution_time, 2))
                result.solution_angles = rounded_angles
                result.final_position = position  # 假设达到目标位置
                result.final_rotation = rotation  # 假设达到目标姿态
                
                self.get_logger().info(result.message)
                goal_handle.succeed()
                return result
            else:
                # IK无解
                result.success = False
                result.message = "Action-位姿模式-失败 - IK无解"
                result.execution_time = float(time.perf_counter() - start_time)
                result.solution_angles =  self.cached_motor_angles
                result.final_position = [0.0] * 3
                result.final_rotation = [0.0] * 3
                
                self.get_logger().error(result.message)
                goal_handle.abort()
                return result

        except Exception as e:
            result.success = False
            result.message = f"Action-位姿模式-失败 - 执行位姿运动时出错: {str(e)}"
            result.execution_time = float(time.perf_counter() - start_time)
            result.solution_angles = self.cached_motor_angles
            result.final_position = [0.0] * 3
            result.final_rotation = [0.0] * 3
            self.get_logger().error(result.message)
            goal_handle.abort()
            return result

    def follow_joint_trajectory_callback(self, goal_handle):
        """
        处理 MoveIt 发送的 FollowJointTrajectory 动作请求。
        """
        self.get_logger().info('接收到MoveIt发送的轨迹')

        # 提取 FollowJointTrajectory 动作请求中的轨迹数据
        goal = goal_handle.request
        trajectory = goal.trajectory


        # 验证轨迹是否包含有效点
        if not trajectory.points:
            self.get_logger().error('轨迹没有点')
            goal_handle.abort()
            result = FollowJointTrajectory.Result()
            result.error_code = FollowJointTrajectory.Result.INVALID_GOAL
            result.error_string = 'Trajectory has no points'
            return result

        self.get_logger().info(f'轨迹包含 {len(trajectory.points)} 个点')

      
        # 默认：执行完整轨迹数据（插值）
        # 同一时刻只允许一个运动，避免并发操作 CAN
        if not self._motor_lock.acquire(blocking=False):
            self.get_logger().warn('已有其它运动在执行，拒绝新的轨迹')
            goal_handle.abort()
            result = FollowJointTrajectory.Result()
            result.error_code = FollowJointTrajectory.Result.INVALID_GOAL
            result.error_string = 'Another motion is already in progress'
            return result
        try:
            completed = self._move_trajectory_data(goal_handle, trajectory)
        finally:
            self._motor_lock.release()

        if not completed:
            # 轨迹执行已被取消，_move_trajectory_data 内已调用 goal_handle.canceled()
            result = FollowJointTrajectory.Result()
            result.error_code = FollowJointTrajectory.Result.INVALID_GOAL
            result.error_string = "Trajectory execution canceled"
            return result

        # 执行完成后标记为成功
        goal_handle.succeed()

        # 返回成功结果
        result = FollowJointTrajectory.Result()
        result.error_code = FollowJointTrajectory.Result.SUCCESSFUL
        result.error_string = "Trajectory execution completed successfully"
        self.get_logger().info('轨迹执行成功完成')

        return result


    def _interpolate_trajectory(self, trajectory, interpolation_factor=3):
        """
        对轨迹进行线性插值，在每两个点之间生成额外的中间点

        Args:
            trajectory: 原始轨迹
            interpolation_factor: 插值因子，在每两个点之间生成的中间点数量

        Returns:
            interpolated_points: 插值后的轨迹点列表
        """
        from trajectory_msgs.msg import JointTrajectoryPoint
        from builtin_interfaces.msg import Duration

        original_points = trajectory.points
        if len(original_points) < 2:
            return original_points

        interpolated_points = []

        for i in range(len(original_points) - 1):
            current_point = original_points[i]
            next_point = original_points[i + 1]

            # 添加当前点
            interpolated_points.append(current_point)

            # 在当前点和下一点之间插值
            for j in range(1, interpolation_factor + 1):
                # 计算插值比例
                alpha = j / (interpolation_factor + 1)

                # 创建插值点
                interp_point = JointTrajectoryPoint()

                # 插值位置
                interp_point.positions = [
                    current_point.positions[k] + alpha * (next_point.positions[k] - current_point.positions[k])
                    for k in range(len(current_point.positions))
                ]

                # 插值速度（如果存在）
                if current_point.velocities and next_point.velocities:
                    interp_point.velocities = [
                        current_point.velocities[k] + alpha * (next_point.velocities[k] - current_point.velocities[k])
                        for k in range(len(current_point.velocities))
                    ]
                else:
                    interp_point.velocities = []

                # 插值加速度（如果存在）
                if current_point.accelerations and next_point.accelerations:
                    interp_point.accelerations = [
                        current_point.accelerations[k] + alpha * (next_point.accelerations[k] - current_point.accelerations[k])
                        for k in range(len(current_point.accelerations))
                    ]
                else:
                    interp_point.accelerations = []

                # 插值时间
                current_time = current_point.time_from_start.sec + current_point.time_from_start.nanosec * 1e-9
                next_time = next_point.time_from_start.sec + next_point.time_from_start.nanosec * 1e-9
                interp_time = current_time + alpha * (next_time - current_time)

                interp_point.time_from_start = Duration()
                interp_point.time_from_start.sec = int(interp_time)
                interp_point.time_from_start.nanosec = int((interp_time - int(interp_time)) * 1e9)

                interpolated_points.append(interp_point)

        # 添加最后一个点
        interpolated_points.append(original_points[-1])

        return interpolated_points

    def _move_trajectory_data(self, goal_handle, trajectory):
        """
        执行轨迹数据（位置信息）
        使用 MoveIt 生成的时间戳来控制轨迹执行。
        对轨迹进行插值以获得更平滑的运动。
        """
        total_points = len(trajectory.points)

        # 插值因子
        interpolation_factor = 15
        interpolated_points = self._interpolate_trajectory(trajectory, interpolation_factor)
        total_interpolated = len(interpolated_points)
        
        # 获取轨迹总时长（默认0，避免插值点为空时 total_duration 未定义）
        total_duration = 0.0
        if interpolated_points:
            last_point = interpolated_points[-1]
            total_duration = last_point.time_from_start.sec + last_point.time_from_start.nanosec * 1e-9
            self.get_logger().info(f'MoveIt规划的轨迹时长: {total_duration:.3f} 秒')
        

                # 记录轨迹执行开始时间（用于计算总执行时长）
        trajectory_start_time = time.perf_counter()
        last_point_time = trajectory_start_time
        
        # 重置motor_control的内部轨迹计时器
        self.motor_control._trajectory_start_time = None

        # 遍历插值后的轨迹点，使用 MoveIt 的时间戳
        for i, point in enumerate(interpolated_points):
            if goal_handle.is_cancel_requested:
                self.get_logger().info('轨迹执行已取消')
                goal_handle.canceled()
                return False

            # 使用动态移动函数，传入轨迹点信息
            self.motor_control.dynamic_move_with_velocity(trajectory_point=point)

            # 计算实际FPS（每个点的执行频率），用于调试，需要时可以取消注释

            # current_time = time.perf_counter()
            # point_duration = current_time - last_point_time
            # real_fps = 1.0 / point_duration if point_duration > 0 else 0.0
            # last_point_time = current_time
            
            # # 打印关节位置、速度和实际FPS
            # positions_deg = [math.degrees(pos) for pos in point.positions]
            # velocities_deg = [math.degrees(vel) for vel in point.velocities] if point.velocities else [0.0] * 6
            
            # self.get_logger().info(
            #     f"Point {i+1}/{total_interpolated} | "
            #     f"Pos(deg): [{', '.join([f'{p:.2f}' for p in positions_deg])}] | "
            #     f"Vel(deg/s): [{', '.join([f'{v:.2f}' for v in velocities_deg])}] | "
            #     f"Real FPS: {real_fps:.1f}"
            # )

            # 发布当前点的反馈（位置信息）
            feedback = FollowJointTrajectory.Feedback()
            feedback.joint_names = trajectory.joint_names
            feedback.actual.positions = point.positions
            feedback.actual.time_from_start = point.time_from_start
            goal_handle.publish_feedback(feedback)

            
        # 记录总执行时间
        total_execution_time = time.perf_counter() - trajectory_start_time
        self.get_logger().info(f"轨迹包含 {total_points} 个原始点, {total_interpolated} 个插值点 (插值因子={interpolation_factor})")
        self.get_logger().info(f"规划时长: {total_duration:.3f}秒, 实际时长: {total_execution_time:.3f}秒, 误差: {(total_execution_time - total_duration)*1000:.1f}毫秒")
        
        self.get_logger().info("轨迹执行完成")
        return True

   

def main(args=None):
    rclpy.init(args=args)

    episode_robot_interface = EpisodeRobotInterface()

    # 使用 MultiThreadedExecutor 以支持并发回调执行
    from rclpy.executors import MultiThreadedExecutor
    executor = MultiThreadedExecutor(num_threads=4)
    executor.add_node(episode_robot_interface)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        episode_robot_interface.destroy_node()


if __name__ == '__main__':
    main()