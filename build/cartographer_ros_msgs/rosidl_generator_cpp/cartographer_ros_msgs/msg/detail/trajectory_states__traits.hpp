// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace cartographer_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: trajectory_id
  {
    if (msg.trajectory_id.size() == 0) {
      out << "trajectory_id: []";
    } else {
      out << "trajectory_id: [";
      size_t pending_items = msg.trajectory_id.size();
      for (auto item : msg.trajectory_id) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: trajectory_state
  {
    if (msg.trajectory_state.size() == 0) {
      out << "trajectory_state: []";
    } else {
      out << "trajectory_state: [";
      size_t pending_items = msg.trajectory_state.size();
      for (auto item : msg.trajectory_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_id.size() == 0) {
      out << "trajectory_id: []\n";
    } else {
      out << "trajectory_id:\n";
      for (auto item : msg.trajectory_id) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: trajectory_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_state.size() == 0) {
      out << "trajectory_state: []\n";
    } else {
      out << "trajectory_state:\n";
      for (auto item : msg.trajectory_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryStates & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::msg::TrajectoryStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::msg::TrajectoryStates & msg)
{
  return cartographer_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::msg::TrajectoryStates>()
{
  return "cartographer_ros_msgs::msg::TrajectoryStates";
}

template<>
inline const char * name<cartographer_ros_msgs::msg::TrajectoryStates>()
{
  return "cartographer_ros_msgs/msg/TrajectoryStates";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::msg::TrajectoryStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_STATES__TRAITS_HPP_
