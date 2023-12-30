// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__FUNCTIONS_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"

/// Initialize msg/StatusResponse message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartographer_ros_msgs__msg__StatusResponse
 * )) before or use
 * cartographer_ros_msgs__msg__StatusResponse__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusResponse__init(cartographer_ros_msgs__msg__StatusResponse * msg);

/// Finalize msg/StatusResponse message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusResponse__fini(cartographer_ros_msgs__msg__StatusResponse * msg);

/// Create msg/StatusResponse message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartographer_ros_msgs__msg__StatusResponse__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__StatusResponse *
cartographer_ros_msgs__msg__StatusResponse__create();

/// Destroy msg/StatusResponse message.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusResponse__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusResponse__destroy(cartographer_ros_msgs__msg__StatusResponse * msg);

/// Check for msg/StatusResponse message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusResponse__are_equal(const cartographer_ros_msgs__msg__StatusResponse * lhs, const cartographer_ros_msgs__msg__StatusResponse * rhs);

/// Copy a msg/StatusResponse message.
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
cartographer_ros_msgs__msg__StatusResponse__copy(
  const cartographer_ros_msgs__msg__StatusResponse * input,
  cartographer_ros_msgs__msg__StatusResponse * output);

/// Initialize array of msg/StatusResponse messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartographer_ros_msgs__msg__StatusResponse__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__init(cartographer_ros_msgs__msg__StatusResponse__Sequence * array, size_t size);

/// Finalize array of msg/StatusResponse messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusResponse__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusResponse__Sequence__fini(cartographer_ros_msgs__msg__StatusResponse__Sequence * array);

/// Create array of msg/StatusResponse messages.
/**
 * It allocates the memory for the array and calls
 * cartographer_ros_msgs__msg__StatusResponse__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__StatusResponse__Sequence *
cartographer_ros_msgs__msg__StatusResponse__Sequence__create(size_t size);

/// Destroy array of msg/StatusResponse messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusResponse__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusResponse__Sequence__destroy(cartographer_ros_msgs__msg__StatusResponse__Sequence * array);

/// Check for msg/StatusResponse message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__are_equal(const cartographer_ros_msgs__msg__StatusResponse__Sequence * lhs, const cartographer_ros_msgs__msg__StatusResponse__Sequence * rhs);

/// Copy an array of msg/StatusResponse messages.
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
cartographer_ros_msgs__msg__StatusResponse__Sequence__copy(
  const cartographer_ros_msgs__msg__StatusResponse__Sequence * input,
  cartographer_ros_msgs__msg__StatusResponse__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__FUNCTIONS_H_
