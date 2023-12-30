// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/HistogramBucket.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/msg/detail/histogram_bucket__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartographer_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HistogramBucket & msg,
  std::ostream & out)
{
  out << "{";
  // member: bucket_boundary
  {
    out << "bucket_boundary: ";
    rosidl_generator_traits::value_to_yaml(msg.bucket_boundary, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HistogramBucket & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bucket_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bucket_boundary: ";
    rosidl_generator_traits::value_to_yaml(msg.bucket_boundary, out);
    out << "\n";
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HistogramBucket & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::msg::HistogramBucket & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::msg::HistogramBucket & msg)
{
  return cartographer_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::HistogramBucket>()
{
  return "cartographer_ros_msgs::msg::HistogramBucket";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::HistogramBucket>()
{
  return "cartographer_ros_msgs/msg/HistogramBucket";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::HistogramBucket>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::HistogramBucket>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartographer_ros_msgs::msg::HistogramBucket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__TRAITS_HPP_
