// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/metric__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_Metric_counts_by_bucket
{
public:
  explicit Init_Metric_counts_by_bucket(::cartographer_ros_msgs::msg::Metric & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::Metric counts_by_bucket(::cartographer_ros_msgs::msg::Metric::_counts_by_bucket_type arg)
  {
    msg_.counts_by_bucket = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::Metric msg_;
};

class Init_Metric_value
{
public:
  explicit Init_Metric_value(::cartographer_ros_msgs::msg::Metric & msg)
  : msg_(msg)
  {}
  Init_Metric_counts_by_bucket value(::cartographer_ros_msgs::msg::Metric::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Metric_counts_by_bucket(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::Metric msg_;
};

class Init_Metric_labels
{
public:
  explicit Init_Metric_labels(::cartographer_ros_msgs::msg::Metric & msg)
  : msg_(msg)
  {}
  Init_Metric_value labels(::cartographer_ros_msgs::msg::Metric::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return Init_Metric_value(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::Metric msg_;
};

class Init_Metric_type
{
public:
  Init_Metric_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Metric_labels type(::cartographer_ros_msgs::msg::Metric::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Metric_labels(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::Metric msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::Metric>()
{
  return cartographer_ros_msgs::msg::builder::Init_Metric_type();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__BUILDER_HPP_
