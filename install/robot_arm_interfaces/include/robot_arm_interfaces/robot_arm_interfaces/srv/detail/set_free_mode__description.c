// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_arm_interfaces:srv/SetFreeMode.idl
// generated code does not contain a copyright notice

#include "robot_arm_interfaces/srv/detail/set_free_mode__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
const rosidl_type_hash_t *
robot_arm_interfaces__srv__SetFreeMode__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0x98, 0x82, 0x4b, 0xef, 0x3e, 0x04, 0x3e,
      0xa6, 0x85, 0xd1, 0xc5, 0x8e, 0x5b, 0xa1, 0xa4,
      0x3a, 0x0b, 0xbc, 0xf1, 0xf3, 0xc6, 0xdb, 0x74,
      0xf5, 0xf6, 0xc5, 0xfe, 0xbb, 0x37, 0x81, 0xad,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
const rosidl_type_hash_t *
robot_arm_interfaces__srv__SetFreeMode_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x76, 0x32, 0x52, 0x6b, 0x7f, 0xbc, 0x7f,
      0x72, 0xcd, 0x59, 0x13, 0xf1, 0x8c, 0x85, 0xe6,
      0xa8, 0x2d, 0x1c, 0xa2, 0x73, 0x7a, 0xce, 0x57,
      0x0a, 0x56, 0x08, 0x87, 0x1c, 0x54, 0x20, 0x29,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
const rosidl_type_hash_t *
robot_arm_interfaces__srv__SetFreeMode_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfc, 0x73, 0x0a, 0x65, 0x01, 0x93, 0x8d, 0x05,
      0xbe, 0xb7, 0xbb, 0xc2, 0xc7, 0x41, 0x75, 0xbe,
      0xf2, 0x1e, 0xc6, 0x39, 0x77, 0x8c, 0x0f, 0xb8,
      0x96, 0xaa, 0x1e, 0x7c, 0x74, 0x7f, 0x6b, 0x76,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
const rosidl_type_hash_t *
robot_arm_interfaces__srv__SetFreeMode_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x75, 0xf5, 0x13, 0xdb, 0xcd, 0x64, 0x19, 0x5b,
      0xbd, 0xbd, 0x88, 0x89, 0x62, 0xb1, 0xac, 0x94,
      0x2b, 0x9c, 0x8e, 0x8d, 0x5f, 0x93, 0x1e, 0x28,
      0x18, 0x53, 0x5e, 0x9e, 0x06, 0xca, 0x31, 0x0e,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char robot_arm_interfaces__srv__SetFreeMode__TYPE_NAME[] = "robot_arm_interfaces/srv/SetFreeMode";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char robot_arm_interfaces__srv__SetFreeMode_Event__TYPE_NAME[] = "robot_arm_interfaces/srv/SetFreeMode_Event";
static char robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME[] = "robot_arm_interfaces/srv/SetFreeMode_Request";
static char robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME[] = "robot_arm_interfaces/srv/SetFreeMode_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__request_message[] = "request_message";
static char robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__response_message[] = "response_message";
static char robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field robot_arm_interfaces__srv__SetFreeMode__FIELDS[] = {
  {
    {robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {robot_arm_interfaces__srv__SetFreeMode_Event__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robot_arm_interfaces__srv__SetFreeMode__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Event__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_arm_interfaces__srv__SetFreeMode__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_arm_interfaces__srv__SetFreeMode__TYPE_NAME, 36, 36},
      {robot_arm_interfaces__srv__SetFreeMode__FIELDS, 3, 3},
    },
    {robot_arm_interfaces__srv__SetFreeMode__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robot_arm_interfaces__srv__SetFreeMode_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robot_arm_interfaces__srv__SetFreeMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = robot_arm_interfaces__srv__SetFreeMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robot_arm_interfaces__srv__SetFreeMode_Request__FIELD_NAME__enable[] = "enable";

static rosidl_runtime_c__type_description__Field robot_arm_interfaces__srv__SetFreeMode_Request__FIELDS[] = {
  {
    {robot_arm_interfaces__srv__SetFreeMode_Request__FIELD_NAME__enable, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_arm_interfaces__srv__SetFreeMode_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
      {robot_arm_interfaces__srv__SetFreeMode_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robot_arm_interfaces__srv__SetFreeMode_Response__FIELD_NAME__success[] = "success";
static char robot_arm_interfaces__srv__SetFreeMode_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field robot_arm_interfaces__srv__SetFreeMode_Response__FIELDS[] = {
  {
    {robot_arm_interfaces__srv__SetFreeMode_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_arm_interfaces__srv__SetFreeMode_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
      {robot_arm_interfaces__srv__SetFreeMode_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__info[] = "info";
static char robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__request[] = "request";
static char robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field robot_arm_interfaces__srv__SetFreeMode_Event__FIELDS[] = {
  {
    {robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robot_arm_interfaces__srv__SetFreeMode_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_arm_interfaces__srv__SetFreeMode_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_arm_interfaces__srv__SetFreeMode_Event__TYPE_NAME, 42, 42},
      {robot_arm_interfaces__srv__SetFreeMode_Event__FIELDS, 3, 3},
    },
    {robot_arm_interfaces__srv__SetFreeMode_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = robot_arm_interfaces__srv__SetFreeMode_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = robot_arm_interfaces__srv__SetFreeMode_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Request: Set free mode (teaching mode) command\n"
  "bool enable          # True (1) for free mode, False (0) for locked mode\n"
  "---\n"
  "# Response: Operation result\n"
  "bool success         # True if operation was successful\n"
  "string message       # Status message or error description";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_arm_interfaces__srv__SetFreeMode__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_arm_interfaces__srv__SetFreeMode__TYPE_NAME, 36, 36},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 270, 270},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robot_arm_interfaces__srv__SetFreeMode_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_arm_interfaces__srv__SetFreeMode_Request__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robot_arm_interfaces__srv__SetFreeMode_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_arm_interfaces__srv__SetFreeMode_Response__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
robot_arm_interfaces__srv__SetFreeMode_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_arm_interfaces__srv__SetFreeMode_Event__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_arm_interfaces__srv__SetFreeMode__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_arm_interfaces__srv__SetFreeMode__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robot_arm_interfaces__srv__SetFreeMode_Event__get_individual_type_description_source(NULL);
    sources[3] = *robot_arm_interfaces__srv__SetFreeMode_Request__get_individual_type_description_source(NULL);
    sources[4] = *robot_arm_interfaces__srv__SetFreeMode_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_arm_interfaces__srv__SetFreeMode_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_arm_interfaces__srv__SetFreeMode_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_arm_interfaces__srv__SetFreeMode_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_arm_interfaces__srv__SetFreeMode_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_arm_interfaces__srv__SetFreeMode_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_arm_interfaces__srv__SetFreeMode_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *robot_arm_interfaces__srv__SetFreeMode_Request__get_individual_type_description_source(NULL);
    sources[3] = *robot_arm_interfaces__srv__SetFreeMode_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
