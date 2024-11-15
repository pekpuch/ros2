// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from actions_help:action/MessageTurtleCommands.idl
// generated code does not contain a copyright notice

#ifndef ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__TRAITS_HPP_
#define ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "actions_help/action/detail/message_turtle_commands__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << ", ";
  }

  // member: s
  {
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }

  // member: s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s: ";
    rosidl_generator_traits::value_to_yaml(msg.s, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_Goal & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_Goal>()
{
  return "actions_help::action::MessageTurtleCommands_Goal";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_Goal>()
{
  return "actions_help/action/MessageTurtleCommands_Goal";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_Result & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_Result>()
{
  return "actions_help::action::MessageTurtleCommands_Result";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_Result>()
{
  return "actions_help/action/MessageTurtleCommands_Result";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: odom
  {
    out << "odom: ";
    rosidl_generator_traits::value_to_yaml(msg.odom, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: odom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom: ";
    rosidl_generator_traits::value_to_yaml(msg.odom, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_Feedback & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_Feedback>()
{
  return "actions_help::action::MessageTurtleCommands_Feedback";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_Feedback>()
{
  return "actions_help/action/MessageTurtleCommands_Feedback";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "actions_help/action/detail/message_turtle_commands__traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_SendGoal_Request & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_SendGoal_Request>()
{
  return "actions_help::action::MessageTurtleCommands_SendGoal_Request";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_SendGoal_Request>()
{
  return "actions_help/action/MessageTurtleCommands_SendGoal_Request";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<actions_help::action::MessageTurtleCommands_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<actions_help::action::MessageTurtleCommands_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_SendGoal_Response & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_SendGoal_Response>()
{
  return "actions_help::action::MessageTurtleCommands_SendGoal_Response";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_SendGoal_Response>()
{
  return "actions_help/action/MessageTurtleCommands_SendGoal_Response";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_SendGoal>()
{
  return "actions_help::action::MessageTurtleCommands_SendGoal";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_SendGoal>()
{
  return "actions_help/action/MessageTurtleCommands_SendGoal";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<actions_help::action::MessageTurtleCommands_SendGoal_Request>::value &&
    has_fixed_size<actions_help::action::MessageTurtleCommands_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<actions_help::action::MessageTurtleCommands_SendGoal_Request>::value &&
    has_bounded_size<actions_help::action::MessageTurtleCommands_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<actions_help::action::MessageTurtleCommands_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<actions_help::action::MessageTurtleCommands_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actions_help::action::MessageTurtleCommands_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_GetResult_Request & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_GetResult_Request>()
{
  return "actions_help::action::MessageTurtleCommands_GetResult_Request";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_GetResult_Request>()
{
  return "actions_help/action/MessageTurtleCommands_GetResult_Request";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "actions_help/action/detail/message_turtle_commands__traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_GetResult_Response & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_GetResult_Response>()
{
  return "actions_help::action::MessageTurtleCommands_GetResult_Response";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_GetResult_Response>()
{
  return "actions_help/action/MessageTurtleCommands_GetResult_Response";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<actions_help::action::MessageTurtleCommands_Result>::value> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<actions_help::action::MessageTurtleCommands_Result>::value> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_GetResult>()
{
  return "actions_help::action::MessageTurtleCommands_GetResult";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_GetResult>()
{
  return "actions_help/action/MessageTurtleCommands_GetResult";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<actions_help::action::MessageTurtleCommands_GetResult_Request>::value &&
    has_fixed_size<actions_help::action::MessageTurtleCommands_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<actions_help::action::MessageTurtleCommands_GetResult_Request>::value &&
    has_bounded_size<actions_help::action::MessageTurtleCommands_GetResult_Response>::value
  >
{
};

template<>
struct is_service<actions_help::action::MessageTurtleCommands_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<actions_help::action::MessageTurtleCommands_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<actions_help::action::MessageTurtleCommands_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "actions_help/action/detail/message_turtle_commands__traits.hpp"

namespace actions_help
{

namespace action
{

inline void to_flow_style_yaml(
  const MessageTurtleCommands_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MessageTurtleCommands_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MessageTurtleCommands_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace actions_help

namespace rosidl_generator_traits
{

[[deprecated("use actions_help::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const actions_help::action::MessageTurtleCommands_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  actions_help::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use actions_help::action::to_yaml() instead")]]
inline std::string to_yaml(const actions_help::action::MessageTurtleCommands_FeedbackMessage & msg)
{
  return actions_help::action::to_yaml(msg);
}

template<>
inline const char * data_type<actions_help::action::MessageTurtleCommands_FeedbackMessage>()
{
  return "actions_help::action::MessageTurtleCommands_FeedbackMessage";
}

template<>
inline const char * name<actions_help::action::MessageTurtleCommands_FeedbackMessage>()
{
  return "actions_help/action/MessageTurtleCommands_FeedbackMessage";
}

template<>
struct has_fixed_size<actions_help::action::MessageTurtleCommands_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<actions_help::action::MessageTurtleCommands_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<actions_help::action::MessageTurtleCommands_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<actions_help::action::MessageTurtleCommands_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<actions_help::action::MessageTurtleCommands_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<actions_help::action::MessageTurtleCommands>
  : std::true_type
{
};

template<>
struct is_action_goal<actions_help::action::MessageTurtleCommands_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<actions_help::action::MessageTurtleCommands_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<actions_help::action::MessageTurtleCommands_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ACTIONS_HELP__ACTION__DETAIL__MESSAGE_TURTLE_COMMANDS__TRAITS_HPP_
