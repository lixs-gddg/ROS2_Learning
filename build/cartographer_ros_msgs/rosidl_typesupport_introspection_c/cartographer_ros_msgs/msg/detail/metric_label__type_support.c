// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/MetricLabel.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/metric_label__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/metric_label__functions.h"
#include "cartographer_ros_msgs/msg/detail/metric_label__struct.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__MetricLabel__init(message_memory);
}

void cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__MetricLabel__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__MetricLabel, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__MetricLabel, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "MetricLabel",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__msg__MetricLabel),
  cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_member_array,  // message members
  cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, MetricLabel)() {
  if (!cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__msg__MetricLabel__rosidl_typesupport_introspection_c__MetricLabel_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
