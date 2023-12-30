// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/ReadMetrics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/read_metrics__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/read_metrics__functions.h"
#include "cartographer_ros_msgs/srv/detail/read_metrics__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__ReadMetrics_Request__init(message_memory);
}

void cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__ReadMetrics_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__ReadMetrics_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "ReadMetrics_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__ReadMetrics_Request),
  cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_member_array,  // message members
  cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Request)() {
  if (!cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__ReadMetrics_Request__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/read_metrics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/read_metrics__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/read_metrics__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"
// Member `metric_families`
#include "cartographer_ros_msgs/msg/metric_family.h"
// Member `metric_families`
#include "cartographer_ros_msgs/msg/detail/metric_family__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__ReadMetrics_Response__init(message_memory);
}

void cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__ReadMetrics_Response__fini(message_memory);
}

size_t cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__size_function__ReadMetrics_Response__metric_families(
  const void * untyped_member)
{
  const cartographer_ros_msgs__msg__MetricFamily__Sequence * member =
    (const cartographer_ros_msgs__msg__MetricFamily__Sequence *)(untyped_member);
  return member->size;
}

const void * cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMetrics_Response__metric_families(
  const void * untyped_member, size_t index)
{
  const cartographer_ros_msgs__msg__MetricFamily__Sequence * member =
    (const cartographer_ros_msgs__msg__MetricFamily__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_function__ReadMetrics_Response__metric_families(
  void * untyped_member, size_t index)
{
  cartographer_ros_msgs__msg__MetricFamily__Sequence * member =
    (cartographer_ros_msgs__msg__MetricFamily__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMetrics_Response__metric_families(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const cartographer_ros_msgs__msg__MetricFamily * item =
    ((const cartographer_ros_msgs__msg__MetricFamily *)
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMetrics_Response__metric_families(untyped_member, index));
  cartographer_ros_msgs__msg__MetricFamily * value =
    (cartographer_ros_msgs__msg__MetricFamily *)(untyped_value);
  *value = *item;
}

void cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__assign_function__ReadMetrics_Response__metric_families(
  void * untyped_member, size_t index, const void * untyped_value)
{
  cartographer_ros_msgs__msg__MetricFamily * item =
    ((cartographer_ros_msgs__msg__MetricFamily *)
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_function__ReadMetrics_Response__metric_families(untyped_member, index));
  const cartographer_ros_msgs__msg__MetricFamily * value =
    (const cartographer_ros_msgs__msg__MetricFamily *)(untyped_value);
  *item = *value;
}

bool cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__resize_function__ReadMetrics_Response__metric_families(
  void * untyped_member, size_t size)
{
  cartographer_ros_msgs__msg__MetricFamily__Sequence * member =
    (cartographer_ros_msgs__msg__MetricFamily__Sequence *)(untyped_member);
  cartographer_ros_msgs__msg__MetricFamily__Sequence__fini(member);
  return cartographer_ros_msgs__msg__MetricFamily__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_member_array[3] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__ReadMetrics_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "metric_families",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__ReadMetrics_Response, metric_families),  // bytes offset in struct
    NULL,  // default value
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__size_function__ReadMetrics_Response__metric_families,  // size() function pointer
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_const_function__ReadMetrics_Response__metric_families,  // get_const(index) function pointer
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__get_function__ReadMetrics_Response__metric_families,  // get(index) function pointer
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__fetch_function__ReadMetrics_Response__metric_families,  // fetch(index, &value) function pointer
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__assign_function__ReadMetrics_Response__metric_families,  // assign(index, value) function pointer
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__resize_function__ReadMetrics_Response__metric_families  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__ReadMetrics_Response, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "ReadMetrics_Response",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs__srv__ReadMetrics_Response),
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_member_array,  // message members
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Response)() {
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, MetricFamily)();
  cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__ReadMetrics_Response__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/read_metrics__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "ReadMetrics",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics)() {
  if (!cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, ReadMetrics_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__read_metrics__rosidl_typesupport_introspection_c__ReadMetrics_service_type_support_handle;
}
