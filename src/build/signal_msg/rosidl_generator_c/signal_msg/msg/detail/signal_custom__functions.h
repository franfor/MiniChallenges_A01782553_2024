// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from signal_msg:msg/SignalCustom.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__FUNCTIONS_H_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "signal_msg/msg/rosidl_generator_c__visibility_control.h"

#include "signal_msg/msg/detail/signal_custom__struct.h"

/// Initialize msg/SignalCustom message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * signal_msg__msg__SignalCustom
 * )) before or use
 * signal_msg__msg__SignalCustom__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__init(signal_msg__msg__SignalCustom * msg);

/// Finalize msg/SignalCustom message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
void
signal_msg__msg__SignalCustom__fini(signal_msg__msg__SignalCustom * msg);

/// Create msg/SignalCustom message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * signal_msg__msg__SignalCustom__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
signal_msg__msg__SignalCustom *
signal_msg__msg__SignalCustom__create();

/// Destroy msg/SignalCustom message.
/**
 * It calls
 * signal_msg__msg__SignalCustom__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
void
signal_msg__msg__SignalCustom__destroy(signal_msg__msg__SignalCustom * msg);

/// Check for msg/SignalCustom message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__are_equal(const signal_msg__msg__SignalCustom * lhs, const signal_msg__msg__SignalCustom * rhs);

/// Copy a msg/SignalCustom message.
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
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__copy(
  const signal_msg__msg__SignalCustom * input,
  signal_msg__msg__SignalCustom * output);

/// Initialize array of msg/SignalCustom messages.
/**
 * It allocates the memory for the number of elements and calls
 * signal_msg__msg__SignalCustom__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__Sequence__init(signal_msg__msg__SignalCustom__Sequence * array, size_t size);

/// Finalize array of msg/SignalCustom messages.
/**
 * It calls
 * signal_msg__msg__SignalCustom__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
void
signal_msg__msg__SignalCustom__Sequence__fini(signal_msg__msg__SignalCustom__Sequence * array);

/// Create array of msg/SignalCustom messages.
/**
 * It allocates the memory for the array and calls
 * signal_msg__msg__SignalCustom__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
signal_msg__msg__SignalCustom__Sequence *
signal_msg__msg__SignalCustom__Sequence__create(size_t size);

/// Destroy array of msg/SignalCustom messages.
/**
 * It calls
 * signal_msg__msg__SignalCustom__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
void
signal_msg__msg__SignalCustom__Sequence__destroy(signal_msg__msg__SignalCustom__Sequence * array);

/// Check for msg/SignalCustom message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__Sequence__are_equal(const signal_msg__msg__SignalCustom__Sequence * lhs, const signal_msg__msg__SignalCustom__Sequence * rhs);

/// Copy an array of msg/SignalCustom messages.
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
ROSIDL_GENERATOR_C_PUBLIC_signal_msg
bool
signal_msg__msg__SignalCustom__Sequence__copy(
  const signal_msg__msg__SignalCustom__Sequence * input,
  signal_msg__msg__SignalCustom__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__FUNCTIONS_H_
