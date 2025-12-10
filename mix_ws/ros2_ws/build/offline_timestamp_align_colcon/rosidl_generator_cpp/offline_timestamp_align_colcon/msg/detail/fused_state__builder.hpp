// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__BUILDER_HPP_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__BUILDER_HPP_

#include "offline_timestamp_align_colcon/msg/detail/fused_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace offline_timestamp_align_colcon
{

namespace msg
{

namespace builder
{

class Init_FusedState_imu_timestamp
{
public:
  explicit Init_FusedState_imu_timestamp(::offline_timestamp_align_colcon::msg::FusedState & msg)
  : msg_(msg)
  {}
  ::offline_timestamp_align_colcon::msg::FusedState imu_timestamp(::offline_timestamp_align_colcon::msg::FusedState::_imu_timestamp_type arg)
  {
    msg_.imu_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

class Init_FusedState_linear_acceleration
{
public:
  explicit Init_FusedState_linear_acceleration(::offline_timestamp_align_colcon::msg::FusedState & msg)
  : msg_(msg)
  {}
  Init_FusedState_imu_timestamp linear_acceleration(::offline_timestamp_align_colcon::msg::FusedState::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_FusedState_imu_timestamp(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

class Init_FusedState_angular_velocity
{
public:
  explicit Init_FusedState_angular_velocity(::offline_timestamp_align_colcon::msg::FusedState & msg)
  : msg_(msg)
  {}
  Init_FusedState_linear_acceleration angular_velocity(::offline_timestamp_align_colcon::msg::FusedState::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_FusedState_linear_acceleration(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

class Init_FusedState_image
{
public:
  explicit Init_FusedState_image(::offline_timestamp_align_colcon::msg::FusedState & msg)
  : msg_(msg)
  {}
  Init_FusedState_angular_velocity image(::offline_timestamp_align_colcon::msg::FusedState::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_FusedState_angular_velocity(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

class Init_FusedState_image_filename
{
public:
  explicit Init_FusedState_image_filename(::offline_timestamp_align_colcon::msg::FusedState & msg)
  : msg_(msg)
  {}
  Init_FusedState_image image_filename(::offline_timestamp_align_colcon::msg::FusedState::_image_filename_type arg)
  {
    msg_.image_filename = std::move(arg);
    return Init_FusedState_image(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

class Init_FusedState_timestamp
{
public:
  Init_FusedState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FusedState_image_filename timestamp(::offline_timestamp_align_colcon::msg::FusedState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FusedState_image_filename(msg_);
  }

private:
  ::offline_timestamp_align_colcon::msg::FusedState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::offline_timestamp_align_colcon::msg::FusedState>()
{
  return offline_timestamp_align_colcon::msg::builder::Init_FusedState_timestamp();
}

}  // namespace offline_timestamp_align_colcon

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__BUILDER_HPP_
