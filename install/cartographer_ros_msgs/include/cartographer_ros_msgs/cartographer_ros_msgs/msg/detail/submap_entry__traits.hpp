// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/msg/detail/submap_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace cartographer_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubmapEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory_id
  {
    out << "trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_id, out);
    out << ", ";
  }

  // member: submap_index
  {
    out << "submap_index: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_index, out);
    out << ", ";
  }

  // member: submap_version
  {
    out << "submap_version: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_version, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: is_frozen
  {
    out << "is_frozen: ";
    rosidl_generator_traits::value_to_yaml(msg.is_frozen, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmapEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_id, out);
    out << "\n";
  }

  // member: submap_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submap_index: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_index, out);
    out << "\n";
  }

  // member: submap_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submap_version: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_version, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: is_frozen
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_frozen: ";
    rosidl_generator_traits::value_to_yaml(msg.is_frozen, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmapEntry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cartographer_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cartographer_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cartographer_ros_msgs::msg::SubmapEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::msg::SubmapEntry & msg)
{
  return cartographer_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::SubmapEntry>()
{
  return "cartographer_ros_msgs::msg::SubmapEntry";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::SubmapEntry>()
{
  return "cartographer_ros_msgs/msg/SubmapEntry";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::SubmapEntry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::SubmapEntry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<cartographer_ros_msgs::msg::SubmapEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__TRAITS_HPP_
