// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#ifndef OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_H_
#define OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'image_filename'
#include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'angular_velocity'
// Member 'linear_acceleration'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'imu_timestamp'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in msg/FusedState in the package offline_timestamp_align_colcon.
typedef struct offline_timestamp_align_colcon__msg__FusedState
{
  builtin_interfaces__msg__Time timestamp;
  rosidl_runtime_c__String image_filename;
  sensor_msgs__msg__Image image;
  geometry_msgs__msg__Vector3__Sequence angular_velocity;
  geometry_msgs__msg__Vector3__Sequence linear_acceleration;
  rosidl_runtime_c__double__Sequence imu_timestamp;
} offline_timestamp_align_colcon__msg__FusedState;

// Struct for a sequence of offline_timestamp_align_colcon__msg__FusedState.
typedef struct offline_timestamp_align_colcon__msg__FusedState__Sequence
{
  offline_timestamp_align_colcon__msg__FusedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} offline_timestamp_align_colcon__msg__FusedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OFFLINE_TIMESTAMP_ALIGN_COLCON__MSG__DETAIL__FUSED_STATE__STRUCT_H_
