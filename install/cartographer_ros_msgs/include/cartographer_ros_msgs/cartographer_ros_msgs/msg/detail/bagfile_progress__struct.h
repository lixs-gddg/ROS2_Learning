// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cartographer_ros_msgs:msg/BagfileProgress.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'current_bagfile_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/BagfileProgress in the package cartographer_ros_msgs.
/**
  * Licensed under the Apache License, Version 2.0 (the 'License');
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  *
  *      http://www.apache.org/licenses/LICENSE-2.0
  *
  * Unless required by applicable law or agreed to in writing, software
  * distributed under the License is distributed on an 'AS IS' BASIS,
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
 */
typedef struct cartographer_ros_msgs__msg__BagfileProgress
{
  /// Contains general information about the bagfiles processing progress
  rosidl_runtime_c__String current_bagfile_name;
  uint32_t current_bagfile_id;
  uint32_t total_bagfiles;
  uint32_t total_messages;
  uint32_t processed_messages;
  float total_seconds;
  float processed_seconds;
} cartographer_ros_msgs__msg__BagfileProgress;

// Struct for a sequence of cartographer_ros_msgs__msg__BagfileProgress.
typedef struct cartographer_ros_msgs__msg__BagfileProgress__Sequence
{
  cartographer_ros_msgs__msg__BagfileProgress * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cartographer_ros_msgs__msg__BagfileProgress__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_H_
