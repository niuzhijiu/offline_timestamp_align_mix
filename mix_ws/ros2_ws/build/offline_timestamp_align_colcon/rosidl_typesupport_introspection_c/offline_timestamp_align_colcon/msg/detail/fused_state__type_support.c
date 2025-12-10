// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "offline_timestamp_align_colcon/msg/detail/fused_state__rosidl_typesupport_introspection_c.h"
#include "offline_timestamp_align_colcon/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "offline_timestamp_align_colcon/msg/detail/fused_state__functions.h"
#include "offline_timestamp_align_colcon/msg/detail/fused_state__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `image_filename`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/image.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/vector3.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `imu_timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FusedState__rosidl_typesupport_introspection_c__FusedState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  offline_timestamp_align_colcon__msg__FusedState__init(message_memory);
}

void FusedState__rosidl_typesupport_introspection_c__FusedState_fini_function(void * message_memory)
{
  offline_timestamp_align_colcon__msg__FusedState__fini(message_memory);
}

size_t FusedState__rosidl_typesupport_introspection_c__size_function__Vector3__angular_velocity(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * FusedState__rosidl_typesupport_introspection_c__get_const_function__Vector3__angular_velocity(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FusedState__rosidl_typesupport_introspection_c__get_function__Vector3__angular_velocity(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FusedState__rosidl_typesupport_introspection_c__resize_function__Vector3__angular_velocity(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t FusedState__rosidl_typesupport_introspection_c__size_function__Vector3__linear_acceleration(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * FusedState__rosidl_typesupport_introspection_c__get_const_function__Vector3__linear_acceleration(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * FusedState__rosidl_typesupport_introspection_c__get_function__Vector3__linear_acceleration(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

bool FusedState__rosidl_typesupport_introspection_c__resize_function__Vector3__linear_acceleration(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, image_filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, image),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    FusedState__rosidl_typesupport_introspection_c__size_function__Vector3__angular_velocity,  // size() function pointer
    FusedState__rosidl_typesupport_introspection_c__get_const_function__Vector3__angular_velocity,  // get_const(index) function pointer
    FusedState__rosidl_typesupport_introspection_c__get_function__Vector3__angular_velocity,  // get(index) function pointer
    FusedState__rosidl_typesupport_introspection_c__resize_function__Vector3__angular_velocity  // resize(index) function pointer
  },
  {
    "linear_acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, linear_acceleration),  // bytes offset in struct
    NULL,  // default value
    FusedState__rosidl_typesupport_introspection_c__size_function__Vector3__linear_acceleration,  // size() function pointer
    FusedState__rosidl_typesupport_introspection_c__get_const_function__Vector3__linear_acceleration,  // get_const(index) function pointer
    FusedState__rosidl_typesupport_introspection_c__get_function__Vector3__linear_acceleration,  // get(index) function pointer
    FusedState__rosidl_typesupport_introspection_c__resize_function__Vector3__linear_acceleration  // resize(index) function pointer
  },
  {
    "imu_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(offline_timestamp_align_colcon__msg__FusedState, imu_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FusedState__rosidl_typesupport_introspection_c__FusedState_message_members = {
  "offline_timestamp_align_colcon__msg",  // message namespace
  "FusedState",  // message name
  6,  // number of fields
  sizeof(offline_timestamp_align_colcon__msg__FusedState),
  FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array,  // message members
  FusedState__rosidl_typesupport_introspection_c__FusedState_init_function,  // function to initialize message memory (memory has to be allocated)
  FusedState__rosidl_typesupport_introspection_c__FusedState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FusedState__rosidl_typesupport_introspection_c__FusedState_message_type_support_handle = {
  0,
  &FusedState__rosidl_typesupport_introspection_c__FusedState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_offline_timestamp_align_colcon
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, offline_timestamp_align_colcon, msg, FusedState)() {
  FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  FusedState__rosidl_typesupport_introspection_c__FusedState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!FusedState__rosidl_typesupport_introspection_c__FusedState_message_type_support_handle.typesupport_identifier) {
    FusedState__rosidl_typesupport_introspection_c__FusedState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FusedState__rosidl_typesupport_introspection_c__FusedState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
