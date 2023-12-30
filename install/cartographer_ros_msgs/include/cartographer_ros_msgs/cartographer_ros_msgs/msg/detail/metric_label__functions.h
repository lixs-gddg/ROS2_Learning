// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cartographer_ros_msgs:msg/MetricLabel.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__FUNCTIONS_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartographer_ros_msgs/msg/detail/metric_label__struct.h"

/// Initialize msg/MetricLabel message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartographer_ros_msgs__msg__MetricLabel
 * )) before or use
 * cartographer_ros_msgs__msg__MetricLabel__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__init(cartographer_ros_msgs__msg__MetricLabel * msg);

/// Finalize msg/MetricLabel message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__MetricLabel__fini(cartographer_ros_msgs__msg__MetricLabel * msg);

/// Create msg/MetricLabel message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartographer_ros_msgs__msg__MetricLabel__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__MetricLabel *
cartographer_ros_msgs__msg__MetricLabel__create();

/// Destroy msg/MetricLabel message.
/**
 * It calls
 * cartographer_ros_msgs__msg__MetricLabel__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__MetricLabel__destroy(cartographer_ros_msgs__msg__MetricLabel * msg);

/// Check for msg/MetricLabel message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__are_equal(const cartographer_ros_msgs__msg__MetricLabel * lhs, const cartographer_ros_msgs__msg__MetricLabel * rhs);

/// Copy a msg/MetricLabel message.
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
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__copy(
  const cartographer_ros_msgs__msg__MetricLabel * input,
  cartographer_ros_msgs__msg__MetricLabel * output);

/// Initialize array of msg/MetricLabel messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartographer_ros_msgs__msg__MetricLabel__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__init(cartographer_ros_msgs__msg__MetricLabel__Sequence * array, size_t size);

/// Finalize array of msg/MetricLabel messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__MetricLabel__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__MetricLabel__Sequence__fini(cartographer_ros_msgs__msg__MetricLabel__Sequence * array);

/// Create array of msg/MetricLabel messages.
/**
 * It allocates the memory for the array and calls
 * cartographer_ros_msgs__msg__MetricLabel__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__MetricLabel__Sequence *
cartographer_ros_msgs__msg__MetricLabel__Sequence__create(size_t size);

/// Destroy array of msg/MetricLabel messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__MetricLabel__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__MetricLabel__Sequence__destroy(cartographer_ros_msgs__msg__MetricLabel__Sequence * array);

/// Check for msg/MetricLabel message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__are_equal(const cartographer_ros_msgs__msg__MetricLabel__Sequence * lhs, const cartographer_ros_msgs__msg__MetricLabel__Sequence * rhs);

/// Copy an array of msg/MetricLabel messages.
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
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__MetricLabel__Sequence__copy(
  const cartographer_ros_msgs__msg__MetricLabel__Sequence * input,
  cartographer_ros_msgs__msg__MetricLabel__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__FUNCTIONS_H_
