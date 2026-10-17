// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_arm_interfaces:srv/ReadMotorAngles.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/srv/read_motor_angles.hpp"


#ifndef ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__STRUCT_HPP_
#define ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Request __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Request __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadMotorAngles_Request_
{
  using Type = ReadMotorAngles_Request_<ContainerAllocator>;

  explicit ReadMotorAngles_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ReadMotorAngles_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Request
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Request
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadMotorAngles_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadMotorAngles_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadMotorAngles_Request_

// alias to use template instance with default allocator
using ReadMotorAngles_Request =
  robot_arm_interfaces::srv::ReadMotorAngles_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_arm_interfaces


#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Response __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Response __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadMotorAngles_Response_
{
  using Type = ReadMotorAngles_Response_<ContainerAllocator>;

  explicit ReadMotorAngles_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 6>::iterator, double>(this->angles.begin(), this->angles.end(), 0.0);
      this->success = false;
      this->message = "";
    }
  }

  explicit ReadMotorAngles_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : angles(_alloc),
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
    robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Response
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Response
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadMotorAngles_Response_ & other) const
  {
    if (this->angles != other.angles) {
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
  bool operator!=(const ReadMotorAngles_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadMotorAngles_Response_

// alias to use template instance with default allocator
using ReadMotorAngles_Response =
  robot_arm_interfaces::srv::ReadMotorAngles_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_arm_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Event __attribute__((deprecated))
#else
# define DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Event __declspec(deprecated)
#endif

namespace robot_arm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadMotorAngles_Event_
{
  using Type = ReadMotorAngles_Event_<ContainerAllocator>;

  explicit ReadMotorAngles_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit ReadMotorAngles_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::srv::ReadMotorAngles_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<robot_arm_interfaces::srv::ReadMotorAngles_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Event
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_arm_interfaces__srv__ReadMotorAngles_Event
    std::shared_ptr<robot_arm_interfaces::srv::ReadMotorAngles_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadMotorAngles_Event_ & other) const
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
  bool operator!=(const ReadMotorAngles_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadMotorAngles_Event_

// alias to use template instance with default allocator
using ReadMotorAngles_Event =
  robot_arm_interfaces::srv::ReadMotorAngles_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace robot_arm_interfaces

namespace robot_arm_interfaces
{

namespace srv
{

struct ReadMotorAngles
{
  using Request = robot_arm_interfaces::srv::ReadMotorAngles_Request;
  using Response = robot_arm_interfaces::srv::ReadMotorAngles_Response;
  using Event = robot_arm_interfaces::srv::ReadMotorAngles_Event;
};

}  // namespace srv

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__SRV__DETAIL__READ_MOTOR_ANGLES__STRUCT_HPP_
