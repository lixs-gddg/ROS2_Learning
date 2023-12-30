// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:srv/TrajectoryQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/TrajectoryQuery in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__TrajectoryQuery_Request
{
  int32_t trajectory_id;
} cartographer_ros_msgs__srv__TrajectoryQuery_Request;

// Struct for a sequence of cartographer_ros_msgs__srv__TrajectoryQuery_Request.
typedef struct cartographer_ros_msgs__srv__TrajectoryQuery_Request__Sequence
{
  cartographer_ros_msgs__srv__TrajectoryQuery_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__TrajectoryQuery_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.h"
// Member 'trajectory'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/TrajectoryQuery in the package cartographer_ros_msgs.
typedef struct cartographer_ros_msgs__srv__TrajectoryQuery_Response
{
  cartographer_ros_msgs__msg__StatusResponse status;
  geometry_msgs__msg__PoseStamped__Sequence trajectory;
} cartographer_ros_msgs__srv__TrajectoryQuery_Response;

// Struct for a sequence of cartographer_ros_msgs__srv__TrajectoryQuery_Response.
typedef struct cartographer_ros_msgs__srv__TrajectoryQuery_Response__Sequence
{
  cartographer_ros_msgs__srv__TrajectoryQuery_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__srv__TrajectoryQuery_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__TRAJECTORY_QUERY__STRUCT_H_
