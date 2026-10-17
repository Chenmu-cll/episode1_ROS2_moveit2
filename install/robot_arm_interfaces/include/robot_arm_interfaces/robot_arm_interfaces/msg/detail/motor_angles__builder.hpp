// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/msg/motor_angles.hpp"


#ifndef ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__BUILDER_HPP_
#define ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_arm_interfaces/msg/detail/motor_angles__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorAngles_message
{
public:
  explicit Init_MotorAngles_message(::robot_arm_interfaces::msg::MotorAngles & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::msg::MotorAngles message(::robot_arm_interfaces::msg::MotorAngles::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::msg::MotorAngles msg_;
};

class Init_MotorAngles_success
{
public:
  explicit Init_MotorAngles_success(::robot_arm_interfaces::msg::MotorAngles & msg)
  : msg_(msg)
  {}
  Init_MotorAngles_message success(::robot_arm_interfaces::msg::MotorAngles::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MotorAngles_message(msg_);
  }

private:
  ::robot_arm_interfaces::msg::MotorAngles msg_;
};

class Init_MotorAngles_timestamp
{
public:
  explicit Init_MotorAngles_timestamp(::robot_arm_interfaces::msg::MotorAngles & msg)
  : msg_(msg)
  {}
  Init_MotorAngles_success timestamp(::robot_arm_interfaces::msg::MotorAngles::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_MotorAngles_success(msg_);
  }

private:
  ::robot_arm_interfaces::msg::MotorAngles msg_;
};

class Init_MotorAngles_angles
{
public:
  Init_MotorAngles_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorAngles_timestamp angles(::robot_arm_interfaces::msg::MotorAngles::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_MotorAngles_timestamp(msg_);
  }

private:
  ::robot_arm_interfaces::msg::MotorAngles msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::msg::MotorAngles>()
{
  return robot_arm_interfaces::msg::builder::Init_MotorAngles_angles();
}

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__BUILDER_HPP_
