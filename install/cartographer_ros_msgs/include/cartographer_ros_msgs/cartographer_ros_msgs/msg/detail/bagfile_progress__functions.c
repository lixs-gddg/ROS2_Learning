// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/BagfileProgress.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/bagfile_progress__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `current_bagfile_name`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__BagfileProgress__init(cartographer_ros_msgs__msg__BagfileProgress * msg)
{
  if (!msg) {
    return false;
  }
  // current_bagfile_name
  if (!rosidl_runtime_c__String__init(&msg->current_bagfile_name)) {
    cartographer_ros_msgs__msg__BagfileProgress__fini(msg);
    return false;
  }
  // current_bagfile_id
  // total_bagfiles
  // total_messages
  // processed_messages
  // total_seconds
  // processed_seconds
  return true;
}

void
cartographer_ros_msgs__msg__BagfileProgress__fini(cartographer_ros_msgs__msg__BagfileProgress * msg)
{
  if (!msg) {
    return;
  }
  // current_bagfile_name
  rosidl_runtime_c__String__fini(&msg->current_bagfile_name);
  // current_bagfile_id
  // total_bagfiles
  // total_messages
  // processed_messages
  // total_seconds
  // processed_seconds
}

bool
cartographer_ros_msgs__msg__BagfileProgress__are_equal(const cartographer_ros_msgs__msg__BagfileProgress * lhs, const cartographer_ros_msgs__msg__BagfileProgress * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_bagfile_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->current_bagfile_name), &(rhs->current_bagfile_name)))
  {
    return false;
  }
  // current_bagfile_id
  if (lhs->current_bagfile_id != rhs->current_bagfile_id) {
    return false;
  }
  // total_bagfiles
  if (lhs->total_bagfiles != rhs->total_bagfiles) {
    return false;
  }
  // total_messages
  if (lhs->total_messages != rhs->total_messages) {
    return false;
  }
  // processed_messages
  if (lhs->processed_messages != rhs->processed_messages) {
    return false;
  }
  // total_seconds
  if (lhs->total_seconds != rhs->total_seconds) {
    return false;
  }
  // processed_seconds
  if (lhs->processed_seconds != rhs->processed_seconds) {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__BagfileProgress__copy(
  const cartographer_ros_msgs__msg__BagfileProgress * input,
  cartographer_ros_msgs__msg__BagfileProgress * output)
{
  if (!input || !output) {
    return false;
  }
  // current_bagfile_name
  if (!rosidl_runtime_c__String__copy(
      &(input->current_bagfile_name), &(output->current_bagfile_name)))
  {
    return false;
  }
  // current_bagfile_id
  output->current_bagfile_id = input->current_bagfile_id;
  // total_bagfiles
  output->total_bagfiles = input->total_bagfiles;
  // total_messages
  output->total_messages = input->total_messages;
  // processed_messages
  output->processed_messages = input->processed_messages;
  // total_seconds
  output->total_seconds = input->total_seconds;
  // processed_seconds
  output->processed_seconds = input->processed_seconds;
  return true;
}

cartographer_ros_msgs__msg__BagfileProgress *
cartographer_ros_msgs__msg__BagfileProgress__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__BagfileProgress * msg = (cartographer_ros_msgs__msg__BagfileProgress *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__BagfileProgress), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__BagfileProgress));
  bool success = cartographer_ros_msgs__msg__BagfileProgress__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__BagfileProgress__destroy(cartographer_ros_msgs__msg__BagfileProgress * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__BagfileProgress__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__BagfileProgress__Sequence__init(cartographer_ros_msgs__msg__BagfileProgress__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__BagfileProgress * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__BagfileProgress *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__BagfileProgress), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__BagfileProgress__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__BagfileProgress__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__BagfileProgress__Sequence__fini(cartographer_ros_msgs__msg__BagfileProgress__Sequence * array)
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
      cartographer_ros_msgs__msg__BagfileProgress__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__BagfileProgress__Sequence *
cartographer_ros_msgs__msg__BagfileProgress__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__BagfileProgress__Sequence * array = (cartographer_ros_msgs__msg__BagfileProgress__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__BagfileProgress__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__BagfileProgress__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__BagfileProgress__Sequence__destroy(cartographer_ros_msgs__msg__BagfileProgress__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__BagfileProgress__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__BagfileProgress__Sequence__are_equal(const cartographer_ros_msgs__msg__BagfileProgress__Sequence * lhs, const cartographer_ros_msgs__msg__BagfileProgress__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__BagfileProgress__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__BagfileProgress__Sequence__copy(
  const cartographer_ros_msgs__msg__BagfileProgress__Sequence * input,
  cartographer_ros_msgs__msg__BagfileProgress__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__BagfileProgress);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__BagfileProgress * data =
      (cartographer_ros_msgs__msg__BagfileProgress *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__BagfileProgress__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__BagfileProgress__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__BagfileProgress__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
