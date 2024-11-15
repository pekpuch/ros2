// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/FullName.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__FULL_NAME__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__FULL_NAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/srv/detail/full_name__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_FullName_Request_patronymic
{
public:
  explicit Init_FullName_Request_patronymic(::tutorial_interfaces::srv::FullName_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::FullName_Request patronymic(::tutorial_interfaces::srv::FullName_Request::_patronymic_type arg)
  {
    msg_.patronymic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::FullName_Request msg_;
};

class Init_FullName_Request_first_name
{
public:
  explicit Init_FullName_Request_first_name(::tutorial_interfaces::srv::FullName_Request & msg)
  : msg_(msg)
  {}
  Init_FullName_Request_patronymic first_name(::tutorial_interfaces::srv::FullName_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return Init_FullName_Request_patronymic(msg_);
  }

private:
  ::tutorial_interfaces::srv::FullName_Request msg_;
};

class Init_FullName_Request_last_name
{
public:
  Init_FullName_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullName_Request_first_name last_name(::tutorial_interfaces::srv::FullName_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullName_Request_first_name(msg_);
  }

private:
  ::tutorial_interfaces::srv::FullName_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::FullName_Request>()
{
  return tutorial_interfaces::srv::builder::Init_FullName_Request_last_name();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_FullName_Response_full_name
{
public:
  Init_FullName_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::srv::FullName_Response full_name(::tutorial_interfaces::srv::FullName_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::FullName_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::FullName_Response>()
{
  return tutorial_interfaces::srv::builder::Init_FullName_Response_full_name();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__FULL_NAME__BUILDER_HPP_
