// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "offline_timestamp_align_colcon/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "offline_timestamp_align_colcon/msg/detail/fused_state__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace offline_timestamp_align_colcon
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_offline_timestamp_align_colcon
cdr_serialize(
  const offline_timestamp_align_colcon::msg::FusedState & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_offline_timestamp_align_colcon
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  offline_timestamp_align_colcon::msg::FusedState & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_offline_timestamp_align_colcon
get_serialized_size(
  const offline_timestamp_align_colcon::msg::FusedState & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_offline_timestamp_align_colcon
max_serialized_size_FusedState(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace offline_timestamp_align_colcon

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_offline_timestamp_align_colcon
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, offline_timestamp_align_colcon, msg, FusedState)();

#ifdef __cplusplus
}
#endif

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
