// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryStates_trajectory_state
{
public:
  explicit Init_TrajectoryStates_trajectory_state(::cartographer_ros_msgs::msg::TrajectoryStates & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::TrajectoryStates trajectory_state(::cartographer_ros_msgs::msg::TrajectoryStates::_trajectory_state_type arg)
  {
    msg_.trajectory_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryStates msg_;
};

class Init_TrajectoryStates_trajectory_id
{
public:
  explicit Init_TrajectoryStates_trajectory_id(::cartographer_ros_msgs::msg::TrajectoryStates & msg)
  : msg_(msg)
  {}
  Init_TrajectoryStates_trajectory_state trajectory_id(::cartographer_ros_msgs::msg::TrajectoryStates::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return Init_TrajectoryStates_trajectory_state(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryStates msg_;
};

class Init_TrajectoryStates_header
{
public:
  Init_TrajectoryStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryStates_trajectory_id header(::cartographer_ros_msgs::msg::TrajectoryStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TrajectoryStates_trajectory_id(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::TrajectoryStates>()
{
  return cartographer_ros_msgs::msg::builder::Init_TrajectoryStates_header();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__BUILDER_HPP_
