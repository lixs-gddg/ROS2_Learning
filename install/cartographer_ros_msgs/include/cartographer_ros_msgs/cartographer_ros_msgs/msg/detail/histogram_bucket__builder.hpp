// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/HistogramBucket.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/histogram_bucket__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_HistogramBucket_count
{
public:
  explicit Init_HistogramBucket_count(::cartographer_ros_msgs::msg::HistogramBucket & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::HistogramBucket count(::cartographer_ros_msgs::msg::HistogramBucket::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::HistogramBucket msg_;
};

class Init_HistogramBucket_bucket_boundary
{
public:
  Init_HistogramBucket_bucket_boundary()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HistogramBucket_count bucket_boundary(::cartographer_ros_msgs::msg::HistogramBucket::_bucket_boundary_type arg)
  {
    msg_.bucket_boundary = std::move(arg);
    return Init_HistogramBucket_count(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::HistogramBucket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::HistogramBucket>()
{
  return cartographer_ros_msgs::msg::builder::Init_HistogramBucket_bucket_boundary();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__BUILDER_HPP_
