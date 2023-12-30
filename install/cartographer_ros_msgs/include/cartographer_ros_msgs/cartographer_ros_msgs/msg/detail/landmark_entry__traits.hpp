// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'tracking_from_landmark_transform'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace cartographer_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LandmarkEntry & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: tracking_from_landmark_transform
  {
    out << "tracking_from_landmark_transform: ";
    to_flow_style_yaml(msg.tracking_from_landmark_transform, out);
    out << ", ";
  }

  // member: translation_weight
  {
    out << "translation_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_weight, out);
    out << ", ";
  }

  // member: rotation_weight
  {
    out << "rotation_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_weight, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LandmarkEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: tracking_from_landmark_transform
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tracking_from_landmark_transform:\n";
    to_block_style_yaml(msg.tracking_from_landmark_transform, out, indentation + 2);
  }

  // member: translation_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_weight, out);
    out << "\n";
  }

  // member: rotation_weight
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_weight: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_weight, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LandmarkEntry & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::msg::LandmarkEntry & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::msg::LandmarkEntry & msg)
{
  return cartographer_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::LandmarkEntry>()
{
  return "cartographer_ros_msgs::msg::LandmarkEntry";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::LandmarkEntry>()
{
  return "cartographer_ros_msgs/msg/LandmarkEntry";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::LandmarkEntry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__TRAITS_HPP_
