// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_arm_interfaces:action/AngleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/action/angle_mode.hpp"


#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_HPP_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Goal __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Goal __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_Goal_
{
  using Type = AngleMode_Goal_<ContainerAllocator>;

  explicit AngleMode_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->angles.begin(), this->angles.end(), 0.0);
      this->speed_ratio = 0.0;
    }
  }

  explicit AngleMode_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->angles.begin(), this->angles.end(), 0.0);
      this->speed_ratio = 0.0;
    }
  }

  // field types and members
  using _angles_type =
    std::array<double, 6>;
  _angles_type angles;
  using _speed_ratio_type =
    double;
  _speed_ratio_type speed_ratio;

  // setters for named parameter idiom
  Type & set__angles(
    const std::array<double, 6> & _arg)
  {
    this->angles = _arg;
    return *this;
  }
  Type & set__speed_ratio(
    const double & _arg)
  {
    this->speed_ratio = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Goal
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Goal
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_Goal_ & other) const
  {
    if (this->angles != other.angles) {
      return false;
    }
    if (this->speed_ratio != other.speed_ratio) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_Goal_

// alias to use template instance with default allocator
using AngleMode_Goal =
  robot_arm_interfaces::action::AngleMode_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Result __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Result __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_Result_
{
  using Type = AngleMode_Result_<ContainerAllocator>;

  explicit AngleMode_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->execution_time = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->final_angles.begin(), this->final_angles.end(), 0.0);
    }
  }

  explicit AngleMode_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc),
    final_angles(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->message = "";
      this->execution_time = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->final_angles.begin(), this->final_angles.end(), 0.0);
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _execution_time_type =
    double;
  _execution_time_type execution_time;
  using _final_angles_type =
    std::array<double, 6>;
  _final_angles_type final_angles;

  // setters for named parameter idiom
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
  Type & set__execution_time(
    const double & _arg)
  {
    this->execution_time = _arg;
    return *this;
  }
  Type & set__final_angles(
    const std::array<double, 6> & _arg)
  {
    this->final_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Result
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Result
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_Result_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->execution_time != other.execution_time) {
      return false;
    }
    if (this->final_angles != other.final_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_Result_

// alias to use template instance with default allocator
using AngleMode_Result =
  robot_arm_interfaces::action::AngleMode_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_Feedback __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_Feedback_
{
  using Type = AngleMode_Feedback_<ContainerAllocator>;

  explicit AngleMode_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0;
      this->progress = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->current_angles.begin(), this->current_angles.end(), 0.0);
      this->status_message = "";
    }
  }

  explicit AngleMode_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_angles(_alloc),
    status_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->elapsed_time = 0.0;
      this->progress = 0.0;
      std::fill<typename std::array<double, 6>::iterator, double>(this->current_angles.begin(), this->current_angles.end(), 0.0);
      this->status_message = "";
    }
  }

  // field types and members
  using _elapsed_time_type =
    double;
  _elapsed_time_type elapsed_time;
  using _progress_type =
    double;
  _progress_type progress;
  using _current_angles_type =
    std::array<double, 6>;
  _current_angles_type current_angles;
  using _status_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _status_message_type status_message;

  // setters for named parameter idiom
  Type & set__elapsed_time(
    const double & _arg)
  {
    this->elapsed_time = _arg;
    return *this;
  }
  Type & set__progress(
    const double & _arg)
  {
    this->progress = _arg;
    return *this;
  }
  Type & set__current_angles(
    const std::array<double, 6> & _arg)
  {
    this->current_angles = _arg;
    return *this;
  }
  Type & set__status_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->status_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Feedback
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_Feedback
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_Feedback_ & other) const
  {
    if (this->elapsed_time != other.elapsed_time) {
      return false;
    }
    if (this->progress != other.progress) {
      return false;
    }
    if (this->current_angles != other.current_angles) {
      return false;
    }
    if (this->status_message != other.status_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_Feedback_

// alias to use template instance with default allocator
using AngleMode_Feedback =
  robot_arm_interfaces::action::AngleMode_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "robot_arm_interfaces/action/detail/angle_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Request __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_SendGoal_Request_
{
  using Type = AngleMode_SendGoal_Request_<ContainerAllocator>;

  explicit AngleMode_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit AngleMode_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const robot_arm_interfaces::action::AngleMode_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Request
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Request
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_SendGoal_Request_

// alias to use template instance with default allocator
using AngleMode_SendGoal_Request =
  robot_arm_interfaces::action::AngleMode_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Response __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_SendGoal_Response_
{
  using Type = AngleMode_SendGoal_Response_<ContainerAllocator>;

  explicit AngleMode_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit AngleMode_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Response
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Response
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_SendGoal_Response_

// alias to use template instance with default allocator
using AngleMode_SendGoal_Response =
  robot_arm_interfaces::action::AngleMode_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Event __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Event __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_SendGoal_Event_
{
  using Type = AngleMode_SendGoal_Event_<ContainerAllocator>;

  explicit AngleMode_SendGoal_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AngleMode_SendGoal_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_SendGoal_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_SendGoal_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Event
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_SendGoal_Event
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_SendGoal_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_SendGoal_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_SendGoal_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_SendGoal_Event_

// alias to use template instance with default allocator
using AngleMode_SendGoal_Event =
  robot_arm_interfaces::action::AngleMode_SendGoal_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces

namespace robot_arm_interfaces
{

namespace action
{

struct AngleMode_SendGoal
{
  using Request = robot_arm_interfaces::action::AngleMode_SendGoal_Request;
  using Response = robot_arm_interfaces::action::AngleMode_SendGoal_Response;
  using Event = robot_arm_interfaces::action::AngleMode_SendGoal_Event;
};

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Request __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_GetResult_Request_
{
  using Type = AngleMode_GetResult_Request_<ContainerAllocator>;

  explicit AngleMode_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit AngleMode_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Request
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Request
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_GetResult_Request_

// alias to use template instance with default allocator
using AngleMode_GetResult_Request =
  robot_arm_interfaces::action::AngleMode_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'result'
// already included above
// #include "robot_arm_interfaces/action/detail/angle_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Response __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_GetResult_Response_
{
  using Type = AngleMode_GetResult_Response_<ContainerAllocator>;

  explicit AngleMode_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit AngleMode_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const robot_arm_interfaces::action::AngleMode_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Response
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Response
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_GetResult_Response_

// alias to use template instance with default allocator
using AngleMode_GetResult_Response =
  robot_arm_interfaces::action::AngleMode_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Event __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Event __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_GetResult_Event_
{
  using Type = AngleMode_GetResult_Event_<ContainerAllocator>;

  explicit AngleMode_GetResult_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit AngleMode_GetResult_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_GetResult_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::action::AngleMode_GetResult_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Event
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_GetResult_Event
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_GetResult_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_GetResult_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_GetResult_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_GetResult_Event_

// alias to use template instance with default allocator
using AngleMode_GetResult_Event =
  robot_arm_interfaces::action::AngleMode_GetResult_Event_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces

namespace robot_arm_interfaces
{

namespace action
{

struct AngleMode_GetResult
{
  using Request = robot_arm_interfaces::action::AngleMode_GetResult_Request;
  using Response = robot_arm_interfaces::action::AngleMode_GetResult_Response;
  using Event = robot_arm_interfaces::action::AngleMode_GetResult_Event;
};

}  // namespace action

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "robot_arm_interfaces/action/detail/angle_mode__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__action__AngleMode_FeedbackMessage __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct AngleMode_FeedbackMessage_
{
  using Type = AngleMode_FeedbackMessage_<ContainerAllocator>;

  explicit AngleMode_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit AngleMode_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const robot_arm_interfaces::action::AngleMode_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_FeedbackMessage
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__action__AngleMode_FeedbackMessage
    std::shared_ptr<robot_arm_interfaces::action::AngleMode_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AngleMode_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const AngleMode_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AngleMode_FeedbackMessage_

// alias to use template instance with default allocator
using AngleMode_FeedbackMessage =
  robot_arm_interfaces::action::AngleMode_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace robot_arm_interfaces

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace robot_arm_interfaces
{

namespace action
{

struct AngleMode
{
  /// The goal message defined in the action definition.
  using Goal = robot_arm_interfaces::action::AngleMode_Goal;
  /// The result message defined in the action definition.
  using Result = robot_arm_interfaces::action::AngleMode_Result;
  /// The feedback message defined in the action definition.
  using Feedback = robot_arm_interfaces::action::AngleMode_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = robot_arm_interfaces::action::AngleMode_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = robot_arm_interfaces::action::AngleMode_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = robot_arm_interfaces::action::AngleMode_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct AngleMode AngleMode;

}  // namespace action

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__STRUCT_HPP_
