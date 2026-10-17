// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/msg/motor_angles.h"


#ifndef ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_H_
#define ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorAngles in the package robot_arm_interfaces.
/**
  * Motor angles message for publishing current motor positions
  * Array of 6 motor angles in degrees
 */
typedef struct robot_arm_interfaces__msg__MotorAngles
{
  double angles[6];
  /// Timestamp when the angles were read
  builtin_interfaces__msg__Time timestamp;
  /// Success flag indicating if the reading was successful
  bool success;
  /// Optional message for additional information
  rosidl_runtime_c__String message;
} robot_arm_interfaces__msg__MotorAngles;

// Struct for a sequence of robot_arm_interfaces__msg__MotorAngles.
typedef struct robot_arm_interfaces__msg__MotorAngles__Sequence
{
  robot_arm_interfaces__msg__MotorAngles * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__msg__MotorAngles__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_H_
