// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__MSG__DETAIL__VALU__FUNCTIONS_H_
#define TRIAL_INTERFACE__MSG__DETAIL__VALU__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "trial_interface/msg/rosidl_generator_c__visibility_control.h"

#include "trial_interface/msg/detail/valu__struct.h"

/// Initialize msg/Valu message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trial_interface__msg__Valu
 * )) before or use
 * trial_interface__msg__Valu__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__init(trial_interface__msg__Valu * msg);

/// Finalize msg/Valu message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
void
trial_interface__msg__Valu__fini(trial_interface__msg__Valu * msg);

/// Create msg/Valu message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trial_interface__msg__Valu__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
trial_interface__msg__Valu *
trial_interface__msg__Valu__create();

/// Destroy msg/Valu message.
/**
 * It calls
 * trial_interface__msg__Valu__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
void
trial_interface__msg__Valu__destroy(trial_interface__msg__Valu * msg);

/// Check for msg/Valu message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__are_equal(const trial_interface__msg__Valu * lhs, const trial_interface__msg__Valu * rhs);

/// Copy a msg/Valu message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__copy(
  const trial_interface__msg__Valu * input,
  trial_interface__msg__Valu * output);

/// Initialize array of msg/Valu messages.
/**
 * It allocates the memory for the number of elements and calls
 * trial_interface__msg__Valu__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__Sequence__init(trial_interface__msg__Valu__Sequence * array, size_t size);

/// Finalize array of msg/Valu messages.
/**
 * It calls
 * trial_interface__msg__Valu__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
void
trial_interface__msg__Valu__Sequence__fini(trial_interface__msg__Valu__Sequence * array);

/// Create array of msg/Valu messages.
/**
 * It allocates the memory for the array and calls
 * trial_interface__msg__Valu__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
trial_interface__msg__Valu__Sequence *
trial_interface__msg__Valu__Sequence__create(size_t size);

/// Destroy array of msg/Valu messages.
/**
 * It calls
 * trial_interface__msg__Valu__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
void
trial_interface__msg__Valu__Sequence__destroy(trial_interface__msg__Valu__Sequence * array);

/// Check for msg/Valu message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__Sequence__are_equal(const trial_interface__msg__Valu__Sequence * lhs, const trial_interface__msg__Valu__Sequence * rhs);

/// Copy an array of msg/Valu messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_trial_interface
bool
trial_interface__msg__Valu__Sequence__copy(
  const trial_interface__msg__Valu__Sequence * input,
  trial_interface__msg__Valu__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRIAL_INTERFACE__MSG__DETAIL__VALU__FUNCTIONS_H_
