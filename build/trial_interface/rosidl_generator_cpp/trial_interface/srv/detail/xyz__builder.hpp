// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__SRV__DETAIL__XYZ__BUILDER_HPP_
#define TRIAL_INTERFACE__SRV__DETAIL__XYZ__BUILDER_HPP_

#include "trial_interface/srv/detail/xyz__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace trial_interface
{

namespace srv
{

namespace builder
{

class Init_XYZ_Request_z
{
public:
  explicit Init_XYZ_Request_z(::trial_interface::srv::XYZ_Request & msg)
  : msg_(msg)
  {}
  ::trial_interface::srv::XYZ_Request z(::trial_interface::srv::XYZ_Request::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trial_interface::srv::XYZ_Request msg_;
};

class Init_XYZ_Request_y
{
public:
  explicit Init_XYZ_Request_y(::trial_interface::srv::XYZ_Request & msg)
  : msg_(msg)
  {}
  Init_XYZ_Request_z y(::trial_interface::srv::XYZ_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_XYZ_Request_z(msg_);
  }

private:
  ::trial_interface::srv::XYZ_Request msg_;
};

class Init_XYZ_Request_x
{
public:
  Init_XYZ_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_XYZ_Request_y x(::trial_interface::srv::XYZ_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_XYZ_Request_y(msg_);
  }

private:
  ::trial_interface::srv::XYZ_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trial_interface::srv::XYZ_Request>()
{
  return trial_interface::srv::builder::Init_XYZ_Request_x();
}

}  // namespace trial_interface


namespace trial_interface
{

namespace srv
{

namespace builder
{

class Init_XYZ_Response_sqsum
{
public:
  Init_XYZ_Response_sqsum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trial_interface::srv::XYZ_Response sqsum(::trial_interface::srv::XYZ_Response::_sqsum_type arg)
  {
    msg_.sqsum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trial_interface::srv::XYZ_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trial_interface::srv::XYZ_Response>()
{
  return trial_interface::srv::builder::Init_XYZ_Response_sqsum();
}

}  // namespace trial_interface

#endif  // TRIAL_INTERFACE__SRV__DETAIL__XYZ__BUILDER_HPP_
