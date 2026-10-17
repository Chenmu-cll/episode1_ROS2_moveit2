// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_arm_interfaces:srv/ServoGripper.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/srv/servo_gripper.h"


#ifndef ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__STRUCT_H_
#define ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ServoGripper in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__srv__ServoGripper_Request
{
  /// Gripper angle (0-110 degrees)
  int32_t angle;
} robot_arm_interfaces__srv__ServoGripper_Request;

// Struct for a sequence of robot_arm_interfaces__srv__ServoGripper_Request.
typedef struct robot_arm_interfaces__srv__ServoGripper_Request__Sequence
{
  robot_arm_interfaces__srv__ServoGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__srv__ServoGripper_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ServoGripper in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__srv__ServoGripper_Response
{
  /// True if operation was successful
  bool success;
  /// Status message or error description
  rosidl_runtime_c__String message;
  /// The actual angle set (clamped to 0-110 range)
  int32_t actual_angle;
} robot_arm_interfaces__srv__ServoGripper_Response;

// Struct for a sequence of robot_arm_interfaces__srv__ServoGripper_Response.
typedef struct robot_arm_interfaces__srv__ServoGripper_Response__Sequence
{
  robot_arm_interfaces__srv__ServoGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__srv__ServoGripper_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_arm_interfaces__srv__ServoGripper_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_arm_interfaces__srv__ServoGripper_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ServoGripper in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__srv__ServoGripper_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_arm_interfaces__srv__ServoGripper_Request__Sequence request;
  robot_arm_interfaces__srv__ServoGripper_Response__Sequence response;
} robot_arm_interfaces__srv__ServoGripper_Event;

// Struct for a sequence of robot_arm_interfaces__srv__ServoGripper_Event.
typedef struct robot_arm_interfaces__srv__ServoGripper_Event__Sequence
{
  robot_arm_interfaces__srv__ServoGripper_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__srv__ServoGripper_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_ARM_INTERFACES__SRV__DETAIL__SERVO_GRIPPER__STRUCT_H_
