// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/trajectory_states__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_states__functions.h"
#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `trajectory_id`
// Member `trajectory_state`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__TrajectoryStates__init(message_memory);
}

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__TrajectoryStates__fini(message_memory);
}

size_t cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__size_function__TrajectoryStates__trajectory_id(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_id(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_id(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__fetch_function__TrajectoryStates__trajectory_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_id(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__assign_function__TrajectoryStates__trajectory_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_id(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__resize_function__TrajectoryStates__trajectory_id(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__size_function__TrajectoryStates__trajectory_state(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_state(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_state(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__fetch_function__TrajectoryStates__trajectory_state(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_state(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__assign_function__TrajectoryStates__trajectory_state(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_state(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__resize_function__TrajectoryStates__trajectory_state(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__size_function__TrajectoryStates__trajectory_id,  // size() function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_id,  // get_const(index) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_id,  // get(index) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__fetch_function__TrajectoryStates__trajectory_id,  // fetch(index, &value) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__assign_function__TrajectoryStates__trajectory_id,  // assign(index, value) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__resize_function__TrajectoryStates__trajectory_id  // resize(index) function pointer
  },
  {
    "trajectory_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__TrajectoryStates, trajectory_state),  // bytes offset in struct
    NULL,  // default value
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__size_function__TrajectoryStates__trajectory_state,  // size() function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_const_function__TrajectoryStates__trajectory_state,  // get_const(index) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__get_function__TrajectoryStates__trajectory_state,  // get(index) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__fetch_function__TrajectoryStates__trajectory_state,  // fetch(index, &value) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__assign_function__TrajectoryStates__trajectory_state,  // assign(index, value) function pointer
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__resize_function__TrajectoryStates__trajectory_state  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "TrajectoryStates",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs__msg__TrajectoryStates),
  cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array,  // message members
  cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, TrajectoryStates)() {
  cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__msg__TrajectoryStates__rosidl_typesupport_introspection_c__TrajectoryStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
