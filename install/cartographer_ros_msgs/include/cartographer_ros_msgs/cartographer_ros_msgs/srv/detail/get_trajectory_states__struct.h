// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/GetTrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetTrajectoryStates in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__GetTrajectoryStates_Request
{
  uint8_t structure_needs_at_least_one_member;
} cartographer_ros_msgs__srv__GetTrajectoryStates_Request;

// Struct for a sequence of cartographer_ros_msgs__srv__GetTrajectoryStates_Request.
typedef struct cartographer_ros_msgs__srv__GetTrajectoryStates_Request__Sequence
{
  cartographer_ros_msgs__srv__GetTrajectoryStates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__GetTrajectoryStates_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"
// Member 'trajectory_states'
#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.h"

/// Struct defined in srv/GetTrajectoryStates in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__GetTrajectoryStates_Response
{
  cartographer_ros_msgs__msg__StatusResponse status;
  cartographer_ros_msgs__msg__TrajectoryStates trajectory_states;
} cartographer_ros_msgs__srv__GetTrajectoryStates_Response;

// Struct for a sequence of cartographer_ros_msgs__srv__GetTrajectoryStates_Response.
typedef struct cartographer_ros_msgs__srv__GetTrajectoryStates_Response__Sequence
{
  cartographer_ros_msgs__srv__GetTrajectoryStates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__GetTrajectoryStates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_H_
