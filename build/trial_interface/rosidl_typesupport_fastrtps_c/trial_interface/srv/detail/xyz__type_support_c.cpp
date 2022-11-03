// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice
#include "trial_interface/srv/detail/xyz__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "trial_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "trial_interface/srv/detail/xyz__struct.h"
#include "trial_interface/srv/detail/xyz__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _XYZ_Request__ros_msg_type = trial_interface__srv__XYZ_Request;

static bool _XYZ_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _XYZ_Request__ros_msg_type * ros_message = static_cast<const _XYZ_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  return true;
}

static bool _XYZ_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _XYZ_Request__ros_msg_type * ros_message = static_cast<_XYZ_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trial_interface
size_t get_serialized_size_trial_interface__srv__XYZ_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _XYZ_Request__ros_msg_type * ros_message = static_cast<const _XYZ_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _XYZ_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_trial_interface__srv__XYZ_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trial_interface
size_t max_serialized_size_trial_interface__srv__XYZ_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _XYZ_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_trial_interface__srv__XYZ_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_XYZ_Request = {
  "trial_interface::srv",
  "XYZ_Request",
  _XYZ_Request__cdr_serialize,
  _XYZ_Request__cdr_deserialize,
  _XYZ_Request__get_serialized_size,
  _XYZ_Request__max_serialized_size
};

static rosidl_message_type_support_t _XYZ_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_XYZ_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trial_interface, srv, XYZ_Request)() {
  return &_XYZ_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "trial_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "trial_interface/srv/detail/xyz__struct.h"
// already included above
// #include "trial_interface/srv/detail/xyz__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _XYZ_Response__ros_msg_type = trial_interface__srv__XYZ_Response;

static bool _XYZ_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _XYZ_Response__ros_msg_type * ros_message = static_cast<const _XYZ_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sqsum
  {
    cdr << ros_message->sqsum;
  }

  return true;
}

static bool _XYZ_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _XYZ_Response__ros_msg_type * ros_message = static_cast<_XYZ_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: sqsum
  {
    cdr >> ros_message->sqsum;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trial_interface
size_t get_serialized_size_trial_interface__srv__XYZ_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _XYZ_Response__ros_msg_type * ros_message = static_cast<const _XYZ_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name sqsum
  {
    size_t item_size = sizeof(ros_message->sqsum);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _XYZ_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_trial_interface__srv__XYZ_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trial_interface
size_t max_serialized_size_trial_interface__srv__XYZ_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: sqsum
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _XYZ_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_trial_interface__srv__XYZ_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_XYZ_Response = {
  "trial_interface::srv",
  "XYZ_Response",
  _XYZ_Response__cdr_serialize,
  _XYZ_Response__cdr_deserialize,
  _XYZ_Response__get_serialized_size,
  _XYZ_Response__max_serialized_size
};

static rosidl_message_type_support_t _XYZ_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_XYZ_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trial_interface, srv, XYZ_Response)() {
  return &_XYZ_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "trial_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "trial_interface/srv/xyz.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t XYZ__callbacks = {
  "trial_interface::srv",
  "XYZ",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trial_interface, srv, XYZ_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trial_interface, srv, XYZ_Response)(),
};

static rosidl_service_type_support_t XYZ__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &XYZ__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trial_interface, srv, XYZ)() {
  return &XYZ__handle;
}

#if defined(__cplusplus)
}
#endif
