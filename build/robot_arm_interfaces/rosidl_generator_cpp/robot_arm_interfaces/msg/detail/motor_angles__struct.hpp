// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_arm_interfaces:msg/MotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/msg/motor_angles.hpp"


#ifndef ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_HPP_
#define ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__msg__MotorAngles __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__msg__MotorAngles __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorAngles_
{
  using Type = MotorAngles_<ContainerAllocator>;

  explicit MotorAngles_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->angles.begin(), this->angles.end(), 0.0);
      this->success = false;
      this->message = "";
    }
  }

  explicit MotorAngles_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angles(_alloc),
    timestamp(_alloc, _init),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->angles.begin(), this->angles.end(), 0.0);
      this->success = false;
      this->message = "";
    }
  }

  // field types and members
  using _angles_type =
    std::array<double, 6>;
  _angles_type angles;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__angles(
    const std::array<double, 6> & _arg)
  {
    this->angles = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__msg__MotorAngles
    std::shared_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__msg__MotorAngles
    std::shared_ptr<robot_arm_interfaces::msg::MotorAngles_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorAngles_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorAngles_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorAngles_

// alias to use template instance with default allocator
using MotorAngles =
  robot_arm_interfaces::msg::MotorAngles_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__MSG__DETAIL__MOTOR_ANGLES__STRUCT_HPP_
