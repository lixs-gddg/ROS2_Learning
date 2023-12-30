// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/srv/detail/submap_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmapQuery_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmapQuery_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmapQuery_Request & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::SubmapQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::SubmapQuery_Request & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"
// Member 'textures'
#include "cartographer_ros_msgs/msg/detail/submap_texture__traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmapQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: submap_version
  {
    out << "submap_version: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_version, out);
    out << ", ";
  }

  // member: textures
  {
    if (msg.textures.size() == 0) {
      out << "textures: []";
    } else {
      out << "textures: [";
      size_t pending_items = msg.textures.size();
      for (auto item : msg.textures) {
        to_flow_style_yaml(item, out);
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
  const SubmapQuery_Response & msg,
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

  // member: submap_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submap_version: ";
    rosidl_generator_traits::value_to_yaml(msg.submap_version, out);
    out << "\n";
  }

  // member: textures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.textures.size() == 0) {
      out << "textures: []\n";
    } else {
      out << "textures:\n";
      for (auto item : msg.textures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmapQuery_Response & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::SubmapQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::SubmapQuery_Response & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::SubmapQuery>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_
