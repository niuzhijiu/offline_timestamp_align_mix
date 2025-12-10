// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_HPP_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__offline_timestamp_align_colcon__msg__FusedState __attribute__((deprecated))
#else
# define DEPRECATED__offline_timestamp_align_colcon__msg__FusedState __declspec(deprecated)
#endif

namespace offline_timestamp_align_colcon
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FusedState_
{
  using Type = FusedState_<ContainerAllocator>;

  explicit FusedState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_filename = "";
    }
  }

  explicit FusedState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    image_filename(_alloc),
    image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->image_filename = "";
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _image_filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _image_filename_type image_filename;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _angular_velocity_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Vector3_<ContainerAllocator>>::other>;
  _angular_velocity_type angular_velocity;
  using _linear_acceleration_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Vector3_<ContainerAllocator>>::other>;
  _linear_acceleration_type linear_acceleration;
  using _imu_timestamp_type =
    std::vector<double, typename ContainerAllocator::template rebind<double>::other>;
  _imu_timestamp_type imu_timestamp;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__image_filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->image_filename = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Vector3_<ContainerAllocator>>::other> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename ContainerAllocator::template rebind<geometry_msgs::msg::Vector3_<ContainerAllocator>>::other> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__imu_timestamp(
    const std::vector<double, typename ContainerAllocator::template rebind<double>::other> & _arg)
  {
    this->imu_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> *;
  using ConstRawPtr =
    const offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__offline_timestamp_align_colcon__msg__FusedState
    std::shared_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__offline_timestamp_align_colcon__msg__FusedState
    std::shared_ptr<offline_timestamp_align_colcon::msg::FusedState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FusedState_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->image_filename != other.image_filename) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->imu_timestamp != other.imu_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const FusedState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FusedState_

// alias to use template instance with default allocator
using FusedState =
  offline_timestamp_align_colcon::msg::FusedState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace offline_timestamp_align_colcon

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_HPP_
