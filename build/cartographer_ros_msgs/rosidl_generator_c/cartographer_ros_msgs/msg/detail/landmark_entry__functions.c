// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/landmark_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracking_from_landmark_transform`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cartographer_ros_msgs__msg__LandmarkEntry__init(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
    return false;
  }
  // tracking_from_landmark_transform
  if (!geometry_msgs__msg__Pose__init(&msg->tracking_from_landmark_transform)) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
    return false;
  }
  // translation_weight
  // rotation_weight
  return true;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__fini(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // tracking_from_landmark_transform
  geometry_msgs__msg__Pose__fini(&msg->tracking_from_landmark_transform);
  // translation_weight
  // rotation_weight
}

bool
cartographer_ros_msgs__msg__LandmarkEntry__are_equal(const cartographer_ros_msgs__msg__LandmarkEntry * lhs, const cartographer_ros_msgs__msg__LandmarkEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // tracking_from_landmark_transform
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->tracking_from_landmark_transform), &(rhs->tracking_from_landmark_transform)))
  {
    return false;
  }
  // translation_weight
  if (lhs->translation_weight != rhs->translation_weight) {
    return false;
  }
  // rotation_weight
  if (lhs->rotation_weight != rhs->rotation_weight) {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__LandmarkEntry__copy(
  const cartographer_ros_msgs__msg__LandmarkEntry * input,
  cartographer_ros_msgs__msg__LandmarkEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // tracking_from_landmark_transform
  if (!geometry_msgs__msg__Pose__copy(
      &(input->tracking_from_landmark_transform), &(output->tracking_from_landmark_transform)))
  {
    return false;
  }
  // translation_weight
  output->translation_weight = input->translation_weight;
  // rotation_weight
  output->rotation_weight = input->rotation_weight;
  return true;
}

cartographer_ros_msgs__msg__LandmarkEntry *
cartographer_ros_msgs__msg__LandmarkEntry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkEntry * msg = (cartographer_ros_msgs__msg__LandmarkEntry *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__LandmarkEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__LandmarkEntry));
  bool success = cartographer_ros_msgs__msg__LandmarkEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__destroy(cartographer_ros_msgs__msg__LandmarkEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__LandmarkEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__init(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkEntry * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__LandmarkEntry *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__LandmarkEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__LandmarkEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__LandmarkEntry__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__fini(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array)
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
      cartographer_ros_msgs__msg__LandmarkEntry__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__LandmarkEntry__Sequence *
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array = (cartographer_ros_msgs__msg__LandmarkEntry__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__LandmarkEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__LandmarkEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__destroy(cartographer_ros_msgs__msg__LandmarkEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__LandmarkEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__are_equal(const cartographer_ros_msgs__msg__LandmarkEntry__Sequence * lhs, const cartographer_ros_msgs__msg__LandmarkEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__LandmarkEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__LandmarkEntry__Sequence__copy(
  const cartographer_ros_msgs__msg__LandmarkEntry__Sequence * input,
  cartographer_ros_msgs__msg__LandmarkEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__LandmarkEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__LandmarkEntry * data =
      (cartographer_ros_msgs__msg__LandmarkEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__LandmarkEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__LandmarkEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__LandmarkEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
