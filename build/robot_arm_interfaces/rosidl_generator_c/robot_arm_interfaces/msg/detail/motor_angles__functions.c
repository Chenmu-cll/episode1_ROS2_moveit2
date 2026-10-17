// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice
#include "robot_arm_interfaces/msg/detail/motor_angles__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_arm_interfaces__msg__MotorAngles__init(robot_arm_interfaces__msg__MotorAngles * msg)
{
  if (!msg) {
    return false;
  }
  // angles
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    robot_arm_interfaces__msg__MotorAngles__fini(msg);
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    robot_arm_interfaces__msg__MotorAngles__fini(msg);
    return false;
  }
  return true;
}

void
robot_arm_interfaces__msg__MotorAngles__fini(robot_arm_interfaces__msg__MotorAngles * msg)
{
  if (!msg) {
    return;
  }
  // angles
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
robot_arm_interfaces__msg__MotorAngles__are_equal(const robot_arm_interfaces__msg__MotorAngles * lhs, const robot_arm_interfaces__msg__MotorAngles * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angles
  for (size_t i = 0; i < 6; ++i) {
    if (lhs->angles[i] != rhs->angles[i]) {
      return false;
    }
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
robot_arm_interfaces__msg__MotorAngles__copy(
  const robot_arm_interfaces__msg__MotorAngles * input,
  robot_arm_interfaces__msg__MotorAngles * output)
{
  if (!input || !output) {
    return false;
  }
  // angles
  for (size_t i = 0; i < 6; ++i) {
    output->angles[i] = input->angles[i];
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

robot_arm_interfaces__msg__MotorAngles *
robot_arm_interfaces__msg__MotorAngles__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__msg__MotorAngles * msg = (robot_arm_interfaces__msg__MotorAngles *)allocator.allocate(sizeof(robot_arm_interfaces__msg__MotorAngles), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_arm_interfaces__msg__MotorAngles));
  bool success = robot_arm_interfaces__msg__MotorAngles__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_arm_interfaces__msg__MotorAngles__destroy(robot_arm_interfaces__msg__MotorAngles * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_arm_interfaces__msg__MotorAngles__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_arm_interfaces__msg__MotorAngles__Sequence__init(robot_arm_interfaces__msg__MotorAngles__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__msg__MotorAngles * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(robot_arm_interfaces__msg__MotorAngles)) {
      return false;
    }
    data = (robot_arm_interfaces__msg__MotorAngles *)allocator.zero_allocate(size, sizeof(robot_arm_interfaces__msg__MotorAngles), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_arm_interfaces__msg__MotorAngles__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_arm_interfaces__msg__MotorAngles__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
robot_arm_interfaces__msg__MotorAngles__Sequence__fini(robot_arm_interfaces__msg__MotorAngles__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      robot_arm_interfaces__msg__MotorAngles__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

robot_arm_interfaces__msg__MotorAngles__Sequence *
robot_arm_interfaces__msg__MotorAngles__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_arm_interfaces__msg__MotorAngles__Sequence * array = (robot_arm_interfaces__msg__MotorAngles__Sequence *)allocator.allocate(sizeof(robot_arm_interfaces__msg__MotorAngles__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_arm_interfaces__msg__MotorAngles__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_arm_interfaces__msg__MotorAngles__Sequence__destroy(robot_arm_interfaces__msg__MotorAngles__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_arm_interfaces__msg__MotorAngles__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_arm_interfaces__msg__MotorAngles__Sequence__are_equal(const robot_arm_interfaces__msg__MotorAngles__Sequence * lhs, const robot_arm_interfaces__msg__MotorAngles__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_arm_interfaces__msg__MotorAngles__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_arm_interfaces__msg__MotorAngles__Sequence__copy(
  const robot_arm_interfaces__msg__MotorAngles__Sequence * input,
  robot_arm_interfaces__msg__MotorAngles__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(robot_arm_interfaces__msg__MotorAngles)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(robot_arm_interfaces__msg__MotorAngles);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_arm_interfaces__msg__MotorAngles * data =
      (robot_arm_interfaces__msg__MotorAngles *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_arm_interfaces__msg__MotorAngles__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_arm_interfaces__msg__MotorAngles__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_arm_interfaces__msg__MotorAngles__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
