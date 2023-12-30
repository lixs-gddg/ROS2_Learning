// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'initial_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartTrajectory_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: configuration_directory
  {
    out << "configuration_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_directory, out);
    out << ", ";
  }

  // member: configuration_basename
  {
    out << "configuration_basename: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_basename, out);
    out << ", ";
  }

  // member: use_initial_pose
  {
    out << "use_initial_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.use_initial_pose, out);
    out << ", ";
  }

  // member: initial_pose
  {
    out << "initial_pose: ";
    to_flow_style_yaml(msg.initial_pose, out);
    out << ", ";
  }

  // member: relative_to_trajectory_id
  {
    out << "relative_to_trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_to_trajectory_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: configuration_directory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configuration_directory: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_directory, out);
    out << "\n";
  }

  // member: configuration_basename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "configuration_basename: ";
    rosidl_generator_traits::value_to_yaml(msg.configuration_basename, out);
    out << "\n";
  }

  // member: use_initial_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_initial_pose: ";
    rosidl_generator_traits::value_to_yaml(msg.use_initial_pose, out);
    out << "\n";
  }

  // member: initial_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose:\n";
    to_block_style_yaml(msg.initial_pose, out, indentation + 2);
  }

  // member: relative_to_trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "relative_to_trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.relative_to_trajectory_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartTrajectory_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cartographer_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cartographer_ros_msgs::srv::StartTrajectory_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::StartTrajectory_Request & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory_Request>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory_Request>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const StartTrajectory_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: trajectory_id
  {
    out << "trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const StartTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: trajectory_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory_id: ";
    rosidl_generator_traits::value_to_yaml(msg.trajectory_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const StartTrajectory_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use cartographer_ros_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cartographer_ros_msgs::srv::StartTrajectory_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::StartTrajectory_Response & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory_Response>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory_Response>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct is_message<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::StartTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_
