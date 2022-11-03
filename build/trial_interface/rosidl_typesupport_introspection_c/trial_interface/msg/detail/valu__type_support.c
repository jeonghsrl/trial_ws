// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trial_interface/msg/detail/valu__rosidl_typesupport_introspection_c.h"
#include "trial_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trial_interface/msg/detail/valu__functions.h"
#include "trial_interface/msg/detail/valu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Valu__rosidl_typesupport_introspection_c__Valu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trial_interface__msg__Valu__init(message_memory);
}

void Valu__rosidl_typesupport_introspection_c__Valu_fini_function(void * message_memory)
{
  trial_interface__msg__Valu__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Valu__rosidl_typesupport_introspection_c__Valu_message_member_array[1] = {
  {
    "valu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface__msg__Valu, valu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Valu__rosidl_typesupport_introspection_c__Valu_message_members = {
  "trial_interface__msg",  // message namespace
  "Valu",  // message name
  1,  // number of fields
  sizeof(trial_interface__msg__Valu),
  Valu__rosidl_typesupport_introspection_c__Valu_message_member_array,  // message members
  Valu__rosidl_typesupport_introspection_c__Valu_init_function,  // function to initialize message memory (memory has to be allocated)
  Valu__rosidl_typesupport_introspection_c__Valu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Valu__rosidl_typesupport_introspection_c__Valu_message_type_support_handle = {
  0,
  &Valu__rosidl_typesupport_introspection_c__Valu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trial_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, msg, Valu)() {
  if (!Valu__rosidl_typesupport_introspection_c__Valu_message_type_support_handle.typesupport_identifier) {
    Valu__rosidl_typesupport_introspection_c__Valu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Valu__rosidl_typesupport_introspection_c__Valu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
