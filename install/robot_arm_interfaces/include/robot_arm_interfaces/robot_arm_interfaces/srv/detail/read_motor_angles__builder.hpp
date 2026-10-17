// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_arm_interfaces:srv/ReadMotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/srv/read_motor_angles.hpp"


#ifndef ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__BUILDER_HPP_
#define ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_arm_interfaces/srv/detail/read_motor_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_arm_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::ReadMotorAngles_Request>()
{
  return ::robot_arm_interfaces::srv::ReadMotorAngles_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadMotorAngles_Response_message
{
public:
  explicit Init_ReadMotorAngles_Response_message(::robot_arm_interfaces::srv::ReadMotorAngles_Response & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::srv::ReadMotorAngles_Response message(::robot_arm_interfaces::srv::ReadMotorAngles_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Response msg_;
};

class Init_ReadMotorAngles_Response_success
{
public:
  explicit Init_ReadMotorAngles_Response_success(::robot_arm_interfaces::srv::ReadMotorAngles_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMotorAngles_Response_message success(::robot_arm_interfaces::srv::ReadMotorAngles_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReadMotorAngles_Response_message(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Response msg_;
};

class Init_ReadMotorAngles_Response_angles
{
public:
  Init_ReadMotorAngles_Response_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadMotorAngles_Response_success angles(::robot_arm_interfaces::srv::ReadMotorAngles_Response::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_ReadMotorAngles_Response_success(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::ReadMotorAngles_Response>()
{
  return robot_arm_interfaces::srv::builder::Init_ReadMotorAngles_Response_angles();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReadMotorAngles_Event_response
{
public:
  explicit Init_ReadMotorAngles_Event_response(::robot_arm_interfaces::srv::ReadMotorAngles_Event & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::srv::ReadMotorAngles_Event response(::robot_arm_interfaces::srv::ReadMotorAngles_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Event msg_;
};

class Init_ReadMotorAngles_Event_request
{
public:
  explicit Init_ReadMotorAngles_Event_request(::robot_arm_interfaces::srv::ReadMotorAngles_Event & msg)
  : msg_(msg)
  {}
  Init_ReadMotorAngles_Event_response request(::robot_arm_interfaces::srv::ReadMotorAngles_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ReadMotorAngles_Event_response(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Event msg_;
};

class Init_ReadMotorAngles_Event_info
{
public:
  Init_ReadMotorAngles_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadMotorAngles_Event_request info(::robot_arm_interfaces::srv::ReadMotorAngles_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ReadMotorAngles_Event_request(msg_);
  }

private:
  ::robot_arm_interfaces::srv::ReadMotorAngles_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::ReadMotorAngles_Event>()
{
  return robot_arm_interfaces::srv::builder::Init_ReadMotorAngles_Event_info();
}

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__BUILDER_HPP_
