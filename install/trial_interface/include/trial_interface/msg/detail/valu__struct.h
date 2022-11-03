// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_H_
#define TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Valu in the package trial_interface.
typedef struct trial_interface__msg__Valu
{
  double valu;
} trial_interface__msg__Valu;

// Struct for a sequence of trial_interface__msg__Valu.
typedef struct trial_interface__msg__Valu__Sequence
{
  trial_interface__msg__Valu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trial_interface__msg__Valu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_H_
