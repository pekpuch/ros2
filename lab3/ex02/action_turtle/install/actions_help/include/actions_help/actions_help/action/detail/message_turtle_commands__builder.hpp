// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from actions_help:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__BUILDER_HPP_
#define ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "actions_help/action/detail/message_turtle_commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_Goal_angle
{
public:
  explicit Init_MessageTurtleCommands_Goal_angle(::actions_help::action::MessageTurtleCommands_Goal & msg)
  : msg_(msg)
  {}
  ::actions_help::action::MessageTurtleCommands_Goal angle(::actions_help::action::MessageTurtleCommands_Goal::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_Goal msg_;
};

class Init_MessageTurtleCommands_Goal_s
{
public:
  explicit Init_MessageTurtleCommands_Goal_s(::actions_help::action::MessageTurtleCommands_Goal & msg)
  : msg_(msg)
  {}
  Init_MessageTurtleCommands_Goal_angle s(::actions_help::action::MessageTurtleCommands_Goal::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_MessageTurtleCommands_Goal_angle(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_Goal msg_;
};

class Init_MessageTurtleCommands_Goal_command
{
public:
  Init_MessageTurtleCommands_Goal_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTurtleCommands_Goal_s command(::actions_help::action::MessageTurtleCommands_Goal::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_MessageTurtleCommands_Goal_s(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_Goal>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_Goal_command();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_Result_result
{
public:
  Init_MessageTurtleCommands_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions_help::action::MessageTurtleCommands_Result result(::actions_help::action::MessageTurtleCommands_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_Result>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_Result_result();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_Feedback_odom
{
public:
  Init_MessageTurtleCommands_Feedback_odom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions_help::action::MessageTurtleCommands_Feedback odom(::actions_help::action::MessageTurtleCommands_Feedback::_odom_type arg)
  {
    msg_.odom = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_Feedback>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_Feedback_odom();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_SendGoal_Request_goal
{
public:
  explicit Init_MessageTurtleCommands_SendGoal_Request_goal(::actions_help::action::MessageTurtleCommands_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::actions_help::action::MessageTurtleCommands_SendGoal_Request goal(::actions_help::action::MessageTurtleCommands_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_SendGoal_Request msg_;
};

class Init_MessageTurtleCommands_SendGoal_Request_goal_id
{
public:
  Init_MessageTurtleCommands_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTurtleCommands_SendGoal_Request_goal goal_id(::actions_help::action::MessageTurtleCommands_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MessageTurtleCommands_SendGoal_Request_goal(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_SendGoal_Request>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_SendGoal_Request_goal_id();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_SendGoal_Response_stamp
{
public:
  explicit Init_MessageTurtleCommands_SendGoal_Response_stamp(::actions_help::action::MessageTurtleCommands_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::actions_help::action::MessageTurtleCommands_SendGoal_Response stamp(::actions_help::action::MessageTurtleCommands_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_SendGoal_Response msg_;
};

class Init_MessageTurtleCommands_SendGoal_Response_accepted
{
public:
  Init_MessageTurtleCommands_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTurtleCommands_SendGoal_Response_stamp accepted(::actions_help::action::MessageTurtleCommands_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_MessageTurtleCommands_SendGoal_Response_stamp(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_SendGoal_Response>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_SendGoal_Response_accepted();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_GetResult_Request_goal_id
{
public:
  Init_MessageTurtleCommands_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::actions_help::action::MessageTurtleCommands_GetResult_Request goal_id(::actions_help::action::MessageTurtleCommands_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_GetResult_Request>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_GetResult_Request_goal_id();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_GetResult_Response_result
{
public:
  explicit Init_MessageTurtleCommands_GetResult_Response_result(::actions_help::action::MessageTurtleCommands_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::actions_help::action::MessageTurtleCommands_GetResult_Response result(::actions_help::action::MessageTurtleCommands_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_GetResult_Response msg_;
};

class Init_MessageTurtleCommands_GetResult_Response_status
{
public:
  Init_MessageTurtleCommands_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTurtleCommands_GetResult_Response_result status(::actions_help::action::MessageTurtleCommands_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_MessageTurtleCommands_GetResult_Response_result(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_GetResult_Response>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_GetResult_Response_status();
}

}  // namespace actions_help


namespace actions_help
{

namespace action
{

namespace builder
{

class Init_MessageTurtleCommands_FeedbackMessage_feedback
{
public:
  explicit Init_MessageTurtleCommands_FeedbackMessage_feedback(::actions_help::action::MessageTurtleCommands_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::actions_help::action::MessageTurtleCommands_FeedbackMessage feedback(::actions_help::action::MessageTurtleCommands_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_FeedbackMessage msg_;
};

class Init_MessageTurtleCommands_FeedbackMessage_goal_id
{
public:
  Init_MessageTurtleCommands_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTurtleCommands_FeedbackMessage_feedback goal_id(::actions_help::action::MessageTurtleCommands_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_MessageTurtleCommands_FeedbackMessage_feedback(msg_);
  }

private:
  ::actions_help::action::MessageTurtleCommands_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::actions_help::action::MessageTurtleCommands_FeedbackMessage>()
{
  return actions_help::action::builder::Init_MessageTurtleCommands_FeedbackMessage_goal_id();
}

}  // namespace actions_help

#endif  // ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__BUILDER_HPP_
