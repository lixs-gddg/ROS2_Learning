// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/MetricLabel.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/metric_label__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_MetricLabel_value
{
public:
  explicit Init_MetricLabel_value(::cartographer_ros_msgs::msg::MetricLabel & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::MetricLabel value(::cartographer_ros_msgs::msg::MetricLabel::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::MetricLabel msg_;
};

class Init_MetricLabel_key
{
public:
  Init_MetricLabel_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricLabel_value key(::cartographer_ros_msgs::msg::MetricLabel::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_MetricLabel_value(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::MetricLabel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::MetricLabel>()
{
  return cartographer_ros_msgs::msg::builder::Init_MetricLabel_key();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC_LABEL__BUILDER_HPP_
