// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/ReadMetrics.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cartographer_ros_msgs/srv/detail/read_metrics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadMetrics_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadMetrics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadMetrics_Request & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::ReadMetrics_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::ReadMetrics_Request & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::ReadMetrics_Request>()
{
  return "cartographer_ros_msgs::srv::ReadMetrics_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::ReadMetrics_Request>()
{
  return "cartographer_ros_msgs/srv/ReadMetrics_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::ReadMetrics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::ReadMetrics_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartographer_ros_msgs::srv::ReadMetrics_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"
// Member 'metric_families'
#include "cartographer_ros_msgs/msg/detail/metric_family__traits.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace cartographer_ros_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadMetrics_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: metric_families
  {
    if (msg.metric_families.size() == 0) {
      out << "metric_families: []";
    } else {
      out << "metric_families: [";
      size_t pending_items = msg.metric_families.size();
      for (auto item : msg.metric_families) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadMetrics_Response & msg,
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

  // member: metric_families
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.metric_families.size() == 0) {
      out << "metric_families: []\n";
    } else {
      out << "metric_families:\n";
      for (auto item : msg.metric_families) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadMetrics_Response & msg, bool use_flow_style = false)
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
  const cartographer_ros_msgs::srv::ReadMetrics_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  cartographer_ros_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cartographer_ros_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const cartographer_ros_msgs::srv::ReadMetrics_Response & msg)
{
  return cartographer_ros_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<cartographer_ros_msgs::srv::ReadMetrics_Response>()
{
  return "cartographer_ros_msgs::srv::ReadMetrics_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::ReadMetrics_Response>()
{
  return "cartographer_ros_msgs/srv/ReadMetrics_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::ReadMetrics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::ReadMetrics_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::ReadMetrics_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::ReadMetrics>()
{
  return "cartographer_ros_msgs::srv::ReadMetrics";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::ReadMetrics>()
{
  return "cartographer_ros_msgs/srv/ReadMetrics";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::ReadMetrics>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::ReadMetrics_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::ReadMetrics_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::ReadMetrics>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::ReadMetrics_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::ReadMetrics_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::ReadMetrics>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::ReadMetrics_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::ReadMetrics_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__READ_METRICS__TRAITS_HPP_
