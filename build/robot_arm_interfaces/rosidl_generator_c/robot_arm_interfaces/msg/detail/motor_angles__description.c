// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

#include "robot_arm_interfaces/msg/detail/motor_angles__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_arm_interfaces
const rosidl_type_hash_t *
robot_arm_interfaces__msg__MotorAngles__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6a, 0x14, 0xf2, 0xd4, 0x9a, 0x3d, 0x8c, 0xd8,
      0x88, 0xa6, 0xdc, 0x85, 0x7d, 0x45, 0xa5, 0x4c,
      0x30, 0xc5, 0x60, 0x1f, 0xd6, 0x37, 0x90, 0x1b,
      0xb3, 0x8a, 0x80, 0xaf, 0xc2, 0xfd, 0xfd, 0x0a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
#endif

static char robot_arm_interfaces__msg__MotorAngles__TYPE_NAME[] = "robot_arm_interfaces/msg/MotorAngles";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";

// Define type names, field names, and default values
static char robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__angles[] = "angles";
static char robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__timestamp[] = "timestamp";
static char robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__success[] = "success";
static char robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field robot_arm_interfaces__msg__MotorAngles__FIELDS[] = {
  {
    {robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__angles, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      6,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_arm_interfaces__msg__MotorAngles__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription robot_arm_interfaces__msg__MotorAngles__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_arm_interfaces__msg__MotorAngles__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_arm_interfaces__msg__MotorAngles__TYPE_NAME, 36, 36},
      {robot_arm_interfaces__msg__MotorAngles__FIELDS, 4, 4},
    },
    {robot_arm_interfaces__msg__MotorAngles__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Motor angles message for publishing current motor positions\n"
  "# Array of 6 motor angles in degrees\n"
  "float64[6] angles\n"
  "\n"
  "# Timestamp when the angles were read\n"
  "builtin_interfaces/Time timestamp\n"
  "\n"
  "# Success flag indicating if the reading was successful\n"
  "bool success\n"
  "\n"
  "# Optional message for additional information\n"
  "string message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_arm_interfaces__msg__MotorAngles__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_arm_interfaces__msg__MotorAngles__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 321, 321},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_arm_interfaces__msg__MotorAngles__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_arm_interfaces__msg__MotorAngles__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
