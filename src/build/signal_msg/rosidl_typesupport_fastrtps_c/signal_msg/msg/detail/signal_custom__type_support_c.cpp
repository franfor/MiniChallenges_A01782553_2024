// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from signal_msg:msg/SignalCustom.idl
// generated code does not contain a copyright notice
#include "signal_msg/msg/detail/signal_custom__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "signal_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "signal_msg/msg/detail/signal_custom__struct.h"
#include "signal_msg/msg/detail/signal_custom__functions.h"
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


using _SignalCustom__ros_msg_type = signal_msg__msg__SignalCustom;

static bool _SignalCustom__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SignalCustom__ros_msg_type * ros_message = static_cast<const _SignalCustom__ros_msg_type *>(untyped_ros_message);
  // Field name: signaltype
  {
    cdr << ros_message->signaltype;
  }

  // Field name: amplitude
  {
    cdr << ros_message->amplitude;
  }

  // Field name: frequency
  {
    cdr << ros_message->frequency;
  }

  // Field name: offset
  {
    cdr << ros_message->offset;
  }

  // Field name: phase
  {
    cdr << ros_message->phase;
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  return true;
}

static bool _SignalCustom__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SignalCustom__ros_msg_type * ros_message = static_cast<_SignalCustom__ros_msg_type *>(untyped_ros_message);
  // Field name: signaltype
  {
    cdr >> ros_message->signaltype;
  }

  // Field name: amplitude
  {
    cdr >> ros_message->amplitude;
  }

  // Field name: frequency
  {
    cdr >> ros_message->frequency;
  }

  // Field name: offset
  {
    cdr >> ros_message->offset;
  }

  // Field name: phase
  {
    cdr >> ros_message->phase;
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_signal_msg
size_t get_serialized_size_signal_msg__msg__SignalCustom(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SignalCustom__ros_msg_type * ros_message = static_cast<const _SignalCustom__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name signaltype
  {
    size_t item_size = sizeof(ros_message->signaltype);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name amplitude
  {
    size_t item_size = sizeof(ros_message->amplitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frequency
  {
    size_t item_size = sizeof(ros_message->frequency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offset
  {
    size_t item_size = sizeof(ros_message->offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name phase
  {
    size_t item_size = sizeof(ros_message->phase);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SignalCustom__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_signal_msg__msg__SignalCustom(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_signal_msg
size_t max_serialized_size_signal_msg__msg__SignalCustom(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: signaltype
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: amplitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: frequency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: phase
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = signal_msg__msg__SignalCustom;
    is_plain =
      (
      offsetof(DataType, time) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SignalCustom__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_signal_msg__msg__SignalCustom(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SignalCustom = {
  "signal_msg::msg",
  "SignalCustom",
  _SignalCustom__cdr_serialize,
  _SignalCustom__cdr_deserialize,
  _SignalCustom__get_serialized_size,
  _SignalCustom__max_serialized_size
};

static rosidl_message_type_support_t _SignalCustom__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SignalCustom,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, signal_msg, msg, SignalCustom)() {
  return &_SignalCustom__type_support;
}

#if defined(__cplusplus)
}
#endif
