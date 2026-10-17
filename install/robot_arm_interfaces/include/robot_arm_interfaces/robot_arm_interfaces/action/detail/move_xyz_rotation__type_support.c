// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from robot_arm_interfaces:action/MoveXyzRotation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
#include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
#include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `ik_mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_Goal__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_Goal__fini(message_memory);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Goal__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Goal__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Goal__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Goal__rotation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__rotation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__rotation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Goal__rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__rotation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Goal__rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__rotation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_member_array[4] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Goal, position),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Goal__position,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__position,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__position,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Goal__position,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Goal__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Goal, rotation),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Goal__rotation,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Goal__rotation,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Goal__rotation,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Goal__rotation,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Goal__rotation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ik_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Goal, ik_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Goal, speed_ratio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_Goal",  // message name
  4,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_Goal),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_Goal__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_Goal__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_Goal__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Goal)() {
  if (!robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_Goal__rosidl_typesupport_introspection_c__MoveXyzRotation_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_Result__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_Result__fini(message_memory);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__solution_angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__solution_angles(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__solution_angles(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__solution_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__solution_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__solution_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__solution_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__final_position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_position(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_position(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__final_position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__final_position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__final_rotation(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_rotation(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_rotation(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__final_rotation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_rotation(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__final_rotation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_rotation(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_member_array[6] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, success),  // bytes offset in struct
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
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "execution_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, execution_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solution_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, solution_angles),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__solution_angles,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__solution_angles,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__solution_angles,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__solution_angles,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__solution_angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, final_position),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__final_position,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_position,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_position,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__final_position,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__final_position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Result, final_rotation),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Result__final_rotation,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Result__final_rotation,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Result__final_rotation,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Result__final_rotation,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Result__final_rotation,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_Result",  // message name
  6,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_Result),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_Result__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_Result__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_Result__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Result)() {
  if (!robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_Result__rosidl_typesupport_introspection_c__MoveXyzRotation_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `status_message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_Feedback__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_Feedback__fini(message_memory);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Feedback__current_angles(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Feedback__current_angles(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Feedback__current_angles(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Feedback__current_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Feedback__current_angles(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Feedback__current_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Feedback__current_angles(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_member_array[4] = {
  {
    "elapsed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Feedback, elapsed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Feedback, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_angles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Feedback, current_angles),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_Feedback__current_angles,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_Feedback__current_angles,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_Feedback__current_angles,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_Feedback__current_angles,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_Feedback__current_angles,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_Feedback, status_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_Feedback",  // message name
  4,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_Feedback),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_Feedback__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_Feedback__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_Feedback__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Feedback)() {
  if (!robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_Feedback__rosidl_typesupport_introspection_c__MoveXyzRotation_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "robot_arm_interfaces/action/move_xyz_rotation.h"
// Member `goal`
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Request)() {
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Goal)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Response)() {
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "robot_arm_interfaces/action/move_xyz_rotation.h"
// Member `request`
// Member `response`
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__fini(message_memory);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_SendGoal_Event__request(
  const void * untyped_member)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__request(
  const void * untyped_member, size_t index)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__request(
  void * untyped_member, size_t index)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_SendGoal_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request * item =
    ((const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request *)
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__request(untyped_member, index));
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request * value =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_SendGoal_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request * item =
    ((robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request *)
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__request(untyped_member, index));
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request * value =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request *)(untyped_value);
  *item = *value;
}

bool robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_SendGoal_Event__request(
  void * untyped_member, size_t size)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence *)(untyped_member);
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__fini(member);
  return robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__Sequence__init(member, size);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_SendGoal_Event__response(
  const void * untyped_member)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__response(
  const void * untyped_member, size_t index)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__response(
  void * untyped_member, size_t index)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_SendGoal_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response * item =
    ((const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response *)
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__response(untyped_member, index));
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response * value =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_SendGoal_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response * item =
    ((robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response *)
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__response(untyped_member, index));
  const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response * value =
    (const robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response *)(untyped_value);
  *item = *value;
}

bool robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_SendGoal_Event__response(
  void * untyped_member, size_t size)
{
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence *)(untyped_member);
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__fini(member);
  return robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event, request),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_SendGoal_Event__request,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__request,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__request,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_SendGoal_Event__request,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_SendGoal_Event__request,  // assign(index, value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_SendGoal_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event, response),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_SendGoal_Event__response,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_SendGoal_Event__response,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_SendGoal_Event__response,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_SendGoal_Event__response,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_SendGoal_Event__response,  // assign(index, value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_SendGoal_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_SendGoal_Event",  // message name
  3,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Event)() {
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Request)();
  robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Response)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_members = {
  "robot_arm_interfaces__action",  // service namespace
  "MoveXyzRotation_SendGoal",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle,
  NULL,  // response message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle
  NULL  // event_message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle
};


static rosidl_service_type_support_t robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_type_support_handle = {
  0,
  &robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_members,
  get_service_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Request_message_type_support_handle,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Response_message_type_support_handle,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    action,
    MoveXyzRotation_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    action,
    MoveXyzRotation_SendGoal
  ),
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_SendGoal__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal)(void) {
  if (!robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_SendGoal_Event)()->data;
  }

  return &robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Request)() {
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "robot_arm_interfaces/action/move_xyz_rotation.h"
// Member `result`
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Response)() {
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Result)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/service_event_info.h"
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
// already included above
// #include "robot_arm_interfaces/action/move_xyz_rotation.h"
// Member `request`
// Member `response`
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__fini(message_memory);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_GetResult_Event__request(
  const void * untyped_member)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__request(
  const void * untyped_member, size_t index)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__request(
  void * untyped_member, size_t index)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_GetResult_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request * item =
    ((const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request *)
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__request(untyped_member, index));
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request * value =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_GetResult_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request * item =
    ((robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request *)
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__request(untyped_member, index));
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request * value =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request *)(untyped_value);
  *item = *value;
}

bool robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_GetResult_Event__request(
  void * untyped_member, size_t size)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence *)(untyped_member);
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__fini(member);
  return robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__Sequence__init(member, size);
}

size_t robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_GetResult_Event__response(
  const void * untyped_member)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__response(
  const void * untyped_member, size_t index)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence * member =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__response(
  void * untyped_member, size_t index)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_GetResult_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response * item =
    ((const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response *)
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__response(untyped_member, index));
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response * value =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response *)(untyped_value);
  *value = *item;
}

void robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_GetResult_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response * item =
    ((robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response *)
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__response(untyped_member, index));
  const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response * value =
    (const robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response *)(untyped_value);
  *item = *value;
}

bool robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_GetResult_Event__response(
  void * untyped_member, size_t size)
{
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence * member =
    (robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence *)(untyped_member);
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__fini(member);
  return robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event, request),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_GetResult_Event__request,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__request,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__request,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_GetResult_Event__request,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_GetResult_Event__request,  // assign(index, value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_GetResult_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event, response),  // bytes offset in struct
    NULL,  // default value
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__size_function__MoveXyzRotation_GetResult_Event__response,  // size() function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_const_function__MoveXyzRotation_GetResult_Event__response,  // get_const(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__get_function__MoveXyzRotation_GetResult_Event__response,  // get(index) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__fetch_function__MoveXyzRotation_GetResult_Event__response,  // fetch(index, &value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__assign_function__MoveXyzRotation_GetResult_Event__response,  // assign(index, value) function pointer
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__resize_function__MoveXyzRotation_GetResult_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_GetResult_Event",  // message name
  3,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Event)() {
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Request)();
  robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Response)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_members = {
  "robot_arm_interfaces__action",  // service namespace
  "MoveXyzRotation_GetResult",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle,
  NULL,  // response message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle
  NULL  // event_message
  // robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle
};


static rosidl_service_type_support_t robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_type_support_handle = {
  0,
  &robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_members,
  get_service_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Request__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Request_message_type_support_handle,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Response__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Response_message_type_support_handle,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult_Event__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    action,
    MoveXyzRotation_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    action,
    MoveXyzRotation_GetResult
  ),
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_GetResult__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult)(void) {
  if (!robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_GetResult_Event)()->data;
  }

  return &robot_arm_interfaces__action__detail__move_xyz_rotation__rosidl_typesupport_introspection_c__MoveXyzRotation_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "robot_arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__functions.h"
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "robot_arm_interfaces/action/move_xyz_rotation.h"
// Member `feedback`
// already included above
// #include "robot_arm_interfaces/action/detail/move_xyz_rotation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__init(message_memory);
}

void robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_fini_function(void * message_memory)
{
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_members = {
  "robot_arm_interfaces__action",  // message namespace
  "MoveXyzRotation_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage),
  false,  // has_any_key_member_
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_member_array,  // message members
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_type_support_handle = {
  0,
  &robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
  &robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__get_type_hash,
  &robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__get_type_description,
  &robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_robot_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_FeedbackMessage)() {
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, action, MoveXyzRotation_Feedback)();
  if (!robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &robot_arm_interfaces__action__MoveXyzRotation_FeedbackMessage__rosidl_typesupport_introspection_c__MoveXyzRotation_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
