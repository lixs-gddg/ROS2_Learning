// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/metric_family__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_MetricFamily_metrics
{
public:
  explicit Init_MetricFamily_metrics(::cartographer_ros_msgs::msg::MetricFamily & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::MetricFamily metrics(::cartographer_ros_msgs::msg::MetricFamily::_metrics_type arg)
  {
    msg_.metrics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::MetricFamily msg_;
};

class Init_MetricFamily_description
{
public:
  explicit Init_MetricFamily_description(::cartographer_ros_msgs::msg::MetricFamily & msg)
  : msg_(msg)
  {}
  Init_MetricFamily_metrics description(::cartographer_ros_msgs::msg::MetricFamily::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_MetricFamily_metrics(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::MetricFamily msg_;
};

class Init_MetricFamily_name
{
public:
  Init_MetricFamily_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricFamily_description name(::cartographer_ros_msgs::msg::MetricFamily::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MetricFamily_description(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::MetricFamily msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::MetricFamily>()
{
  return cartographer_ros_msgs::msg::builder::Init_MetricFamily_name();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_FAMILY__BUILDER_HPP_
