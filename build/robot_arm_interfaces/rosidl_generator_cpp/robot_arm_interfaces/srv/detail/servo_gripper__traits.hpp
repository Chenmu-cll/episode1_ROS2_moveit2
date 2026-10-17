// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_arm_interfaces:srv/ServoGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/srv/servo_gripper.hpp"


#ifndef ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__TRAITS_HPP_
#define ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_arm_interfaces/srv/detail/servo_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServoGripper_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoGripper_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::srv::ServoGripper_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::srv::ServoGripper_Request & msg)
{
  return robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::srv::ServoGripper_Request>()
{
  return "robot_arm_interfaces::srv::ServoGripper_Request";
}

template<>
inline const char * name<robot_arm_interfaces::srv::ServoGripper_Request>()
{
  return "robot_arm_interfaces/srv/ServoGripper_Request";
}

template<>
struct has_fixed_size<robot_arm_interfaces::srv::ServoGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_arm_interfaces::srv::ServoGripper_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServoGripper_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: actual_angle
  {
    out << "actual_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: actual_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actual_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.actual_angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoGripper_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::srv::ServoGripper_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::srv::ServoGripper_Response & msg)
{
  return robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::srv::ServoGripper_Response>()
{
  return "robot_arm_interfaces::srv::ServoGripper_Response";
}

template<>
inline const char * name<robot_arm_interfaces::srv::ServoGripper_Response>()
{
  return "robot_arm_interfaces/srv/ServoGripper_Response";
}

template<>
struct has_fixed_size<robot_arm_interfaces::srv::ServoGripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_arm_interfaces::srv::ServoGripper_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robot_arm_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ServoGripper_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ServoGripper_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ServoGripper_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::srv::ServoGripper_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::srv::ServoGripper_Event & msg)
{
  return robot_arm_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::srv::ServoGripper_Event>()
{
  return "robot_arm_interfaces::srv::ServoGripper_Event";
}

template<>
inline const char * name<robot_arm_interfaces::srv::ServoGripper_Event>()
{
  return "robot_arm_interfaces/srv/ServoGripper_Event";
}

template<>
struct has_fixed_size<robot_arm_interfaces::srv::ServoGripper_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Event>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Request>::value && has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robot_arm_interfaces::srv::ServoGripper_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_arm_interfaces::srv::ServoGripper>()
{
  return "robot_arm_interfaces::srv::ServoGripper";
}

template<>
inline const char * name<robot_arm_interfaces::srv::ServoGripper>()
{
  return "robot_arm_interfaces/srv/ServoGripper";
}

template<>
struct has_fixed_size<robot_arm_interfaces::srv::ServoGripper>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_arm_interfaces::srv::ServoGripper_Request>::value &&
    has_fixed_size<robot_arm_interfaces::srv::ServoGripper_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_arm_interfaces::srv::ServoGripper>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Request>::value &&
    has_bounded_size<robot_arm_interfaces::srv::ServoGripper_Response>::value
  >
{
};

template<>
struct is_service<robot_arm_interfaces::srv::ServoGripper>
  : std::true_type
{
};

template<>
struct is_service_request<robot_arm_interfaces::srv::ServoGripper_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_arm_interfaces::srv::ServoGripper_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__TRAITS_HPP_
