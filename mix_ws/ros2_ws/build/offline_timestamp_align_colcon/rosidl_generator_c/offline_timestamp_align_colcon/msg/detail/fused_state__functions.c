// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from offline_timestamp_align_colcon:msg/FusedState.idl
// generated code does not contain a copyright notice
#include "offline_timestamp_align_colcon/msg/detail/fused_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `image_filename`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `angular_velocity`
// Member `linear_acceleration`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `imu_timestamp`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
offline_timestamp_align_colcon__msg__FusedState__init(offline_timestamp_align_colcon__msg__FusedState * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  // image_filename
  if (!rosidl_runtime_c__String__init(&msg->image_filename)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->angular_velocity, 0)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->linear_acceleration, 0)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  // imu_timestamp
  if (!rosidl_runtime_c__double__Sequence__init(&msg->imu_timestamp, 0)) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
    return false;
  }
  return true;
}

void
offline_timestamp_align_colcon__msg__FusedState__fini(offline_timestamp_align_colcon__msg__FusedState * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // image_filename
  rosidl_runtime_c__String__fini(&msg->image_filename);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
  // angular_velocity
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->angular_velocity);
  // linear_acceleration
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->linear_acceleration);
  // imu_timestamp
  rosidl_runtime_c__double__Sequence__fini(&msg->imu_timestamp);
}

bool
offline_timestamp_align_colcon__msg__FusedState__are_equal(const offline_timestamp_align_colcon__msg__FusedState * lhs, const offline_timestamp_align_colcon__msg__FusedState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // image_filename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->image_filename), &(rhs->image_filename)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->angular_velocity), &(rhs->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->linear_acceleration), &(rhs->linear_acceleration)))
  {
    return false;
  }
  // imu_timestamp
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->imu_timestamp), &(rhs->imu_timestamp)))
  {
    return false;
  }
  return true;
}

bool
offline_timestamp_align_colcon__msg__FusedState__copy(
  const offline_timestamp_align_colcon__msg__FusedState * input,
  offline_timestamp_align_colcon__msg__FusedState * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // image_filename
  if (!rosidl_runtime_c__String__copy(
      &(input->image_filename), &(output->image_filename)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // angular_velocity
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->angular_velocity), &(output->angular_velocity)))
  {
    return false;
  }
  // linear_acceleration
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->linear_acceleration), &(output->linear_acceleration)))
  {
    return false;
  }
  // imu_timestamp
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->imu_timestamp), &(output->imu_timestamp)))
  {
    return false;
  }
  return true;
}

offline_timestamp_align_colcon__msg__FusedState *
offline_timestamp_align_colcon__msg__FusedState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  offline_timestamp_align_colcon__msg__FusedState * msg = (offline_timestamp_align_colcon__msg__FusedState *)allocator.allocate(sizeof(offline_timestamp_align_colcon__msg__FusedState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(offline_timestamp_align_colcon__msg__FusedState));
  bool success = offline_timestamp_align_colcon__msg__FusedState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
offline_timestamp_align_colcon__msg__FusedState__destroy(offline_timestamp_align_colcon__msg__FusedState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    offline_timestamp_align_colcon__msg__FusedState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
offline_timestamp_align_colcon__msg__FusedState__Sequence__init(offline_timestamp_align_colcon__msg__FusedState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  offline_timestamp_align_colcon__msg__FusedState * data = NULL;

  if (size) {
    data = (offline_timestamp_align_colcon__msg__FusedState *)allocator.zero_allocate(size, sizeof(offline_timestamp_align_colcon__msg__FusedState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = offline_timestamp_align_colcon__msg__FusedState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        offline_timestamp_align_colcon__msg__FusedState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
offline_timestamp_align_colcon__msg__FusedState__Sequence__fini(offline_timestamp_align_colcon__msg__FusedState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      offline_timestamp_align_colcon__msg__FusedState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

offline_timestamp_align_colcon__msg__FusedState__Sequence *
offline_timestamp_align_colcon__msg__FusedState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  offline_timestamp_align_colcon__msg__FusedState__Sequence * array = (offline_timestamp_align_colcon__msg__FusedState__Sequence *)allocator.allocate(sizeof(offline_timestamp_align_colcon__msg__FusedState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = offline_timestamp_align_colcon__msg__FusedState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
offline_timestamp_align_colcon__msg__FusedState__Sequence__destroy(offline_timestamp_align_colcon__msg__FusedState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    offline_timestamp_align_colcon__msg__FusedState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
offline_timestamp_align_colcon__msg__FusedState__Sequence__are_equal(const offline_timestamp_align_colcon__msg__FusedState__Sequence * lhs, const offline_timestamp_align_colcon__msg__FusedState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!offline_timestamp_align_colcon__msg__FusedState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
offline_timestamp_align_colcon__msg__FusedState__Sequence__copy(
  const offline_timestamp_align_colcon__msg__FusedState__Sequence * input,
  offline_timestamp_align_colcon__msg__FusedState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(offline_timestamp_align_colcon__msg__FusedState);
    offline_timestamp_align_colcon__msg__FusedState * data =
      (offline_timestamp_align_colcon__msg__FusedState *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!offline_timestamp_align_colcon__msg__FusedState__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          offline_timestamp_align_colcon__msg__FusedState__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!offline_timestamp_align_colcon__msg__FusedState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
