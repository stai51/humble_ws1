// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from isaac_ros2_messages:srv/GetPrimAttributes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__rosidl_typesupport_introspection_c.h"
#include "isaac_ros2_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
#include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.h"


// Include directives for member types
// Member `path`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isaac_ros2_messages__srv__GetPrimAttributes_Request__init(message_memory);
}

void isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_fini_function(void * message_memory)
{
  isaac_ros2_messages__srv__GetPrimAttributes_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_member_array[1] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Request, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_members = {
  "isaac_ros2_messages__srv",  // message namespace
  "GetPrimAttributes_Request",  // message name
  1,  // number of fields
  sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Request),
  isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_member_array,  // message members
  isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_type_support_handle = {
  0,
  &isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isaac_ros2_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Request)() {
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_type_support_handle.typesupport_identifier) {
    isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isaac_ros2_messages__srv__GetPrimAttributes_Request__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "isaac_ros2_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__functions.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__struct.h"


// Include directives for member types
// Member `names`
// Member `displays`
// Member `types`
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  isaac_ros2_messages__srv__GetPrimAttributes_Response__init(message_memory);
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_fini_function(void * message_memory)
{
  isaac_ros2_messages__srv__GetPrimAttributes_Response__fini(message_memory);
}

size_t isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__displays(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__displays(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__displays(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__displays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__displays(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__displays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__displays(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__displays(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_member_array[5] = {
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Response, names),  // bytes offset in struct
    NULL,  // default value
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__names,  // size() function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__names,  // get_const(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__names,  // get(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__names,  // fetch(index, &value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__names,  // assign(index, value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__names  // resize(index) function pointer
  },
  {
    "displays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Response, displays),  // bytes offset in struct
    NULL,  // default value
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__displays,  // size() function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__displays,  // get_const(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__displays,  // get(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__displays,  // fetch(index, &value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__displays,  // assign(index, value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__displays  // resize(index) function pointer
  },
  {
    "types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Response, types),  // bytes offset in struct
    NULL,  // default value
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__size_function__GetPrimAttributes_Response__types,  // size() function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_const_function__GetPrimAttributes_Response__types,  // get_const(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__get_function__GetPrimAttributes_Response__types,  // get(index) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__fetch_function__GetPrimAttributes_Response__types,  // fetch(index, &value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__assign_function__GetPrimAttributes_Response__types,  // assign(index, value) function pointer
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__resize_function__GetPrimAttributes_Response__types  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(isaac_ros2_messages__srv__GetPrimAttributes_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_members = {
  "isaac_ros2_messages__srv",  // message namespace
  "GetPrimAttributes_Response",  // message name
  5,  // number of fields
  sizeof(isaac_ros2_messages__srv__GetPrimAttributes_Response),
  isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_member_array,  // message members
  isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_type_support_handle = {
  0,
  &isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isaac_ros2_messages
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Response)() {
  if (!isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_type_support_handle.typesupport_identifier) {
    isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &isaac_ros2_messages__srv__GetPrimAttributes_Response__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "isaac_ros2_messages/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "isaac_ros2_messages/srv/detail/get_prim_attributes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_members = {
  "isaac_ros2_messages__srv",  // service namespace
  "GetPrimAttributes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_Request_message_type_support_handle,
  NULL  // response message
  // isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_Response_message_type_support_handle
};

static rosidl_service_type_support_t isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_type_support_handle = {
  0,
  &isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_isaac_ros2_messages
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes)() {
  if (!isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_type_support_handle.typesupport_identifier) {
    isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, isaac_ros2_messages, srv, GetPrimAttributes_Response)()->data;
  }

  return &isaac_ros2_messages__srv__detail__get_prim_attributes__rosidl_typesupport_introspection_c__GetPrimAttributes_service_type_support_handle;
}
