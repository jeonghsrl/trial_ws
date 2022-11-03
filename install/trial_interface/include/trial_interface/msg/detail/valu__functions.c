// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice
#include "trial_interface/msg/detail/valu__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
trial_interface__msg__Valu__init(trial_interface__msg__Valu * msg)
{
  if (!msg) {
    return false;
  }
  // valu
  return true;
}

void
trial_interface__msg__Valu__fini(trial_interface__msg__Valu * msg)
{
  if (!msg) {
    return;
  }
  // valu
}

bool
trial_interface__msg__Valu__are_equal(const trial_interface__msg__Valu * lhs, const trial_interface__msg__Valu * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valu
  if (lhs->valu != rhs->valu) {
    return false;
  }
  return true;
}

bool
trial_interface__msg__Valu__copy(
  const trial_interface__msg__Valu * input,
  trial_interface__msg__Valu * output)
{
  if (!input || !output) {
    return false;
  }
  // valu
  output->valu = input->valu;
  return true;
}

trial_interface__msg__Valu *
trial_interface__msg__Valu__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__msg__Valu * msg = (trial_interface__msg__Valu *)allocator.allocate(sizeof(trial_interface__msg__Valu), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trial_interface__msg__Valu));
  bool success = trial_interface__msg__Valu__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trial_interface__msg__Valu__destroy(trial_interface__msg__Valu * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trial_interface__msg__Valu__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trial_interface__msg__Valu__Sequence__init(trial_interface__msg__Valu__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__msg__Valu * data = NULL;

  if (size) {
    data = (trial_interface__msg__Valu *)allocator.zero_allocate(size, sizeof(trial_interface__msg__Valu), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trial_interface__msg__Valu__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trial_interface__msg__Valu__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trial_interface__msg__Valu__Sequence__fini(trial_interface__msg__Valu__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trial_interface__msg__Valu__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trial_interface__msg__Valu__Sequence *
trial_interface__msg__Valu__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__msg__Valu__Sequence * array = (trial_interface__msg__Valu__Sequence *)allocator.allocate(sizeof(trial_interface__msg__Valu__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trial_interface__msg__Valu__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trial_interface__msg__Valu__Sequence__destroy(trial_interface__msg__Valu__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trial_interface__msg__Valu__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trial_interface__msg__Valu__Sequence__are_equal(const trial_interface__msg__Valu__Sequence * lhs, const trial_interface__msg__Valu__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trial_interface__msg__Valu__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trial_interface__msg__Valu__Sequence__copy(
  const trial_interface__msg__Valu__Sequence * input,
  trial_interface__msg__Valu__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trial_interface__msg__Valu);
    trial_interface__msg__Valu * data =
      (trial_interface__msg__Valu *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trial_interface__msg__Valu__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          trial_interface__msg__Valu__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trial_interface__msg__Valu__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
