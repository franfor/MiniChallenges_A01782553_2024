// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_msg:msg/SignalCustom.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__STRUCT_H_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SignalCustom in the package signal_msg.
typedef struct signal_msg__msg__SignalCustom
{
  int32_t signaltype;
  float amplitude;
  float frequency;
  float offset;
  float phase;
  float time;
} signal_msg__msg__SignalCustom;

// Struct for a sequence of signal_msg__msg__SignalCustom.
typedef struct signal_msg__msg__SignalCustom__Sequence
{
  signal_msg__msg__SignalCustom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_msg__msg__SignalCustom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__STRUCT_H_
