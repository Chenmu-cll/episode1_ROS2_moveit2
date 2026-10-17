import argparse
import random
import time

import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

from robot_arm_interfaces.action import AngleMode, MoveXyzRotation, LinearMove
from robot_arm_interfaces.srv import ReadMotorAngles, GripperControl, ServoGripper, SetFreeMode
from robot_arm_interfaces.msg import MotorAngles


class EpisodeDemoClient(Node):

    def __init__(self):
        super().__init__('episode_demo_client')
        # 初始化action client
        self._angle_mode_client = ActionClient(self, AngleMode, 'angle_mode')
        self._move_xyz_rotation_client = ActionClient(self, MoveXyzRotation, 'move_xyz_rotation')
        # 初始化service client
        self._service_client = self.create_client(ReadMotorAngles, 'read_motor_angles')
        # 初始化gripper control service client
        self._gripper_control_client = self.create_client(GripperControl, 'gripper_control')
        # 初始化servo gripper service client
        self._servo_gripper_client = self.create_client(ServoGripper, 'servo_gripper')
        # 初始化set free mode service client
        self._set_free_mode_client = self.create_client(SetFreeMode, 'set_free_mode')
        # 初始化linear move action client
        self._linear_move_client = ActionClient(self, LinearMove, 'linear_move')
        # 初始化topic subscriber
        self._motor_angles_subscriber = self.create_subscription(
            MotorAngles,
            'motor_angles',
            self.motor_angles_callback,
            10)  # 队列大小为10

    def read_motor_angles(self):
        """
        调用read_motor_angles服务读取电机角度
        """
        # 等待服务可用
        while not self._service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Service not available, waiting again...')
        
        # 创建请求
        request = ReadMotorAngles.Request()
        
        # 发送请求
        self.get_logger().info('Calling read_motor_angles service...')
        future = self._service_client.call_async(request)
        
        # 等待响应
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f'Motor angles: {list(response.angles)}')
                self.get_logger().info(f'Message: {response.message}')
            else:
                self.get_logger().error(f'Failed to read motor angles: {response.message}')
        else:
            self.get_logger().error('Service call failed')
        
        rclpy.shutdown()

    def gripper_control(self, enable):
        """
        调用gripper_control服务控制夹爪开关
        """
        # 等待服务可用
        while not self._gripper_control_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Gripper control service not available, waiting again...')
        
        # 创建请求
        request = GripperControl.Request()
        request.enable = enable
        
        # 发送请求
        action_str = "开启" if enable else "关闭"
        self.get_logger().info(f'Calling gripper_control service to {action_str} gripper...')
        future = self._gripper_control_client.call_async(request)
        
        # 等待响应
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f'Gripper control success: {response.message}')
            else:
                self.get_logger().error(f'Gripper control failed: {response.message}')
        else:
            self.get_logger().error('Gripper control service call failed')
        
        rclpy.shutdown()

    def servo_gripper(self, angle):
        """
        调用servo_gripper服务控制舵机夹爪角度
        """
        # 等待服务可用
        while not self._servo_gripper_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Servo gripper service not available, waiting again...')
        
        # 创建请求
        request = ServoGripper.Request()
        request.angle = angle
        
        # 发送请求
        self.get_logger().info(f'Calling servo_gripper service to set angle to {angle} degrees...')
        future = self._servo_gripper_client.call_async(request)
        
        # 等待响应
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f'Servo gripper success: {response.message}')
                self.get_logger().info(f'Actual angle set: {response.actual_angle} degrees')
            else:
                self.get_logger().error(f'Servo gripper failed: {response.message}')
        else:
            self.get_logger().error('Servo gripper service call failed')
        
        rclpy.shutdown()

    def set_free_mode(self, enable):
        """
        调用set_free_mode服务控制自由模式
        """
        # 等待服务可用
        while not self._set_free_mode_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Set free mode service not available, waiting again...')
        
        # 创建请求
        request = SetFreeMode.Request()
        request.enable = enable
        
        # 发送请求
        mode_str = "自由模式" if enable else "锁定模式"
        self.get_logger().info(f'Calling set_free_mode service to switch to {mode_str}...')
        future = self._set_free_mode_client.call_async(request)
        
        # 等待响应
        rclpy.spin_until_future_complete(self, future)
        
        if future.result() is not None:
            response = future.result()
            if response.success:
                self.get_logger().info(f'Set free mode success: {response.message}')
            else:
                self.get_logger().error(f'Set free mode failed: {response.message}')
        else:
            self.get_logger().error('Set free mode service call failed')
        
        rclpy.shutdown()

    def send_linear_move_goal(self, position, rotation, rotation_mode='zyx', step_size=8.0):
        """
        发送直线运动动作目标
        """
        goal_msg = LinearMove.Goal()
        goal_msg.position = position
        goal_msg.rotation = rotation
        goal_msg.rotation_mode = rotation_mode
        goal_msg.step_size = step_size

        self.get_logger().info(
            f'Sending linear move goal: position={position}, rotation={rotation}, '
            f'mode={rotation_mode}, step_size={step_size}mm'
        )
        # 等待action server连接
        self._linear_move_client.wait_for_server()
        # 发送goal
        self._send_linear_move_future = self._linear_move_client.send_goal_async(
            goal_msg, feedback_callback=self.linear_move_feedback_callback
        )
        # 当goal被接受或拒绝时调用
        self._send_linear_move_future.add_done_callback(self.linear_move_response_callback)

    def linear_move_feedback_callback(self, feedback_msg):
        """直线运动反馈回调"""
        fb = feedback_msg.feedback
        self.get_logger().info(
            f'Linear Move Feedback: progress={fb.progress:.1%}, '
            f'elapsed={fb.elapsed_time:.2f}s, '
            f'step={fb.current_step}/{fb.total_steps}, '
            f'status="{fb.status_message}", '
            f'current_angles={list(fb.current_angles)}'
        )

    def linear_move_response_callback(self, future):
        """直线运动响应回调"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Linear move goal rejected')
            return
        self.get_logger().info('Linear move goal accepted')
        # 等待action server返回结果
        self._get_linear_move_result_future = goal_handle.get_result_async()
        self._get_linear_move_result_future.add_done_callback(self.get_linear_move_result_callback)

    def get_linear_move_result_callback(self, future):
        """直线运动结果回调"""
        result = future.result().result
        self.get_logger().info(
            f'Linear Move Result: success={result.success}, '
            f'message="{result.message}", '
            f'execution_time={result.execution_time:.2f}s, '
            f'total_steps={result.total_steps}'
        )
        # 设置完成标志，让主循环知道动作已完成
        self._linear_move_completed = True

    def motor_angles_callback(self, msg):
        """
        话题订阅回调函数，处理接收到的电机角度消息
        """
        if msg.success:
            self.get_logger().info(f'Received motor angles: {msg.angles}')
        else:
            self.get_logger().warn(f'Received error message: {msg.message}')

    def send_angle_mode_goal(self, angles, speed_ratio=0.5):
        """
        发送角度模式动作目标
        """
        goal_msg = AngleMode.Goal()
        goal_msg.angles = angles
        goal_msg.speed_ratio = speed_ratio

        self.get_logger().info(f'Sending angle mode goal: angles={angles}, speed_ratio={speed_ratio}')
        # 等待action server连接
        self._angle_mode_client.wait_for_server()
        # 发送goal
        self._send_angle_mode_future = self._angle_mode_client.send_goal_async(
            goal_msg, feedback_callback=self.angle_mode_feedback_callback
        )
        # 当goal被接受或拒绝时调用
        self._send_angle_mode_future.add_done_callback(self.angle_mode_response_callback)

    def angle_mode_feedback_callback(self, feedback_msg):
        """角度模式反馈回调"""
        fb = feedback_msg.feedback
        self.get_logger().info(
            f'Angle Mode Feedback: progress={fb.progress:.1%}, '
            f'elapsed={fb.elapsed_time:.2f}s, '
            f'status="{fb.status_message}", '
            f'current_angles={list(fb.current_angles)}'
        )

    def angle_mode_response_callback(self, future):
        """角度模式响应回调"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Angle mode goal rejected')
            return
        self.get_logger().info('Angle mode goal accepted')
        # 等待action server返回结果
        self._get_angle_mode_result_future = goal_handle.get_result_async()
        self._get_angle_mode_result_future.add_done_callback(self.get_angle_mode_result_callback)

    def get_angle_mode_result_callback(self, future):
        """角度模式结果回调"""
        result = future.result().result
        self.get_logger().info(
            f'Angle Mode Result: success={result.success}, '
            f'message="{result.message}", '
            f'execution_time={result.execution_time:.2f}s, '
            f'final_angles={list(result.final_angles)}'
        )
        # 设置完成标志，让主循环知道动作已完成
        self._angle_mode_completed = True

    def send_move_xyz_rotation_goal(self, position, rotation, ik_mode="xyz", speed_ratio=0.5):
        """
        发送位姿模式动作目标
        """
        goal_msg = MoveXyzRotation.Goal()
        goal_msg.position = position
        goal_msg.rotation = rotation
        goal_msg.ik_mode = ik_mode
        goal_msg.speed_ratio = speed_ratio

        self.get_logger().info(f'Sending move xyz rotation goal: position={position}, rotation={rotation}, ik_mode={ik_mode}, speed_ratio={speed_ratio}')
        # 等待action server连接
        self._move_xyz_rotation_client.wait_for_server()
        # 发送goal
        self._send_move_xyz_future = self._move_xyz_rotation_client.send_goal_async(
            goal_msg, feedback_callback=self.move_xyz_rotation_feedback_callback
        )
        # 当goal被接受或拒绝时调用
        self._send_move_xyz_future.add_done_callback(self.move_xyz_rotation_response_callback)

    def move_xyz_rotation_feedback_callback(self, feedback_msg):
        """位姿模式反馈回调"""
        fb = feedback_msg.feedback
        self.get_logger().info(
            f'Move XYZ Rotation Feedback: progress={fb.progress:.1%}, '
            f'elapsed={fb.elapsed_time:.2f}s, '
            f'status="{fb.status_message}", '
            f'current_angles={list(fb.current_angles)}'
        )

    def move_xyz_rotation_response_callback(self, future):
        """位姿模式响应回调"""
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Move xyz rotation goal rejected')
            return
        self.get_logger().info('Move xyz rotation goal accepted')
        # 等待action server返回结果
        self._get_move_xyz_result_future = goal_handle.get_result_async()
        self._get_move_xyz_result_future.add_done_callback(self.get_move_xyz_rotation_result_callback)

    def get_move_xyz_rotation_result_callback(self, future):
        """位姿模式结果回调"""
        result = future.result().result
        self.get_logger().info(
            f'Move XYZ Rotation Result: success={result.success}, '
            f'message="{result.message}", '
            f'execution_time={result.execution_time:.2f}s, '
            f'solution_angles={list(result.solution_angles)}, '
            f'final_position={list(result.final_position)}, '
            f'final_rotation={list(result.final_rotation)}'
        )
        # 设置完成标志，让主循环知道动作已完成
        self._move_xyz_completed = True


