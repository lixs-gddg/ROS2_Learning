// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:srv/TrajectoryQuery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/srv/detail/trajectory_query__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/srv/detail/trajectory_query__functions.h"
#include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__TrajectoryQuery_Request__init(message_memory);
}

void cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__TrajectoryQuery_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_member_array[1] = {
  {
    "trajectory_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__TrajectoryQuery_Request, trajectory_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "TrajectoryQuery_Request",  // message name
  1,  // number of fields
  sizeof(cartographer_ros_msgs__srv__TrajectoryQuery_Request),
  cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_member_array,  // message members
  cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Request)() {
  if (!cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__TrajectoryQuery_Request__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__functions.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__struct.h"


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/status_response.h"
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__rosidl_typesupport_introspection_c.h"
// Member `trajectory`
#include "geometry_msgs/msg/pose_stamped.h"
// Member `trajectory`
#include "geometry_msgs/msg/detail/pose_stamped__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__init(message_memory);
}

void cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_fini_function(void * message_memory)
{
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__fini(message_memory);
}

size_t cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryQuery_Response__trajectory(
  const void * untyped_member)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return member->size;
}

const void * cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryQuery_Response__trajectory(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__PoseStamped__Sequence * member =
    (const geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryQuery_Response__trajectory(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  return &member->data[index];
}

void cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryQuery_Response__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__PoseStamped * item =
    ((const geometry_msgs__msg__PoseStamped *)
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryQuery_Response__trajectory(untyped_member, index));
  geometry_msgs__msg__PoseStamped * value =
    (geometry_msgs__msg__PoseStamped *)(untyped_value);
  *value = *item;
}

void cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryQuery_Response__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__PoseStamped * item =
    ((geometry_msgs__msg__PoseStamped *)
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryQuery_Response__trajectory(untyped_member, index));
  const geometry_msgs__msg__PoseStamped * value =
    (const geometry_msgs__msg__PoseStamped *)(untyped_value);
  *item = *value;
}

bool cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryQuery_Response__trajectory(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__PoseStamped__Sequence * member =
    (geometry_msgs__msg__PoseStamped__Sequence *)(untyped_member);
  geometry_msgs__msg__PoseStamped__Sequence__fini(member);
  return geometry_msgs__msg__PoseStamped__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__TrajectoryQuery_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__srv__TrajectoryQuery_Response, trajectory),  // bytes offset in struct
    NULL,  // default value
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__size_function__TrajectoryQuery_Response__trajectory,  // size() function pointer
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_const_function__TrajectoryQuery_Response__trajectory,  // get_const(index) function pointer
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__get_function__TrajectoryQuery_Response__trajectory,  // get(index) function pointer
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__fetch_function__TrajectoryQuery_Response__trajectory,  // fetch(index, &value) function pointer
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__assign_function__TrajectoryQuery_Response__trajectory,  // assign(index, value) function pointer
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__resize_function__TrajectoryQuery_Response__trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_members = {
  "cartographer_ros_msgs__srv",  // message namespace
  "TrajectoryQuery_Response",  // message name
  2,  // number of fields
  sizeof(cartographer_ros_msgs__srv__TrajectoryQuery_Response),
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_member_array,  // message members
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Response)() {
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, StatusResponse)();
  cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseStamped)();
  if (!cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cartographer_ros_msgs__srv__TrajectoryQuery_Response__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "cartographer_ros_msgs/srv/detail/trajectory_query__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_members = {
  "cartographer_ros_msgs__srv",  // service namespace
  "TrajectoryQuery",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_Request_message_type_support_handle,
  NULL  // response message
  // cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_Response_message_type_support_handle
};

static rosidl_service_type_support_t cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_type_support_handle = {
  0,
  &cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery)() {
  if (!cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_type_support_handle.typesupport_identifier) {
    cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, srv, TrajectoryQuery_Response)()->data;
  }

  return &cartographer_ros_msgs__srv__detail__trajectory_query__rosidl_typesupport_introspection_c__TrajectoryQuery_service_type_support_handle;
}
