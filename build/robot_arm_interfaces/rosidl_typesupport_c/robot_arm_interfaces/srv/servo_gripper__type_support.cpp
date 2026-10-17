// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robot_arm_interfaces:srv/ServoGripper.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_arm_interfaces/srv/detail/servo_gripper__struct.h"
#include "robot_arm_interfaces/srv/detail/servo_gripper__type_support.h"
#include "robot_arm_interfaces/srv/detail/servo_gripper__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoGripper_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoGripper_Request_type_support_ids_t;

static const _ServoGripper_Request_type_support_ids_t _ServoGripper_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoGripper_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoGripper_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoGripper_Request_type_support_symbol_names_t _ServoGripper_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ServoGripper_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ServoGripper_Request)),
  }
};

typedef struct _ServoGripper_Request_type_support_data_t
{
  void * data[2];
} _ServoGripper_Request_type_support_data_t;

static _ServoGripper_Request_type_support_data_t _ServoGripper_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoGripper_Request_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ServoGripper_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ServoGripper_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ServoGripper_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoGripper_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoGripper_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ServoGripper_Request__get_type_hash,
  &robot_arm_interfaces__srv__ServoGripper_Request__get_type_description,
  &robot_arm_interfaces__srv__ServoGripper_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ServoGripper_Request)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ServoGripper_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__type_support.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoGripper_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoGripper_Response_type_support_ids_t;

static const _ServoGripper_Response_type_support_ids_t _ServoGripper_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoGripper_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoGripper_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoGripper_Response_type_support_symbol_names_t _ServoGripper_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ServoGripper_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ServoGripper_Response)),
  }
};

typedef struct _ServoGripper_Response_type_support_data_t
{
  void * data[2];
} _ServoGripper_Response_type_support_data_t;

static _ServoGripper_Response_type_support_data_t _ServoGripper_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoGripper_Response_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ServoGripper_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ServoGripper_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ServoGripper_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoGripper_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoGripper_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ServoGripper_Response__get_type_hash,
  &robot_arm_interfaces__srv__ServoGripper_Response__get_type_description,
  &robot_arm_interfaces__srv__ServoGripper_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ServoGripper_Response)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ServoGripper_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__type_support.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ServoGripper_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoGripper_Event_type_support_ids_t;

static const _ServoGripper_Event_type_support_ids_t _ServoGripper_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoGripper_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoGripper_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoGripper_Event_type_support_symbol_names_t _ServoGripper_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ServoGripper_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ServoGripper_Event)),
  }
};

typedef struct _ServoGripper_Event_type_support_data_t
{
  void * data[2];
} _ServoGripper_Event_type_support_data_t;

static _ServoGripper_Event_type_support_data_t _ServoGripper_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoGripper_Event_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ServoGripper_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ServoGripper_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ServoGripper_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ServoGripper_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoGripper_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ServoGripper_Event__get_type_hash,
  &robot_arm_interfaces__srv__ServoGripper_Event__get_type_description,
  &robot_arm_interfaces__srv__ServoGripper_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ServoGripper_Event)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ServoGripper_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/servo_gripper__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace robot_arm_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _ServoGripper_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ServoGripper_type_support_ids_t;

static const _ServoGripper_type_support_ids_t _ServoGripper_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ServoGripper_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ServoGripper_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ServoGripper_type_support_symbol_names_t _ServoGripper_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ServoGripper)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ServoGripper)),
  }
};

typedef struct _ServoGripper_type_support_data_t
{
  void * data[2];
} _ServoGripper_type_support_data_t;

static _ServoGripper_type_support_data_t _ServoGripper_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ServoGripper_service_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ServoGripper_service_typesupport_ids.typesupport_identifier[0],
  &_ServoGripper_service_typesupport_symbol_names.symbol_name[0],
  &_ServoGripper_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ServoGripper_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ServoGripper_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ServoGripper_Request_message_type_support_handle,
  &ServoGripper_Response_message_type_support_handle,
  &ServoGripper_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    srv,
    ServoGripper
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    srv,
    ServoGripper
  ),
  &robot_arm_interfaces__srv__ServoGripper__get_type_hash,
  &robot_arm_interfaces__srv__ServoGripper__get_type_description,
  &robot_arm_interfaces__srv__ServoGripper__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ServoGripper)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ServoGripper_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