def main(args=None):
    # 解析命令行参数
    parser = argparse.ArgumentParser(description='Episode Robot Client - Action and Service Client')
    parser.add_argument('--action', type=str, choices=['read_angles', 'subscribe', 'gripper_on', 'gripper_off', 'servo_gripper', 'free_mode', 'lock_mode', 'angle_mode', 'move_xyz', 'linear_move', 'test'], default='read_angles',
                        help='Action to perform: read_angles=读取电机角度, subscribe=订阅电机角度话题, gripper_on=开启夹爪, gripper_off=关闭夹爪, servo_gripper=设置舵机夹爪角度, free_mode=启用自由模式, lock_mode=锁定模式, angle_mode=角度模式运动, move_xyz=位姿模式运动, linear_move=直线运动, default: read_angles')
    parser.add_argument('--angle', type=int, default=50, 
                        help='Servo gripper angle (0-110 degrees), default: 50 (only used for servo_gripper action)')
    
    # 角度模式参数 (现在使用预定义的角度列表，不需要命令行参数)
    
    # 通用参数
    parser.add_argument('--speed_ratio', type=float, default=1.0,
                       help='Speed ratio (0.0-1.0), default: 1 (used for angle_mode and move_xyz actions)')
    
    parsed_args = parser.parse_args()
    
    rclpy.init(args=args)

    client = EpisodeDemoClient()
    
    if parsed_args.action == 'read_angles':
        # 读取电机角度
        client.read_motor_angles()
    elif parsed_args.action == 'subscribe':
        # 订阅电机角度话题
        print("Subscribing to motor_angles topic. Press Ctrl+C to exit...")
        try:
            rclpy.spin(client)
        except KeyboardInterrupt:
            print("\nShutting down subscriber...")
        finally:
            # 销毁节点并关闭rclpy
            client.destroy_node()
            rclpy.shutdown()
    elif parsed_args.action == 'gripper_on':
        # 开启夹爪
        client.gripper_control(True)
    elif parsed_args.action == 'gripper_off':
        # 关闭夹爪
        client.gripper_control(False)
    elif parsed_args.action == 'servo_gripper':
        # 设置舵机夹爪角度
        client.servo_gripper(parsed_args.angle)
    elif parsed_args.action == 'free_mode':
        # 启用自由模式
        client.set_free_mode(True)
    elif parsed_args.action == 'lock_mode':
        # 锁定模式
        client.set_free_mode(False)
    elif parsed_args.action == 'angle_mode':
        # 角度模式运动 - 迭代预定义的角度列表
    
        for i in range(10):
            angles = [180.00,90.00,83.00,30.00,110.00,30.00]
            # radomly add/reduce each joint degree by 0-30 degrees
            for j in range(len(angles)):
                angles[j] += random.uniform(-30.0, 30.0)
            client.send_angle_mode_goal(angles, parsed_args.speed_ratio)
            
            # 等待当前动作完成
            while rclpy.ok() and not hasattr(client, '_angle_mode_completed'):
                rclpy.spin_once(client, timeout_sec=0.1)
            
            # 重置完成标志并等待一下再进行下一个动作
            if hasattr(client, '_angle_mode_completed'):
                delattr(client, '_angle_mode_completed')
            

    elif parsed_args.action == 'move_xyz':
        # 位姿模式运动 - 迭代预定义的位置列表
        print("Starting enpei move_xyz demo...")
        for i in range(100):
            # 开启夹爪
            # client.gripper_control(True)
            position = [260.0, 0.0, 200.0]
            rotation = [180.0, 0.0, 90.0]
            # randomly change position by 0-30mm
            position[0] += random.uniform(-100.0, 100.0)
            position[1] += random.uniform(-200.0, 200.0)
            position[2] += random.uniform(-100.0, 100.0)
            
            client.send_move_xyz_rotation_goal(
                position, rotation, "xyz", parsed_args.speed_ratio
            )
            
            # 等待当前动作完成
            while rclpy.ok() and not hasattr(client, '_move_xyz_completed'):
                rclpy.spin_once(client, timeout_sec=0.1)
            # time.sleep(1.0)
            # client.gripper_control(False)
            # 重置完成标志并等待一下再进行下一个动作
            if hasattr(client, '_move_xyz_completed'):
                delattr(client, '_move_xyz_completed')
            

    elif parsed_args.action == 'linear_move':
        # 先 移动到初始位置
        # 这里可以添加测试代码
        position = [260.0, 0.0, 200.0]
        rotation = [180.0, 0.0, 90.0]
        
        client.send_move_xyz_rotation_goal(
            position, rotation, "xyz", parsed_args.speed_ratio
        )
        # 等待当前动作完成
        while rclpy.ok() and not hasattr(client, '_move_xyz_completed'):
            rclpy.spin_once(client, timeout_sec=0.1)
        # 直线运动测试 - 进行多次直线运动
        test_positions = [
            ([260.0, 0.0, 200.0], [180.0, 0.0, 90.0]),
            ([300.0, 100.0, 280.0], [180.0, 0.0, 90.0]),
            ([250.0, -120.0, 150.0], [180.0, 0.0, 90.0]),
            ([320.0, 0.0, 250.0], [180.0, 0.0, 90.0]),
            ([260.0, 0.0, 200.0], [180.0, 0.0, 90.0]),
        ]
        
        for i, (pos, rot) in enumerate(test_positions):
            client.get_logger().info(f'\n=== 执行第 {i+1}/{len(test_positions)} 次直线运动 ===')
            client.send_linear_move_goal(pos, rot, 'xyz', 1.0)
            
            # 等待当前动作完成
            while rclpy.ok() and not hasattr(client, '_linear_move_completed'):
                rclpy.spin_once(client, timeout_sec=0.1)
            
            # 重置完成标志并等待一下再进行下一个动作
            if hasattr(client, '_linear_move_completed'):
                delattr(client, '_linear_move_completed')
            time.sleep(1.0)
    
    elif parsed_args.action == 'test':
        # 这里可以添加测试代码
        position = [260.0, 0.0, 200.0]
        rotation = [180.0, 0.0, 90.0]
        
        client.send_move_xyz_rotation_goal(
            position, rotation, "xyz", parsed_args.speed_ratio
        )

        # 等待当前动作完成
        while rclpy.ok() and not hasattr(client, '_move_xyz_completed'):
            rclpy.spin_once(client, timeout_sec=0.1)
        
        # 重置完成标志并等待一下再进行下一个动作
        if hasattr(client, '_move_xyz_completed'):
            delattr(client, '_move_xyz_completed')
       
        
if __name__ == '__main__':
    main()