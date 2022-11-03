// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "trial_interface/msg/detail/valu__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace trial_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Valu_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) trial_interface::msg::Valu(_init);
}

void Valu_fini_function(void * message_memory)
{
  auto typed_message = static_cast<trial_interface::msg::Valu *>(message_memory);
  typed_message->~Valu();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Valu_message_member_array[1] = {
  {
    "valu",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface::msg::Valu, valu),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Valu_message_members = {
  "trial_interface::msg",  // message namespace
  "Valu",  // message name
  1,  // number of fields
  sizeof(trial_interface::msg::Valu),
  Valu_message_member_array,  // message members
  Valu_init_function,  // function to initialize message memory (memory has to be allocated)
  Valu_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Valu_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Valu_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace trial_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<trial_interface::msg::Valu>()
{
  return &::trial_interface::msg::rosidl_typesupport_introspection_cpp::Valu_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, trial_interface, msg, Valu)() {
  return &::trial_interface::msg::rosidl_typesupport_introspection_cpp::Valu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
