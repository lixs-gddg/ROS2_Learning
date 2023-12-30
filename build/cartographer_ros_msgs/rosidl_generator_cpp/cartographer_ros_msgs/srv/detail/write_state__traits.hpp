// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/WriteState.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/srv/detail/write_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const WriteState_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: filename
  {
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << ", ";
  }

  // member: include_unfinished_submaps
  {
    out << "include_unfinished_submaps: ";
    rosidl_generator_traits::value_to_yaml(msg.include_unfinished_submaps, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WriteState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "filename: ";
    rosidl_generator_traits::value_to_yaml(msg.filename, out);
    out << "\n";
  }

  // member: include_unfinished_submaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "include_unfinished_submaps: ";
    rosidl_generator_traits::value_to_yaml(msg.include_unfinished_submaps, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteState_Request & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::WriteState_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::WriteState_Request & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState_Request>()
{
  return "cartographer_ros_msgs::srv::WriteState_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::WriteState_Request>()
{
  return "cartographer_ros_msgs/srv/WriteState_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::WriteState_Request>
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
  const WriteState_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WriteState_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WriteState_Response & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::WriteState_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::WriteState_Response & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState_Response>()
{
  return "cartographer_ros_msgs::srv::WriteState_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::WriteState_Response>()
{
  return "cartographer_ros_msgs/srv/WriteState_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState_Response>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState_Response>
  : std::integral_constant<bool, has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct is_message<cartographer_ros_msgs::srv::WriteState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::WriteState>()
{
  return "cartographer_ros_msgs::srv::WriteState";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::WriteState>()
{
  return "cartographer_ros_msgs/srv/WriteState";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::WriteState>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::WriteState_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::WriteState_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::WriteState>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::WriteState_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::WriteState_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::WriteState>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::WriteState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::WriteState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__TRAITS_HPP_
