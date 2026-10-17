// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_arm_interfaces:action/MoveXyzRotation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/action/move_xyz_rotation.hpp"


#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__MOVE_XYZ_ROTATION__TRAITS_HPP_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__MOVE_XYZ_ROTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rotation
  {
    if (msg.rotation.size() == 0) {
      out << "rotation: []";
    } else {
      out << "rotation: [";
      size_t pending_items = msg.rotation.size();
      for (auto item : msg.rotation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ik_mode
  {
    out << "ik_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_mode, out);
    out << ", ";
  }

  // member: speed_ratio
  {
    out << "speed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ratio, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rotation.size() == 0) {
      out << "rotation: []\n";
    } else {
      out << "rotation:\n";
      for (auto item : msg.rotation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ik_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ik_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.ik_mode, out);
    out << "\n";
  }

  // member: speed_ratio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_ratio: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ratio, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_Goal & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_Goal>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_Goal";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_Goal>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_Goal";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_Result & msg,
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

  // member: execution_time
  {
    out << "execution_time: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_time, out);
    out << ", ";
  }

  // member: solution_angles
  {
    if (msg.solution_angles.size() == 0) {
      out << "solution_angles: []";
    } else {
      out << "solution_angles: [";
      size_t pending_items = msg.solution_angles.size();
      for (auto item : msg.solution_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: final_position
  {
    if (msg.final_position.size() == 0) {
      out << "final_position: []";
    } else {
      out << "final_position: [";
      size_t pending_items = msg.final_position.size();
      for (auto item : msg.final_position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: final_rotation
  {
    if (msg.final_rotation.size() == 0) {
      out << "final_rotation: []";
    } else {
      out << "final_rotation: [";
      size_t pending_items = msg.final_rotation.size();
      for (auto item : msg.final_rotation) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const MoveXyzRotation_Result & msg,
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

  // member: execution_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execution_time: ";
    rosidl_generator_traits::value_to_yaml(msg.execution_time, out);
    out << "\n";
  }

  // member: solution_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.solution_angles.size() == 0) {
      out << "solution_angles: []\n";
    } else {
      out << "solution_angles:\n";
      for (auto item : msg.solution_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: final_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.final_position.size() == 0) {
      out << "final_position: []\n";
    } else {
      out << "final_position:\n";
      for (auto item : msg.final_position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: final_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.final_rotation.size() == 0) {
      out << "final_rotation: []\n";
    } else {
      out << "final_rotation:\n";
      for (auto item : msg.final_rotation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_Result & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_Result>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_Result";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_Result>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_Result";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: elapsed_time
  {
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << ", ";
  }

  // member: current_angles
  {
    if (msg.current_angles.size() == 0) {
      out << "current_angles: []";
    } else {
      out << "current_angles: [";
      size_t pending_items = msg.current_angles.size();
      for (auto item : msg.current_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_message
  {
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: elapsed_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elapsed_time: ";
    rosidl_generator_traits::value_to_yaml(msg.elapsed_time, out);
    out << "\n";
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress: ";
    rosidl_generator_traits::value_to_yaml(msg.progress, out);
    out << "\n";
  }

  // member: current_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current_angles.size() == 0) {
      out << "current_angles: []\n";
    } else {
      out << "current_angles:\n";
      for (auto item : msg.current_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status_message: ";
    rosidl_generator_traits::value_to_yaml(msg.status_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_Feedback & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_Feedback>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_Feedback";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_Feedback>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_Feedback";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Feedback>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "robot_arm_interfaces/action/detail/move_xyz_rotation__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_SendGoal_Request";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_SendGoal_Response";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_SendGoal_Event & msg,
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
  const MoveXyzRotation_SendGoal_Event & msg,
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

inline std::string to_yaml(const MoveXyzRotation_SendGoal_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_SendGoal_Event";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>::value && has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_SendGoal>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_SendGoal";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_SendGoal>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_SendGoal";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>::value &&
    has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>::value &&
    has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<robot_arm_interfaces::action::MoveXyzRotation_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_arm_interfaces::action::MoveXyzRotation_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_GetResult_Request";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_GetResult_Response";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Result>::value> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Result>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_GetResult_Event & msg,
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
  const MoveXyzRotation_GetResult_Event & msg,
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

inline std::string to_yaml(const MoveXyzRotation_GetResult_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_GetResult_Event";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>::value && has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_GetResult>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_GetResult";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_GetResult>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_GetResult";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>::value &&
    has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>::value &&
    has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>::value
  >
{
};

template<>
struct is_service<robot_arm_interfaces::action::MoveXyzRotation_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<robot_arm_interfaces::action::MoveXyzRotation_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__traits.hpp"

namespace robot_arm_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveXyzRotation_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveXyzRotation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveXyzRotation_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace robot_arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_arm_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_arm_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_arm_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage & msg)
{
  return robot_arm_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage>()
{
  return "robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage";
}

template<>
inline const char * name<robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage>()
{
  return "robot_arm_interfaces/action/MoveXyzRotation_FeedbackMessage";
}

template<>
struct has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<robot_arm_interfaces::action::MoveXyzRotation_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<robot_arm_interfaces::action::MoveXyzRotation_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<robot_arm_interfaces::action::MoveXyzRotation_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<robot_arm_interfaces::action::MoveXyzRotation>
  : std::true_type
{
};

template<>
struct is_action_goal<robot_arm_interfaces::action::MoveXyzRotation_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<robot_arm_interfaces::action::MoveXyzRotation_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<robot_arm_interfaces::action::MoveXyzRotation_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__MOVE_XYZ_ROTATION__TRAITS_HPP_
