// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "cartographer_ros_msgs/msg/detail/metric__struct.hpp"
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

void Metric_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) cartographer_ros_msgs::msg::Metric(_init);
}

void Metric_fini_function(void * message_memory)
{
  auto typed_message = static_cast<cartographer_ros_msgs::msg::Metric *>(message_memory);
  typed_message->~Metric();
}

size_t size_function__Metric__labels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::MetricLabel> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Metric__labels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::MetricLabel> *>(untyped_member);
  return &member[index];
}

void * get_function__Metric__labels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cartographer_ros_msgs::msg::MetricLabel> *>(untyped_member);
  return &member[index];
}

void fetch_function__Metric__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cartographer_ros_msgs::msg::MetricLabel *>(
    get_const_function__Metric__labels(untyped_member, index));
  auto & value = *reinterpret_cast<cartographer_ros_msgs::msg::MetricLabel *>(untyped_value);
  value = item;
}

void assign_function__Metric__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cartographer_ros_msgs::msg::MetricLabel *>(
    get_function__Metric__labels(untyped_member, index));
  const auto & value = *reinterpret_cast<const cartographer_ros_msgs::msg::MetricLabel *>(untyped_value);
  item = value;
}

void resize_function__Metric__labels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cartographer_ros_msgs::msg::MetricLabel> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Metric__counts_by_bucket(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::HistogramBucket> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Metric__counts_by_bucket(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<cartographer_ros_msgs::msg::HistogramBucket> *>(untyped_member);
  return &member[index];
}

void * get_function__Metric__counts_by_bucket(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<cartographer_ros_msgs::msg::HistogramBucket> *>(untyped_member);
  return &member[index];
}

void fetch_function__Metric__counts_by_bucket(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const cartographer_ros_msgs::msg::HistogramBucket *>(
    get_const_function__Metric__counts_by_bucket(untyped_member, index));
  auto & value = *reinterpret_cast<cartographer_ros_msgs::msg::HistogramBucket *>(untyped_value);
  value = item;
}

void assign_function__Metric__counts_by_bucket(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<cartographer_ros_msgs::msg::HistogramBucket *>(
    get_function__Metric__counts_by_bucket(untyped_member, index));
  const auto & value = *reinterpret_cast<const cartographer_ros_msgs::msg::HistogramBucket *>(untyped_value);
  item = value;
}

void resize_function__Metric__counts_by_bucket(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<cartographer_ros_msgs::msg::HistogramBucket> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Metric_message_member_array[4] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::Metric, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "labels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartographer_ros_msgs::msg::MetricLabel>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::Metric, labels),  // bytes offset in struct
    nullptr,  // default value
    size_function__Metric__labels,  // size() function pointer
    get_const_function__Metric__labels,  // get_const(index) function pointer
    get_function__Metric__labels,  // get(index) function pointer
    fetch_function__Metric__labels,  // fetch(index, &value) function pointer
    assign_function__Metric__labels,  // assign(index, value) function pointer
    resize_function__Metric__labels  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::Metric, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "counts_by_bucket",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<cartographer_ros_msgs::msg::HistogramBucket>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs::msg::Metric, counts_by_bucket),  // bytes offset in struct
    nullptr,  // default value
    size_function__Metric__counts_by_bucket,  // size() function pointer
    get_const_function__Metric__counts_by_bucket,  // get_const(index) function pointer
    get_function__Metric__counts_by_bucket,  // get(index) function pointer
    fetch_function__Metric__counts_by_bucket,  // fetch(index, &value) function pointer
    assign_function__Metric__counts_by_bucket,  // assign(index, value) function pointer
    resize_function__Metric__counts_by_bucket  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Metric_message_members = {
  "cartographer_ros_msgs::msg",  // message namespace
  "Metric",  // message name
  4,  // number of fields
  sizeof(cartographer_ros_msgs::msg::Metric),
  Metric_message_member_array,  // message members
  Metric_init_function,  // function to initialize message memory (memory has to be allocated)
  Metric_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Metric_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Metric_message_members,
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
get_message_type_support_handle<cartographer_ros_msgs::msg::Metric>()
{
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Metric_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, cartographer_ros_msgs, msg, Metric)() {
  return &::cartographer_ros_msgs::msg::rosidl_typesupport_introspection_cpp::Metric_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
