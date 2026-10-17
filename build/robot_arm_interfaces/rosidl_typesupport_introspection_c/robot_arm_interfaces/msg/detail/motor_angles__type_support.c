// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_arm_interfaces/msg/detail/motor_angles__rosidl_typesupport_introspection_c.h"
#include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_arm_interfaces/msg/detail/motor_angles__functions.h"
#include "robot_arm_interfaces/msg/detail/motor_angles__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__msg__MotorAngles__init(message_memory);
}

void robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_fini_function(void * message_memory)
{
  robot_arm_interfaces__msg__MotorAngles__fini(message_memory);
}

size_t robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__size_function__MotorAngles__angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_const_function__MotorAngles__angles(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_function__MotorAngles__angles(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__fetch_function__MotorAngles__angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_const_function__MotorAngles__angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__assign_function__MotorAngles__angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_function__MotorAngles__angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_member_array[4] = {
  {
    "angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__msg__MotorAngles, angles),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__size_function__MotorAngles__angles,  // size() function pointer
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_const_function__MotorAngles__angles,  // get_const(index) function pointer
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__get_function__MotorAngles__angles,  // get(index) function pointer
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__fetch_function__MotorAngles__angles,  // fetch(index, &value) function pointer
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__assign_function__MotorAngles__angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__msg__MotorAngles, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__msg__MotorAngles, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__msg__MotorAngles, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_members = {
  "robot_arm_interfaces__msg",  // message namespace
  "MotorAngles",  // message name
  4,  // number of fields
  sizeof(robot_arm_interfaces__msg__MotorAngles),
  false,  // has_any_key_member_
  robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_member_array,  // message members
  robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_type_support_handle = {
  0,
  &robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__msg__MotorAngles__get_type_hash,
  &robot_arm_interfaces__msg__MotorAngles__get_type_description,
  &robot_arm_interfaces__msg__MotorAngles__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, msg, MotorAngles)() {
  robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__msg__MotorAngles__rosidl_typesupport_introspection_c__MotorAngles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
