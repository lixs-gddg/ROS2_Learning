// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/BagfileProgress.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__BagfileProgress __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__BagfileProgress __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BagfileProgress_
{
  using Type = BagfileProgress_<ContainerAllocator>;

  explicit BagfileProgress_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_bagfile_name = "";
      this->current_bagfile_id = 0ul;
      this->total_bagfiles = 0ul;
      this->total_messages = 0ul;
      this->processed_messages = 0ul;
      this->total_seconds = 0.0f;
      this->processed_seconds = 0.0f;
    }
  }

  explicit BagfileProgress_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_bagfile_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_bagfile_name = "";
      this->current_bagfile_id = 0ul;
      this->total_bagfiles = 0ul;
      this->total_messages = 0ul;
      this->processed_messages = 0ul;
      this->total_seconds = 0.0f;
      this->processed_seconds = 0.0f;
    }
  }

  // field types and members
  using _current_bagfile_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_bagfile_name_type current_bagfile_name;
  using _current_bagfile_id_type =
    uint32_t;
  _current_bagfile_id_type current_bagfile_id;
  using _total_bagfiles_type =
    uint32_t;
  _total_bagfiles_type total_bagfiles;
  using _total_messages_type =
    uint32_t;
  _total_messages_type total_messages;
  using _processed_messages_type =
    uint32_t;
  _processed_messages_type processed_messages;
  using _total_seconds_type =
    float;
  _total_seconds_type total_seconds;
  using _processed_seconds_type =
    float;
  _processed_seconds_type processed_seconds;

  // setters for named parameter idiom
  Type & set__current_bagfile_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_bagfile_name = _arg;
    return *this;
  }
  Type & set__current_bagfile_id(
    const uint32_t & _arg)
  {
    this->current_bagfile_id = _arg;
    return *this;
  }
  Type & set__total_bagfiles(
    const uint32_t & _arg)
  {
    this->total_bagfiles = _arg;
    return *this;
  }
  Type & set__total_messages(
    const uint32_t & _arg)
  {
    this->total_messages = _arg;
    return *this;
  }
  Type & set__processed_messages(
    const uint32_t & _arg)
  {
    this->processed_messages = _arg;
    return *this;
  }
  Type & set__total_seconds(
    const float & _arg)
  {
    this->total_seconds = _arg;
    return *this;
  }
  Type & set__processed_seconds(
    const float & _arg)
  {
    this->processed_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__BagfileProgress
    std::shared_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__BagfileProgress
    std::shared_ptr<cartographer_ros_msgs::msg::BagfileProgress_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BagfileProgress_ & other) const
  {
    if (this->current_bagfile_name != other.current_bagfile_name) {
      return false;
    }
    if (this->current_bagfile_id != other.current_bagfile_id) {
      return false;
    }
    if (this->total_bagfiles != other.total_bagfiles) {
      return false;
    }
    if (this->total_messages != other.total_messages) {
      return false;
    }
    if (this->processed_messages != other.processed_messages) {
      return false;
    }
    if (this->total_seconds != other.total_seconds) {
      return false;
    }
    if (this->processed_seconds != other.processed_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const BagfileProgress_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BagfileProgress_

// alias to use template instance with default allocator
using BagfileProgress =
  cartographer_ros_msgs::msg::BagfileProgress_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__BAGFILE_PROGRESS__STRUCT_HPP_
