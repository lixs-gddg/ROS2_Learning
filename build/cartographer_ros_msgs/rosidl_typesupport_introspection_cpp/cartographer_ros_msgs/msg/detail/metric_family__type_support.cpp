// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartographer_ros_msgs/msg/detail/metric_family__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace cartographer_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MetricFamily_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartographer_ros_msgs::msg::MetricFamily(_init);
}

void MetricFamily_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartographer_ros_msgs::msg::MetricFamily *>(message_memory);
  typed_message->~MetricFamily();
}

size_t size_function__MetricFamily__metrics(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::Metric> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MetricFamily__metrics(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::Metric> *>(untyped_member);
  return &member[index];
}

void * get_function__MetricFamily__metrics(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cartographer_ros_msgs::msg::Metric> *>(untyped_member);
  return &member[index];
}

void fetch_function__MetricFamily__metrics(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cartographer_ros_msgs::msg::Metric *>(
    get_const_function__MetricFamily__metrics(untyped_member, index));
  auto & value = *reinterpret_cast<cartographer_ros_msgs::msg::Metric *>(untyped_value);
  value = item;
}

void assign_function__MetricFamily__metrics(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cartographer_ros_msgs::msg::Metric *>(
    get_function__MetricFamily__metrics(untyped_member, index));
  const auto & value = *reinterpret_cast<const cartographer_ros_msgs::msg::Metric *>(untyped_value);
  item = value;
}

void resize_function__MetricFamily__metrics(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cartographer_ros_msgs::msg::Metric> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MetricFamily_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::MetricFamily, name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::MetricFamily, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "metrics",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartographer_ros_msgs::msg::Metric>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::MetricFamily, metrics),  // bytes offset in struct
    nullptr,  // default value
    size_function__MetricFamily__metrics,  // size() function pointer
    get_const_function__MetricFamily__metrics,  // get_const(index) function pointer
    get_function__MetricFamily__metrics,  // get(index) function pointer
    fetch_function__MetricFamily__metrics,  // fetch(index, &value) function pointer
    assign_function__MetricFamily__metrics,  // assign(index, value) function pointer
    resize_function__MetricFamily__metrics  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MetricFamily_message_members = {
  "cartographer_ros_msgs::msg",  // message namespace
  "MetricFamily",  // message name
  3,  // number of fields
  sizeof(cartographer_ros_msgs::msg::MetricFamily),
  MetricFamily_message_member_array,  // message members
  MetricFamily_init_function,  // function to initialize message memory (memory has to be allocated)
  MetricFamily_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MetricFamily_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MetricFamily_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::MetricFamily>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::MetricFamily_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, MetricFamily)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::MetricFamily_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
