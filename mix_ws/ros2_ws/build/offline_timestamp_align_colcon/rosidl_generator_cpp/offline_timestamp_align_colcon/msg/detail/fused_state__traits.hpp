// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__TRAITS_HPP_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__TRAITS_HPP_

#include "offline_timestamp_align_colcon/msg/detail/fused_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<offline_timestamp_align_colcon::msg::FusedState>()
{
  return "offline_timestamp_align_colcon::msg::FusedState";
}

template<>
inline const char * name<offline_timestamp_align_colcon::msg::FusedState>()
{
  return "offline_timestamp_align_colcon/msg/FusedState";
}

template<>
struct has_fixed_size<offline_timestamp_align_colcon::msg::FusedState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<offline_timestamp_align_colcon::msg::FusedState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<offline_timestamp_align_colcon::msg::FusedState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__TRAITS_HPP_
