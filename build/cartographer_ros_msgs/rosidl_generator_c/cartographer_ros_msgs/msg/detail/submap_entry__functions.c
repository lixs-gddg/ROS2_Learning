// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/submap_entry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cartographer_ros_msgs__msg__SubmapEntry__init(cartographer_ros_msgs__msg__SubmapEntry * msg)
{
  if (!msg) {
    return false;
  }
  // trajectory_id
  // submap_index
  // submap_version
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    cartographer_ros_msgs__msg__SubmapEntry__fini(msg);
    return false;
  }
  // is_frozen
  return true;
}

void
cartographer_ros_msgs__msg__SubmapEntry__fini(cartographer_ros_msgs__msg__SubmapEntry * msg)
{
  if (!msg) {
    return;
  }
  // trajectory_id
  // submap_index
  // submap_version
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // is_frozen
}

bool
cartographer_ros_msgs__msg__SubmapEntry__are_equal(const cartographer_ros_msgs__msg__SubmapEntry * lhs, const cartographer_ros_msgs__msg__SubmapEntry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trajectory_id
  if (lhs->trajectory_id != rhs->trajectory_id) {
    return false;
  }
  // submap_index
  if (lhs->submap_index != rhs->submap_index) {
    return false;
  }
  // submap_version
  if (lhs->submap_version != rhs->submap_version) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // is_frozen
  if (lhs->is_frozen != rhs->is_frozen) {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SubmapEntry__copy(
  const cartographer_ros_msgs__msg__SubmapEntry * input,
  cartographer_ros_msgs__msg__SubmapEntry * output)
{
  if (!input || !output) {
    return false;
  }
  // trajectory_id
  output->trajectory_id = input->trajectory_id;
  // submap_index
  output->submap_index = input->submap_index;
  // submap_version
  output->submap_version = input->submap_version;
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // is_frozen
  output->is_frozen = input->is_frozen;
  return true;
}

cartographer_ros_msgs__msg__SubmapEntry *
cartographer_ros_msgs__msg__SubmapEntry__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapEntry * msg = (cartographer_ros_msgs__msg__SubmapEntry *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SubmapEntry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__SubmapEntry));
  bool success = cartographer_ros_msgs__msg__SubmapEntry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__SubmapEntry__destroy(cartographer_ros_msgs__msg__SubmapEntry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__SubmapEntry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__SubmapEntry__Sequence__init(cartographer_ros_msgs__msg__SubmapEntry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapEntry * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__SubmapEntry *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__SubmapEntry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__SubmapEntry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__SubmapEntry__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__SubmapEntry__Sequence__fini(cartographer_ros_msgs__msg__SubmapEntry__Sequence * array)
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
      cartographer_ros_msgs__msg__SubmapEntry__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__SubmapEntry__Sequence *
cartographer_ros_msgs__msg__SubmapEntry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__SubmapEntry__Sequence * array = (cartographer_ros_msgs__msg__SubmapEntry__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__SubmapEntry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__SubmapEntry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__SubmapEntry__Sequence__destroy(cartographer_ros_msgs__msg__SubmapEntry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__SubmapEntry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__SubmapEntry__Sequence__are_equal(const cartographer_ros_msgs__msg__SubmapEntry__Sequence * lhs, const cartographer_ros_msgs__msg__SubmapEntry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__SubmapEntry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__SubmapEntry__Sequence__copy(
  const cartographer_ros_msgs__msg__SubmapEntry__Sequence * input,
  cartographer_ros_msgs__msg__SubmapEntry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__SubmapEntry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__SubmapEntry * data =
      (cartographer_ros_msgs__msg__SubmapEntry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__SubmapEntry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__SubmapEntry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__SubmapEntry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
