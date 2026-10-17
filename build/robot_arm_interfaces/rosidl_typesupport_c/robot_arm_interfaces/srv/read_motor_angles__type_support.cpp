// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from robot_arm_interfaces:srv/ReadMotorAngles.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "robot_arm_interfaces/srv/detail/read_motor_angles__struct.h"
#include "robot_arm_interfaces/srv/detail/read_motor_angles__type_support.h"
#include "robot_arm_interfaces/srv/detail/read_motor_angles__functions.h"
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

typedef struct _ReadMotorAngles_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReadMotorAngles_Request_type_support_ids_t;

static const _ReadMotorAngles_Request_type_support_ids_t _ReadMotorAngles_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReadMotorAngles_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReadMotorAngles_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReadMotorAngles_Request_type_support_symbol_names_t _ReadMotorAngles_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ReadMotorAngles_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ReadMotorAngles_Request)),
  }
};

typedef struct _ReadMotorAngles_Request_type_support_data_t
{
  void * data[2];
} _ReadMotorAngles_Request_type_support_data_t;

static _ReadMotorAngles_Request_type_support_data_t _ReadMotorAngles_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReadMotorAngles_Request_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ReadMotorAngles_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReadMotorAngles_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReadMotorAngles_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReadMotorAngles_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReadMotorAngles_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ReadMotorAngles_Request__get_type_hash,
  &robot_arm_interfaces__srv__ReadMotorAngles_Request__get_type_description,
  &robot_arm_interfaces__srv__ReadMotorAngles_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ReadMotorAngles_Request)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ReadMotorAngles_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__type_support.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__functions.h"
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

typedef struct _ReadMotorAngles_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReadMotorAngles_Response_type_support_ids_t;

static const _ReadMotorAngles_Response_type_support_ids_t _ReadMotorAngles_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReadMotorAngles_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReadMotorAngles_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReadMotorAngles_Response_type_support_symbol_names_t _ReadMotorAngles_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ReadMotorAngles_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ReadMotorAngles_Response)),
  }
};

typedef struct _ReadMotorAngles_Response_type_support_data_t
{
  void * data[2];
} _ReadMotorAngles_Response_type_support_data_t;

static _ReadMotorAngles_Response_type_support_data_t _ReadMotorAngles_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReadMotorAngles_Response_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ReadMotorAngles_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReadMotorAngles_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReadMotorAngles_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReadMotorAngles_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReadMotorAngles_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ReadMotorAngles_Response__get_type_hash,
  &robot_arm_interfaces__srv__ReadMotorAngles_Response__get_type_description,
  &robot_arm_interfaces__srv__ReadMotorAngles_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ReadMotorAngles_Response)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ReadMotorAngles_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__type_support.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__functions.h"
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

typedef struct _ReadMotorAngles_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReadMotorAngles_Event_type_support_ids_t;

static const _ReadMotorAngles_Event_type_support_ids_t _ReadMotorAngles_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReadMotorAngles_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReadMotorAngles_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReadMotorAngles_Event_type_support_symbol_names_t _ReadMotorAngles_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ReadMotorAngles_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ReadMotorAngles_Event)),
  }
};

typedef struct _ReadMotorAngles_Event_type_support_data_t
{
  void * data[2];
} _ReadMotorAngles_Event_type_support_data_t;

static _ReadMotorAngles_Event_type_support_data_t _ReadMotorAngles_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReadMotorAngles_Event_message_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ReadMotorAngles_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReadMotorAngles_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReadMotorAngles_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReadMotorAngles_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReadMotorAngles_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &robot_arm_interfaces__srv__ReadMotorAngles_Event__get_type_hash,
  &robot_arm_interfaces__srv__ReadMotorAngles_Event__get_type_description,
  &robot_arm_interfaces__srv__ReadMotorAngles_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ReadMotorAngles_Event)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ReadMotorAngles_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "robot_arm_interfaces/srv/detail/read_motor_angles__type_support.h"
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
typedef struct _ReadMotorAngles_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReadMotorAngles_type_support_ids_t;

static const _ReadMotorAngles_type_support_ids_t _ReadMotorAngles_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ReadMotorAngles_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReadMotorAngles_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReadMotorAngles_type_support_symbol_names_t _ReadMotorAngles_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, robot_arm_interfaces, srv, ReadMotorAngles)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, robot_arm_interfaces, srv, ReadMotorAngles)),
  }
};

typedef struct _ReadMotorAngles_type_support_data_t
{
  void * data[2];
} _ReadMotorAngles_type_support_data_t;

static _ReadMotorAngles_type_support_data_t _ReadMotorAngles_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReadMotorAngles_service_typesupport_map = {
  2,
  "robot_arm_interfaces",
  &_ReadMotorAngles_service_typesupport_ids.typesupport_identifier[0],
  &_ReadMotorAngles_service_typesupport_symbol_names.symbol_name[0],
  &_ReadMotorAngles_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReadMotorAngles_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReadMotorAngles_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ReadMotorAngles_Request_message_type_support_handle,
  &ReadMotorAngles_Response_message_type_support_handle,
  &ReadMotorAngles_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    srv,
    ReadMotorAngles
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    robot_arm_interfaces,
    srv,
    ReadMotorAngles
  ),
  &robot_arm_interfaces__srv__ReadMotorAngles__get_type_hash,
  &robot_arm_interfaces__srv__ReadMotorAngles__get_type_description,
  &robot_arm_interfaces__srv__ReadMotorAngles__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace robot_arm_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, robot_arm_interfaces, srv, ReadMotorAngles)() {
  return &::robot_arm_interfaces::srv::rosidl_typesupport_c::ReadMotorAngles_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
