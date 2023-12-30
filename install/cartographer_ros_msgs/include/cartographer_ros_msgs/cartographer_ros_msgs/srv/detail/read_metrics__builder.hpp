// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:srv/ReadMetrics.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/srv/detail/read_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::ReadMetrics_Request>()
{
  return ::cartographer_ros_msgs::srv::ReadMetrics_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_ReadMetrics_Response_timestamp
{
public:
  explicit Init_ReadMetrics_Response_timestamp(::cartographer_ros_msgs::srv::ReadMetrics_Response & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::srv::ReadMetrics_Response timestamp(::cartographer_ros_msgs::srv::ReadMetrics_Response::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::ReadMetrics_Response msg_;
};

class Init_ReadMetrics_Response_metric_families
{
public:
  explicit Init_ReadMetrics_Response_metric_families(::cartographer_ros_msgs::srv::ReadMetrics_Response & msg)
  : msg_(msg)
  {}
  Init_ReadMetrics_Response_timestamp metric_families(::cartographer_ros_msgs::srv::ReadMetrics_Response::_metric_families_type arg)
  {
    msg_.metric_families = std::move(arg);
    return Init_ReadMetrics_Response_timestamp(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::ReadMetrics_Response msg_;
};

class Init_ReadMetrics_Response_status
{
public:
  Init_ReadMetrics_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadMetrics_Response_metric_families status(::cartographer_ros_msgs::srv::ReadMetrics_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReadMetrics_Response_metric_families(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::ReadMetrics_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::ReadMetrics_Response>()
{
  return cartographer_ros_msgs::srv::builder::Init_ReadMetrics_Response_status();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__BUILDER_HPP_
