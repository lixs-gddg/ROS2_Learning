// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/submap_texture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `cells`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `slice_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cartographer_ros_msgs__msg__SubmapTexture__init(cartographer_ros_msgs__msg__SubmapTexture * msg)
{
  if (!msg) {
    return false;
  }
  // cells
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->cells, 0)) {
    cartographer_ros_msgs__msg__SubmapTexture__fini(msg);
    return false;
  }
  // width
  // height
  // resolution
  // slice_pose
  if (!geometry_msgs__msg__Pose__init(&msg->slice_pose)) {
    cartographer_ros_msgs__msg__SubmapTexture__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__SubmapTexture__fini(cartographer_ros_msgs__msg__SubmapTexture * msg)
{
  if (!msg) {
    return;
  }
  // cells
  rosidl_runtime_c__uint8__Sequence__fini(&msg->cells);
  // width
  // height
  // resolution
  // slice_pose
  geometry_msgs__msg__Pose__fini(&msg->slice_pose);
}

bool
cartographer_ros_msgs__msg__SubmapTexture__are_equal(const cartographer_ros_msgs__msg__SubmapTexture * lhs, const cartographer_ros_msgs__msg__SubmapTexture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cells
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->cells), &(rhs->cells)))
  {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // slice_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->slice_pose), &(rhs->slice_pose)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SubmapTexture__copy(
  const cartographer_ros_msgs__msg__SubmapTexture * input,
  cartographer_ros_msgs__msg__SubmapTexture * output)
{
  if (!input || !output) {
    return false;
  }
  // cells
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->cells), &(output->cells)))
  {
    return false;
  }
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // resolution
  output->resolution = input->resolution;
  // slice_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->slice_pose), &(output->slice_pose)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__SubmapTexture *
cartographer_ros_msgs__msg__SubmapTexture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapTexture * msg = (cartographer_ros_msgs__msg__SubmapTexture *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SubmapTexture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__SubmapTexture));
  bool success = cartographer_ros_msgs__msg__SubmapTexture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__SubmapTexture__destroy(cartographer_ros_msgs__msg__SubmapTexture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__SubmapTexture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__SubmapTexture__Sequence__init(cartographer_ros_msgs__msg__SubmapTexture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapTexture * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__SubmapTexture *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__SubmapTexture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__SubmapTexture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__SubmapTexture__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__SubmapTexture__Sequence__fini(cartographer_ros_msgs__msg__SubmapTexture__Sequence * array)
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
      cartographer_ros_msgs__msg__SubmapTexture__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__SubmapTexture__Sequence *
cartographer_ros_msgs__msg__SubmapTexture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapTexture__Sequence * array = (cartographer_ros_msgs__msg__SubmapTexture__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SubmapTexture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__SubmapTexture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__SubmapTexture__Sequence__destroy(cartographer_ros_msgs__msg__SubmapTexture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__SubmapTexture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__SubmapTexture__Sequence__are_equal(const cartographer_ros_msgs__msg__SubmapTexture__Sequence * lhs, const cartographer_ros_msgs__msg__SubmapTexture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__SubmapTexture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SubmapTexture__Sequence__copy(
  const cartographer_ros_msgs__msg__SubmapTexture__Sequence * input,
  cartographer_ros_msgs__msg__SubmapTexture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__SubmapTexture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__SubmapTexture * data =
      (cartographer_ros_msgs__msg__SubmapTexture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__SubmapTexture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__SubmapTexture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__SubmapTexture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
