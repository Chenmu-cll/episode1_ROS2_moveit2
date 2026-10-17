// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_arm_interfaces:srv/GripperControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/srv/gripper_control.hpp"


#ifndef ROBOT_ARM_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
#define ROBOT_ARM_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_arm_interfaces/srv/detail/gripper_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Request_enable
{
public:
  Init_GripperControl_Request_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_arm_interfaces::srv::GripperControl_Request enable(::robot_arm_interfaces::srv::GripperControl_Request::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::GripperControl_Request>()
{
  return robot_arm_interfaces::srv::builder::Init_GripperControl_Request_enable();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Response_message
{
public:
  explicit Init_GripperControl_Response_message(::robot_arm_interfaces::srv::GripperControl_Response & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::srv::GripperControl_Response message(::robot_arm_interfaces::srv::GripperControl_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Response msg_;
};

class Init_GripperControl_Response_success
{
public:
  Init_GripperControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Response_message success(::robot_arm_interfaces::srv::GripperControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GripperControl_Response_message(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::GripperControl_Response>()
{
  return robot_arm_interfaces::srv::builder::Init_GripperControl_Response_success();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperControl_Event_response
{
public:
  explicit Init_GripperControl_Event_response(::robot_arm_interfaces::srv::GripperControl_Event & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::srv::GripperControl_Event response(::robot_arm_interfaces::srv::GripperControl_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Event msg_;
};

class Init_GripperControl_Event_request
{
public:
  explicit Init_GripperControl_Event_request(::robot_arm_interfaces::srv::GripperControl_Event & msg)
  : msg_(msg)
  {}
  Init_GripperControl_Event_response request(::robot_arm_interfaces::srv::GripperControl_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GripperControl_Event_response(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Event msg_;
};

class Init_GripperControl_Event_info
{
public:
  Init_GripperControl_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperControl_Event_request info(::robot_arm_interfaces::srv::GripperControl_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GripperControl_Event_request(msg_);
  }

private:
  ::robot_arm_interfaces::srv::GripperControl_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::srv::GripperControl_Event>()
{
  return robot_arm_interfaces::srv::builder::Init_GripperControl_Event_info();
}

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__SRV__DETAIL__GRIPPER_CONTROL__BUILDER_HPP_
