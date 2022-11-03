// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__MSG__DETAIL__VALU__TRAITS_HPP_
#define TRIAL_INTERFACE__MSG__DETAIL__VALU__TRAITS_HPP_

#include "trial_interface/msg/detail/valu__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trial_interface::msg::Valu>()
{
  return "trial_interface::msg::Valu";
}

template<>
inline const char * name<trial_interface::msg::Valu>()
{
  return "trial_interface/msg/Valu";
}

template<>
struct has_fixed_size<trial_interface::msg::Valu>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trial_interface::msg::Valu>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trial_interface::msg::Valu>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRIAL_INTERFACE__MSG__DETAIL__VALU__TRAITS_HPP_
