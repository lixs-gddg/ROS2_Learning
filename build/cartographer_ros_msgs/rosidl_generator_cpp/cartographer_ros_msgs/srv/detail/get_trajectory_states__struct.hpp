// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:srv/GetTrajectoryStates.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Request __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrajectoryStates_Request_
{
  using Type = GetTrajectoryStates_Request_<ContainerAllocator>;

  explicit GetTrajectoryStates_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetTrajectoryStates_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Request
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Request
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrajectoryStates_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrajectoryStates_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrajectoryStates_Request_

// alias to use template instance with default allocator
using GetTrajectoryStates_Request =
  cartographer_ros_msgs::srv::GetTrajectoryStates_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cartographer_ros_msgs


// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"
// Member 'trajectory_states'
#include "cartographer_ros_msgs/msg/detail/trajectory_states__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Response __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetTrajectoryStates_Response_
{
  using Type = GetTrajectoryStates_Response_<ContainerAllocator>;

  explicit GetTrajectoryStates_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init),
    trajectory_states(_init)
  {
    (void)_init;
  }

  explicit GetTrajectoryStates_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init),
    trajectory_states(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _status_type =
    cartographer_ros_msgs::msg::StatusResponse_<ContainerAllocator>;
  _status_type status;
  using _trajectory_states_type =
    cartographer_ros_msgs::msg::TrajectoryStates_<ContainerAllocator>;
  _trajectory_states_type trajectory_states;

  // setters for named parameter idiom
  Type & set__status(
    const cartographer_ros_msgs::msg::StatusResponse_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__trajectory_states(
    const cartographer_ros_msgs::msg::TrajectoryStates_<ContainerAllocator> & _arg)
  {
    this->trajectory_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Response
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__srv__GetTrajectoryStates_Response
    std::shared_ptr<cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetTrajectoryStates_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->trajectory_states != other.trajectory_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetTrajectoryStates_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetTrajectoryStates_Response_

// alias to use template instance with default allocator
using GetTrajectoryStates_Response =
  cartographer_ros_msgs::srv::GetTrajectoryStates_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace cartographer_ros_msgs
{

namespace srv
{

struct GetTrajectoryStates
{
  using Request = cartographer_ros_msgs::srv::GetTrajectoryStates_Request;
  using Response = cartographer_ros_msgs::srv::GetTrajectoryStates_Response;
};

}  // namespace srv

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__GET_TRAJECTORY_STATES__STRUCT_HPP_
