// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_arm_interfaces:action/AngleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/action/angle_mode.h"


#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_H_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_Goal
{
  /// Target angles for 6 motors (degrees)
  double angles[6];
  /// Speed ratio (0.0 to 1.0)
  double speed_ratio;
} robot_arm_interfaces__action__AngleMode_Goal;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_Goal.
typedef struct robot_arm_interfaces__action__AngleMode_Goal__Sequence
{
  robot_arm_interfaces__action__AngleMode_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_Result
{
  /// True if movement successful
  bool success;
  /// Error message or success info
  rosidl_runtime_c__String message;
  /// How long the movement took
  double execution_time;
  /// Final angles achieved
  double final_angles[6];
} robot_arm_interfaces__action__AngleMode_Result;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_Result.
typedef struct robot_arm_interfaces__action__AngleMode_Result__Sequence
{
  robot_arm_interfaces__action__AngleMode_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'status_message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_Feedback
{
  /// Time elapsed since start
  double elapsed_time;
  /// Movement progress (0.0 to 1.0)
  double progress;
  /// Current motor angles
  double current_angles[6];
  /// Human-readable status
  rosidl_runtime_c__String status_message;
} robot_arm_interfaces__action__AngleMode_Feedback;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_Feedback.
typedef struct robot_arm_interfaces__action__AngleMode_Feedback__Sequence
{
  robot_arm_interfaces__action__AngleMode_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "robot_arm_interfaces/action/detail/angle_mode__struct.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_arm_interfaces__action__AngleMode_Goal goal;
} robot_arm_interfaces__action__AngleMode_SendGoal_Request;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_SendGoal_Request.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence
{
  robot_arm_interfaces__action__AngleMode_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} robot_arm_interfaces__action__AngleMode_SendGoal_Response;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_SendGoal_Response.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence
{
  robot_arm_interfaces__action__AngleMode_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_arm_interfaces__action__AngleMode_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_arm_interfaces__action__AngleMode_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_arm_interfaces__action__AngleMode_SendGoal_Request__Sequence request;
  robot_arm_interfaces__action__AngleMode_SendGoal_Response__Sequence response;
} robot_arm_interfaces__action__AngleMode_SendGoal_Event;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_SendGoal_Event.
typedef struct robot_arm_interfaces__action__AngleMode_SendGoal_Event__Sequence
{
  robot_arm_interfaces__action__AngleMode_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} robot_arm_interfaces__action__AngleMode_GetResult_Request;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_GetResult_Request.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence
{
  robot_arm_interfaces__action__AngleMode_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "robot_arm_interfaces/action/detail/angle_mode__struct.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Response
{
  int8_t status;
  robot_arm_interfaces__action__AngleMode_Result result;
} robot_arm_interfaces__action__AngleMode_GetResult_Response;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_GetResult_Response.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence
{
  robot_arm_interfaces__action__AngleMode_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  robot_arm_interfaces__action__AngleMode_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  robot_arm_interfaces__action__AngleMode_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  robot_arm_interfaces__action__AngleMode_GetResult_Request__Sequence request;
  robot_arm_interfaces__action__AngleMode_GetResult_Response__Sequence response;
} robot_arm_interfaces__action__AngleMode_GetResult_Event;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_GetResult_Event.
typedef struct robot_arm_interfaces__action__AngleMode_GetResult_Event__Sequence
{
  robot_arm_interfaces__action__AngleMode_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "robot_arm_interfaces/action/detail/angle_mode__struct.h"

/// Struct defined in action/AngleMode in the package robot_arm_interfaces.
typedef struct robot_arm_interfaces__action__AngleMode_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  robot_arm_interfaces__action__AngleMode_Feedback feedback;
} robot_arm_interfaces__action__AngleMode_FeedbackMessage;

// Struct for a sequence of robot_arm_interfaces__action__AngleMode_FeedbackMessage.
typedef struct robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence
{
  robot_arm_interfaces__action__AngleMode_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_arm_interfaces__action__AngleMode_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_H_
