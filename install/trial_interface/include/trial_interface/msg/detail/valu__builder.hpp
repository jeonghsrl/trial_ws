// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__MSG__DETAIL__VALU__BUILDER_HPP_
#define TRIAL_INTERFACE__MSG__DETAIL__VALU__BUILDER_HPP_

#include "trial_interface/msg/detail/valu__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace trial_interface
{

namespace msg
{

namespace builder
{

class Init_Valu_valu
{
public:
  Init_Valu_valu()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trial_interface::msg::Valu valu(::trial_interface::msg::Valu::_valu_type arg)
  {
    msg_.valu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trial_interface::msg::Valu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::trial_interface::msg::Valu>()
{
  return trial_interface::msg::builder::Init_Valu_valu();
}

}  // namespace trial_interface

#endif  // TRIAL_INTERFACE__MSG__DETAIL__VALU__BUILDER_HPP_
