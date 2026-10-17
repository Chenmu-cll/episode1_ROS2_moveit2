// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_arm_interfaces:action/AngleMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_arm_interfaces/action/angle_mode.hpp"


#ifndef ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__BUILDER_HPP_
#define ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_arm_interfaces/action/detail/angle_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_Goal_speed_ratio
{
public:
  explicit Init_AngleMode_Goal_speed_ratio(::robot_arm_interfaces::action::AngleMode_Goal & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_Goal speed_ratio(::robot_arm_interfaces::action::AngleMode_Goal::_speed_ratio_type arg)
  {
    msg_.speed_ratio = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Goal msg_;
};

class Init_AngleMode_Goal_angles
{
public:
  Init_AngleMode_Goal_angles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_Goal_speed_ratio angles(::robot_arm_interfaces::action::AngleMode_Goal::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return Init_AngleMode_Goal_speed_ratio(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_Goal>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_Goal_angles();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_Result_final_angles
{
public:
  explicit Init_AngleMode_Result_final_angles(::robot_arm_interfaces::action::AngleMode_Result & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_Result final_angles(::robot_arm_interfaces::action::AngleMode_Result::_final_angles_type arg)
  {
    msg_.final_angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Result msg_;
};

class Init_AngleMode_Result_execution_time
{
public:
  explicit Init_AngleMode_Result_execution_time(::robot_arm_interfaces::action::AngleMode_Result & msg)
  : msg_(msg)
  {}
  Init_AngleMode_Result_final_angles execution_time(::robot_arm_interfaces::action::AngleMode_Result::_execution_time_type arg)
  {
    msg_.execution_time = std::move(arg);
    return Init_AngleMode_Result_final_angles(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Result msg_;
};

class Init_AngleMode_Result_message
{
public:
  explicit Init_AngleMode_Result_message(::robot_arm_interfaces::action::AngleMode_Result & msg)
  : msg_(msg)
  {}
  Init_AngleMode_Result_execution_time message(::robot_arm_interfaces::action::AngleMode_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_AngleMode_Result_execution_time(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Result msg_;
};

class Init_AngleMode_Result_success
{
public:
  Init_AngleMode_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_Result_message success(::robot_arm_interfaces::action::AngleMode_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AngleMode_Result_message(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_Result>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_Result_success();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_Feedback_status_message
{
public:
  explicit Init_AngleMode_Feedback_status_message(::robot_arm_interfaces::action::AngleMode_Feedback & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_Feedback status_message(::robot_arm_interfaces::action::AngleMode_Feedback::_status_message_type arg)
  {
    msg_.status_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Feedback msg_;
};

class Init_AngleMode_Feedback_current_angles
{
public:
  explicit Init_AngleMode_Feedback_current_angles(::robot_arm_interfaces::action::AngleMode_Feedback & msg)
  : msg_(msg)
  {}
  Init_AngleMode_Feedback_status_message current_angles(::robot_arm_interfaces::action::AngleMode_Feedback::_current_angles_type arg)
  {
    msg_.current_angles = std::move(arg);
    return Init_AngleMode_Feedback_status_message(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Feedback msg_;
};

class Init_AngleMode_Feedback_progress
{
public:
  explicit Init_AngleMode_Feedback_progress(::robot_arm_interfaces::action::AngleMode_Feedback & msg)
  : msg_(msg)
  {}
  Init_AngleMode_Feedback_current_angles progress(::robot_arm_interfaces::action::AngleMode_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return Init_AngleMode_Feedback_current_angles(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Feedback msg_;
};

class Init_AngleMode_Feedback_elapsed_time
{
public:
  Init_AngleMode_Feedback_elapsed_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_Feedback_progress elapsed_time(::robot_arm_interfaces::action::AngleMode_Feedback::_elapsed_time_type arg)
  {
    msg_.elapsed_time = std::move(arg);
    return Init_AngleMode_Feedback_progress(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_Feedback>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_Feedback_elapsed_time();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_SendGoal_Request_goal
{
public:
  explicit Init_AngleMode_SendGoal_Request_goal(::robot_arm_interfaces::action::AngleMode_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Request goal(::robot_arm_interfaces::action::AngleMode_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Request msg_;
};

class Init_AngleMode_SendGoal_Request_goal_id
{
public:
  Init_AngleMode_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_SendGoal_Request_goal goal_id(::robot_arm_interfaces::action::AngleMode_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AngleMode_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_SendGoal_Request>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_SendGoal_Request_goal_id();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_SendGoal_Response_stamp
{
public:
  explicit Init_AngleMode_SendGoal_Response_stamp(::robot_arm_interfaces::action::AngleMode_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Response stamp(::robot_arm_interfaces::action::AngleMode_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Response msg_;
};

class Init_AngleMode_SendGoal_Response_accepted
{
public:
  Init_AngleMode_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_SendGoal_Response_stamp accepted(::robot_arm_interfaces::action::AngleMode_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AngleMode_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_SendGoal_Response>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_SendGoal_Response_accepted();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_SendGoal_Event_response
{
public:
  explicit Init_AngleMode_SendGoal_Event_response(::robot_arm_interfaces::action::AngleMode_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Event response(::robot_arm_interfaces::action::AngleMode_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Event msg_;
};

class Init_AngleMode_SendGoal_Event_request
{
public:
  explicit Init_AngleMode_SendGoal_Event_request(::robot_arm_interfaces::action::AngleMode_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_AngleMode_SendGoal_Event_response request(::robot_arm_interfaces::action::AngleMode_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AngleMode_SendGoal_Event_response(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Event msg_;
};

class Init_AngleMode_SendGoal_Event_info
{
public:
  Init_AngleMode_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_SendGoal_Event_request info(::robot_arm_interfaces::action::AngleMode_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AngleMode_SendGoal_Event_request(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_SendGoal_Event>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_SendGoal_Event_info();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_GetResult_Request_goal_id
{
public:
  Init_AngleMode_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_arm_interfaces::action::AngleMode_GetResult_Request goal_id(::robot_arm_interfaces::action::AngleMode_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_GetResult_Request>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_GetResult_Request_goal_id();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_GetResult_Response_result
{
public:
  explicit Init_AngleMode_GetResult_Response_result(::robot_arm_interfaces::action::AngleMode_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_GetResult_Response result(::robot_arm_interfaces::action::AngleMode_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Response msg_;
};

class Init_AngleMode_GetResult_Response_status
{
public:
  Init_AngleMode_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_GetResult_Response_result status(::robot_arm_interfaces::action::AngleMode_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AngleMode_GetResult_Response_result(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_GetResult_Response>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_GetResult_Response_status();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_GetResult_Event_response
{
public:
  explicit Init_AngleMode_GetResult_Event_response(::robot_arm_interfaces::action::AngleMode_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_GetResult_Event response(::robot_arm_interfaces::action::AngleMode_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Event msg_;
};

class Init_AngleMode_GetResult_Event_request
{
public:
  explicit Init_AngleMode_GetResult_Event_request(::robot_arm_interfaces::action::AngleMode_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_AngleMode_GetResult_Event_response request(::robot_arm_interfaces::action::AngleMode_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_AngleMode_GetResult_Event_response(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Event msg_;
};

class Init_AngleMode_GetResult_Event_info
{
public:
  Init_AngleMode_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_GetResult_Event_request info(::robot_arm_interfaces::action::AngleMode_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_AngleMode_GetResult_Event_request(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_GetResult_Event>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_GetResult_Event_info();
}

}  // namespace robot_arm_interfaces


namespace robot_arm_interfaces
{

namespace action
{

namespace builder
{

class Init_AngleMode_FeedbackMessage_feedback
{
public:
  explicit Init_AngleMode_FeedbackMessage_feedback(::robot_arm_interfaces::action::AngleMode_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_arm_interfaces::action::AngleMode_FeedbackMessage feedback(::robot_arm_interfaces::action::AngleMode_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_FeedbackMessage msg_;
};

class Init_AngleMode_FeedbackMessage_goal_id
{
public:
  Init_AngleMode_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AngleMode_FeedbackMessage_feedback goal_id(::robot_arm_interfaces::action::AngleMode_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AngleMode_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_arm_interfaces::action::AngleMode_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_arm_interfaces::action::AngleMode_FeedbackMessage>()
{
  return robot_arm_interfaces::action::builder::Init_AngleMode_FeedbackMessage_goal_id();
}

}  // namespace robot_arm_interfaces

#endif  // ROBOT_ARM_INTERFACES__ACTION__DETAIL__ANGLE_MODE__BUILDER_HPP_
