// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__SRV__DETAIL__XYZ__TRAITS_HPP_
#define TRIAL_INTERFACE__SRV__DETAIL__XYZ__TRAITS_HPP_

#include "trial_interface/srv/detail/xyz__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trial_interface::srv::XYZ_Request>()
{
  return "trial_interface::srv::XYZ_Request";
}

template<>
inline const char * name<trial_interface::srv::XYZ_Request>()
{
  return "trial_interface/srv/XYZ_Request";
}

template<>
struct has_fixed_size<trial_interface::srv::XYZ_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trial_interface::srv::XYZ_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trial_interface::srv::XYZ_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trial_interface::srv::XYZ_Response>()
{
  return "trial_interface::srv::XYZ_Response";
}

template<>
inline const char * name<trial_interface::srv::XYZ_Response>()
{
  return "trial_interface/srv/XYZ_Response";
}

template<>
struct has_fixed_size<trial_interface::srv::XYZ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trial_interface::srv::XYZ_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trial_interface::srv::XYZ_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trial_interface::srv::XYZ>()
{
  return "trial_interface::srv::XYZ";
}

template<>
inline const char * name<trial_interface::srv::XYZ>()
{
  return "trial_interface/srv/XYZ";
}

template<>
struct has_fixed_size<trial_interface::srv::XYZ>
  : std::integral_constant<
    bool,
    has_fixed_size<trial_interface::srv::XYZ_Request>::value &&
    has_fixed_size<trial_interface::srv::XYZ_Response>::value
  >
{
};

template<>
struct has_bounded_size<trial_interface::srv::XYZ>
  : std::integral_constant<
    bool,
    has_bounded_size<trial_interface::srv::XYZ_Request>::value &&
    has_bounded_size<trial_interface::srv::XYZ_Response>::value
  >
{
};

template<>
struct is_service<trial_interface::srv::XYZ>
  : std::true_type
{
};

template<>
struct is_service_request<trial_interface::srv::XYZ_Request>
  : std::true_type
{
};

template<>
struct is_service_response<trial_interface::srv::XYZ_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TRIAL_INTERFACE__SRV__DETAIL__XYZ__TRAITS_HPP_
