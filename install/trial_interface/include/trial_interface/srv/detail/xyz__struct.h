// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_H_
#define TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/XYZ in the package trial_interface.
typedef struct trial_interface__srv__XYZ_Request
{
  int64_t x;
  int64_t y;
  int64_t z;
} trial_interface__srv__XYZ_Request;

// Struct for a sequence of trial_interface__srv__XYZ_Request.
typedef struct trial_interface__srv__XYZ_Request__Sequence
{
  trial_interface__srv__XYZ_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trial_interface__srv__XYZ_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/XYZ in the package trial_interface.
typedef struct trial_interface__srv__XYZ_Response
{
  int64_t sqsum;
} trial_interface__srv__XYZ_Response;

// Struct for a sequence of trial_interface__srv__XYZ_Response.
typedef struct trial_interface__srv__XYZ_Response__Sequence
{
  trial_interface__srv__XYZ_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trial_interface__srv__XYZ_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_H_
