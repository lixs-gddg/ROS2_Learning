// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'labels'
#include "cartographer_ros_msgs/msg/detail/metric_label__struct.hpp"
// Member 'counts_by_bucket'
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__Metric __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__Metric __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Metric_
{
  using Type = Metric_<ContainerAllocator>;

  explicit Metric_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->value = 0.0;
    }
  }

  explicit Metric_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->value = 0.0;
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _labels_type =
    std::vector<cartographer_ros_msgs::msg::MetricLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::MetricLabel_<ContainerAllocator>>>;
  _labels_type labels;
  using _value_type =
    double;
  _value_type value;
  using _counts_by_bucket_type =
    std::vector<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>>;
  _counts_by_bucket_type counts_by_bucket;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__labels(
    const std::vector<cartographer_ros_msgs::msg::MetricLabel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::MetricLabel_<ContainerAllocator>>> & _arg)
  {
    this->labels = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__counts_by_bucket(
    const std::vector<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>> & _arg)
  {
    this->counts_by_bucket = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TYPE_COUNTER =
    0u;
  static constexpr uint8_t TYPE_GAUGE =
    1u;
  static constexpr uint8_t TYPE_HISTOGRAM =
    2u;

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::Metric_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::Metric_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::Metric_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::Metric_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__Metric
    std::shared_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__Metric
    std::shared_ptr<cartographer_ros_msgs::msg::Metric_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Metric_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->labels != other.labels) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->counts_by_bucket != other.counts_by_bucket) {
      return false;
    }
    return true;
  }
  bool operator!=(const Metric_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Metric_

// alias to use template instance with default allocator
using Metric =
  cartographer_ros_msgs::msg::Metric_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Metric_<ContainerAllocator>::TYPE_COUNTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Metric_<ContainerAllocator>::TYPE_GAUGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t Metric_<ContainerAllocator>::TYPE_HISTOGRAM;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__METRIC__STRUCT_HPP_
