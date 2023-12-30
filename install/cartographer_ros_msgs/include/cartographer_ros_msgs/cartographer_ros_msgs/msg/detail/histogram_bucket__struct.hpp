// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/HistogramBucket.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__HistogramBucket __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__HistogramBucket __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HistogramBucket_
{
  using Type = HistogramBucket_<ContainerAllocator>;

  explicit HistogramBucket_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bucket_boundary = 0.0;
      this->count = 0.0;
    }
  }

  explicit HistogramBucket_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bucket_boundary = 0.0;
      this->count = 0.0;
    }
  }

  // field types and members
  using _bucket_boundary_type =
    double;
  _bucket_boundary_type bucket_boundary;
  using _count_type =
    double;
  _count_type count;

  // setters for named parameter idiom
  Type & set__bucket_boundary(
    const double & _arg)
  {
    this->bucket_boundary = _arg;
    return *this;
  }
  Type & set__count(
    const double & _arg)
  {
    this->count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__HistogramBucket
    std::shared_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__HistogramBucket
    std::shared_ptr<cartographer_ros_msgs::msg::HistogramBucket_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HistogramBucket_ & other) const
  {
    if (this->bucket_boundary != other.bucket_boundary) {
      return false;
    }
    if (this->count != other.count) {
      return false;
    }
    return true;
  }
  bool operator!=(const HistogramBucket_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HistogramBucket_

// alias to use template instance with default allocator
using HistogramBucket =
  cartographer_ros_msgs::msg::HistogramBucket_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__HISTOGRAM_BUCKET__STRUCT_HPP_
