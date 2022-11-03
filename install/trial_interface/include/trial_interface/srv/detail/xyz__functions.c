// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice
#include "trial_interface/srv/detail/xyz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
trial_interface__srv__XYZ_Request__init(trial_interface__srv__XYZ_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
trial_interface__srv__XYZ_Request__fini(trial_interface__srv__XYZ_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
trial_interface__srv__XYZ_Request__are_equal(const trial_interface__srv__XYZ_Request * lhs, const trial_interface__srv__XYZ_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
trial_interface__srv__XYZ_Request__copy(
  const trial_interface__srv__XYZ_Request * input,
  trial_interface__srv__XYZ_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

trial_interface__srv__XYZ_Request *
trial_interface__srv__XYZ_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Request * msg = (trial_interface__srv__XYZ_Request *)allocator.allocate(sizeof(trial_interface__srv__XYZ_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trial_interface__srv__XYZ_Request));
  bool success = trial_interface__srv__XYZ_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trial_interface__srv__XYZ_Request__destroy(trial_interface__srv__XYZ_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trial_interface__srv__XYZ_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trial_interface__srv__XYZ_Request__Sequence__init(trial_interface__srv__XYZ_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Request * data = NULL;

  if (size) {
    data = (trial_interface__srv__XYZ_Request *)allocator.zero_allocate(size, sizeof(trial_interface__srv__XYZ_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trial_interface__srv__XYZ_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trial_interface__srv__XYZ_Request__fini(&data[i - 1]);
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
trial_interface__srv__XYZ_Request__Sequence__fini(trial_interface__srv__XYZ_Request__Sequence * array)
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
      trial_interface__srv__XYZ_Request__fini(&array->data[i]);
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

trial_interface__srv__XYZ_Request__Sequence *
trial_interface__srv__XYZ_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Request__Sequence * array = (trial_interface__srv__XYZ_Request__Sequence *)allocator.allocate(sizeof(trial_interface__srv__XYZ_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trial_interface__srv__XYZ_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trial_interface__srv__XYZ_Request__Sequence__destroy(trial_interface__srv__XYZ_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trial_interface__srv__XYZ_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trial_interface__srv__XYZ_Request__Sequence__are_equal(const trial_interface__srv__XYZ_Request__Sequence * lhs, const trial_interface__srv__XYZ_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trial_interface__srv__XYZ_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trial_interface__srv__XYZ_Request__Sequence__copy(
  const trial_interface__srv__XYZ_Request__Sequence * input,
  trial_interface__srv__XYZ_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trial_interface__srv__XYZ_Request);
    trial_interface__srv__XYZ_Request * data =
      (trial_interface__srv__XYZ_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trial_interface__srv__XYZ_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          trial_interface__srv__XYZ_Request__fini(&data[i]);
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
    if (!trial_interface__srv__XYZ_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
trial_interface__srv__XYZ_Response__init(trial_interface__srv__XYZ_Response * msg)
{
  if (!msg) {
    return false;
  }
  // sqsum
  return true;
}

void
trial_interface__srv__XYZ_Response__fini(trial_interface__srv__XYZ_Response * msg)
{
  if (!msg) {
    return;
  }
  // sqsum
}

bool
trial_interface__srv__XYZ_Response__are_equal(const trial_interface__srv__XYZ_Response * lhs, const trial_interface__srv__XYZ_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sqsum
  if (lhs->sqsum != rhs->sqsum) {
    return false;
  }
  return true;
}

bool
trial_interface__srv__XYZ_Response__copy(
  const trial_interface__srv__XYZ_Response * input,
  trial_interface__srv__XYZ_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // sqsum
  output->sqsum = input->sqsum;
  return true;
}

trial_interface__srv__XYZ_Response *
trial_interface__srv__XYZ_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Response * msg = (trial_interface__srv__XYZ_Response *)allocator.allocate(sizeof(trial_interface__srv__XYZ_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trial_interface__srv__XYZ_Response));
  bool success = trial_interface__srv__XYZ_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trial_interface__srv__XYZ_Response__destroy(trial_interface__srv__XYZ_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trial_interface__srv__XYZ_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trial_interface__srv__XYZ_Response__Sequence__init(trial_interface__srv__XYZ_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Response * data = NULL;

  if (size) {
    data = (trial_interface__srv__XYZ_Response *)allocator.zero_allocate(size, sizeof(trial_interface__srv__XYZ_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trial_interface__srv__XYZ_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trial_interface__srv__XYZ_Response__fini(&data[i - 1]);
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
trial_interface__srv__XYZ_Response__Sequence__fini(trial_interface__srv__XYZ_Response__Sequence * array)
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
      trial_interface__srv__XYZ_Response__fini(&array->data[i]);
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

trial_interface__srv__XYZ_Response__Sequence *
trial_interface__srv__XYZ_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trial_interface__srv__XYZ_Response__Sequence * array = (trial_interface__srv__XYZ_Response__Sequence *)allocator.allocate(sizeof(trial_interface__srv__XYZ_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trial_interface__srv__XYZ_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trial_interface__srv__XYZ_Response__Sequence__destroy(trial_interface__srv__XYZ_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trial_interface__srv__XYZ_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trial_interface__srv__XYZ_Response__Sequence__are_equal(const trial_interface__srv__XYZ_Response__Sequence * lhs, const trial_interface__srv__XYZ_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trial_interface__srv__XYZ_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trial_interface__srv__XYZ_Response__Sequence__copy(
  const trial_interface__srv__XYZ_Response__Sequence * input,
  trial_interface__srv__XYZ_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trial_interface__srv__XYZ_Response);
    trial_interface__srv__XYZ_Response * data =
      (trial_interface__srv__XYZ_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trial_interface__srv__XYZ_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          trial_interface__srv__XYZ_Response__fini(&data[i]);
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
    if (!trial_interface__srv__XYZ_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
