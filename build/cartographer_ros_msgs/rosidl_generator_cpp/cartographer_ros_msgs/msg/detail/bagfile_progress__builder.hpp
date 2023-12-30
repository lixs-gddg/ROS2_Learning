// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/BagfileProgress.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cartographer_ros_msgs/msg/detail/bagfile_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_BagfileProgress_processed_seconds
{
public:
  explicit Init_BagfileProgress_processed_seconds(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::BagfileProgress processed_seconds(::cartographer_ros_msgs::msg::BagfileProgress::_processed_seconds_type arg)
  {
    msg_.processed_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_total_seconds
{
public:
  explicit Init_BagfileProgress_total_seconds(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  Init_BagfileProgress_processed_seconds total_seconds(::cartographer_ros_msgs::msg::BagfileProgress::_total_seconds_type arg)
  {
    msg_.total_seconds = std::move(arg);
    return Init_BagfileProgress_processed_seconds(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_processed_messages
{
public:
  explicit Init_BagfileProgress_processed_messages(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  Init_BagfileProgress_total_seconds processed_messages(::cartographer_ros_msgs::msg::BagfileProgress::_processed_messages_type arg)
  {
    msg_.processed_messages = std::move(arg);
    return Init_BagfileProgress_total_seconds(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_total_messages
{
public:
  explicit Init_BagfileProgress_total_messages(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  Init_BagfileProgress_processed_messages total_messages(::cartographer_ros_msgs::msg::BagfileProgress::_total_messages_type arg)
  {
    msg_.total_messages = std::move(arg);
    return Init_BagfileProgress_processed_messages(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_total_bagfiles
{
public:
  explicit Init_BagfileProgress_total_bagfiles(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  Init_BagfileProgress_total_messages total_bagfiles(::cartographer_ros_msgs::msg::BagfileProgress::_total_bagfiles_type arg)
  {
    msg_.total_bagfiles = std::move(arg);
    return Init_BagfileProgress_total_messages(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_current_bagfile_id
{
public:
  explicit Init_BagfileProgress_current_bagfile_id(::cartographer_ros_msgs::msg::BagfileProgress & msg)
  : msg_(msg)
  {}
  Init_BagfileProgress_total_bagfiles current_bagfile_id(::cartographer_ros_msgs::msg::BagfileProgress::_current_bagfile_id_type arg)
  {
    msg_.current_bagfile_id = std::move(arg);
    return Init_BagfileProgress_total_bagfiles(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

class Init_BagfileProgress_current_bagfile_name
{
public:
  Init_BagfileProgress_current_bagfile_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BagfileProgress_current_bagfile_id current_bagfile_name(::cartographer_ros_msgs::msg::BagfileProgress::_current_bagfile_name_type arg)
  {
    msg_.current_bagfile_name = std::move(arg);
    return Init_BagfileProgress_current_bagfile_id(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::BagfileProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::BagfileProgress>()
{
  return cartographer_ros_msgs::msg::builder::Init_BagfileProgress_current_bagfile_name();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__BUILDER_HPP_
