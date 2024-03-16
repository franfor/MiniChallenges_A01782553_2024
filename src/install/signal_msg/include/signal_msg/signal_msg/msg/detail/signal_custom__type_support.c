// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from signal_msg:msg/SignalCustom.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "signal_msg/msg/detail/signal_custom__rosidl_typesupport_introspection_c.h"
#include "signal_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "signal_msg/msg/detail/signal_custom__functions.h"
#include "signal_msg/msg/detail/signal_custom__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  signal_msg__msg__SignalCustom__init(message_memory);
}

void signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_fini_function(void * message_memory)
{
  signal_msg__msg__SignalCustom__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_member_array[6] = {
  {
    "signaltype",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, signaltype),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "amplitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, amplitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "phase",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, phase),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_msg__msg__SignalCustom, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_members = {
  "signal_msg__msg",  // message namespace
  "SignalCustom",  // message name
  6,  // number of fields
  sizeof(signal_msg__msg__SignalCustom),
  signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_member_array,  // message members
  signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_init_function,  // function to initialize message memory (memory has to be allocated)
  signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_type_support_handle = {
  0,
  &signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_signal_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_msg, msg, SignalCustom)() {
  if (!signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_type_support_handle.typesupport_identifier) {
    signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &signal_msg__msg__SignalCustom__rosidl_typesupport_introspection_c__SignalCustom_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
