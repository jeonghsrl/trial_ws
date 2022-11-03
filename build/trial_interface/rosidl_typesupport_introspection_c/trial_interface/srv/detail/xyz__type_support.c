// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "trial_interface/srv/detail/xyz__rosidl_typesupport_introspection_c.h"
#include "trial_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "trial_interface/srv/detail/xyz__functions.h"
#include "trial_interface/srv/detail/xyz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trial_interface__srv__XYZ_Request__init(message_memory);
}

void XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_fini_function(void * message_memory)
{
  trial_interface__srv__XYZ_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface__srv__XYZ_Request, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface__srv__XYZ_Request, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface__srv__XYZ_Request, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_members = {
  "trial_interface__srv",  // message namespace
  "XYZ_Request",  // message name
  3,  // number of fields
  sizeof(trial_interface__srv__XYZ_Request),
  XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_member_array,  // message members
  XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_type_support_handle = {
  0,
  &XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trial_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Request)() {
  if (!XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_type_support_handle.typesupport_identifier) {
    XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &XYZ_Request__rosidl_typesupport_introspection_c__XYZ_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "trial_interface/srv/detail/xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "trial_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "trial_interface/srv/detail/xyz__functions.h"
// already included above
// #include "trial_interface/srv/detail/xyz__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  trial_interface__srv__XYZ_Response__init(message_memory);
}

void XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_fini_function(void * message_memory)
{
  trial_interface__srv__XYZ_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_member_array[1] = {
  {
    "sqsum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(trial_interface__srv__XYZ_Response, sqsum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_members = {
  "trial_interface__srv",  // message namespace
  "XYZ_Response",  // message name
  1,  // number of fields
  sizeof(trial_interface__srv__XYZ_Response),
  XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_member_array,  // message members
  XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_type_support_handle = {
  0,
  &XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trial_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Response)() {
  if (!XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_type_support_handle.typesupport_identifier) {
    XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &XYZ_Response__rosidl_typesupport_introspection_c__XYZ_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "trial_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "trial_interface/srv/detail/xyz__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_members = {
  "trial_interface__srv",  // service namespace
  "XYZ",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_Request_message_type_support_handle,
  NULL  // response message
  // trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_Response_message_type_support_handle
};

static rosidl_service_type_support_t trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_type_support_handle = {
  0,
  &trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_trial_interface
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ)() {
  if (!trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_type_support_handle.typesupport_identifier) {
    trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, trial_interface, srv, XYZ_Response)()->data;
  }

  return &trial_interface__srv__detail__xyz__rosidl_typesupport_introspection_c__XYZ_service_type_support_handle;
}
