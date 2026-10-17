// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "robot_arm_interfaces/msg/detail/motor_angles__functions.h"
#include "robot_arm_interfaces/msg/detail/motor_angles__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace robot_arm_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MotorAngles_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) robot_arm_interfaces::msg::MotorAngles(_init);
}

void MotorAngles_fini_function(void * message_memory)
{
  auto typed_message = static_cast<robot_arm_interfaces::msg::MotorAngles *>(message_memory);
  typed_message->~MotorAngles();
}

size_t size_function__MotorAngles__angles(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__MotorAngles__angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__MotorAngles__angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__MotorAngles__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MotorAngles__angles(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MotorAngles__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MotorAngles__angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MotorAngles_message_member_array[4] = {
  {
    "angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces::msg::MotorAngles, angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__MotorAngles__angles,  // size() function pointer
    get_const_function__MotorAngles__angles,  // get_const(index) function pointer
    get_function__MotorAngles__angles,  // get(index) function pointer
    fetch_function__MotorAngles__angles,  // fetch(index, &value) function pointer
    assign_function__MotorAngles__angles,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces::msg::MotorAngles, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces::msg::MotorAngles, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces::msg::MotorAngles, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MotorAngles_message_members = {
  "robot_arm_interfaces::msg",  // message namespace
  "MotorAngles",  // message name
  4,  // number of fields
  sizeof(robot_arm_interfaces::msg::MotorAngles),
  false,  // has_any_key_member_
  MotorAngles_message_member_array,  // message members
  MotorAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  MotorAngles_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MotorAngles_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MotorAngles_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__msg__MotorAngles__get_type_hash,
  &robot_arm_interfaces__msg__MotorAngles__get_type_description,
  &robot_arm_interfaces__msg__MotorAngles__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace robot_arm_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<robot_arm_interfaces::msg::MotorAngles>()
{
  return &::robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorAngles_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, robot_arm_interfaces, msg, MotorAngles)() {
  return &::robot_arm_interfaces::msg::rosidl_typesupport_introspection_cpp::MotorAngles_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
