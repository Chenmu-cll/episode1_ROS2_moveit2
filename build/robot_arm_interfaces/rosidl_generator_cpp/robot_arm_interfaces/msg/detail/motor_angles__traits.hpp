// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/msg/motor_angles.hpp"


#ifndef ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__TRAITS_HPP_
#define ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_arm_interfaces/msg/detail/motor_angles__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robot_arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorAngles & msg,
  std::ostream & out)
{
  out << "{";
  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorAngles & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::msg::MotorAngles & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::msg::MotorAngles & msg)
{
  return robot_arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::msg::MotorAngles>()
{
  return "robot_arm_interfaces::msg::MotorAngles";
}

template<>
inline const char * name<robot_arm_interfaces::msg::MotorAngles>()
{
  return "robot_arm_interfaces/msg/MotorAngles";
}

template<>
struct has_fixed_size<robot_arm_interfaces::msg::MotorAngles>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::msg::MotorAngles>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_arm_interfaces::msg::MotorAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__TRAITS_HPP_
