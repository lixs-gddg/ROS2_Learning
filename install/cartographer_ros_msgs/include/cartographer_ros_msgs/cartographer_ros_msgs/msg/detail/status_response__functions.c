// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
cartographer_ros_msgs__msg__StatusResponse__init(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  if (!msg) {
    return false;
  }
  // code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    cartographer_ros_msgs__msg__StatusResponse__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__StatusResponse__fini(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  if (!msg) {
    return;
  }
  // code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
cartographer_ros_msgs__msg__StatusResponse__are_equal(const cartographer_ros_msgs__msg__StatusResponse * lhs, const cartographer_ros_msgs__msg__StatusResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // code
  if (lhs->code != rhs->code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__StatusResponse__copy(
  const cartographer_ros_msgs__msg__StatusResponse * input,
  cartographer_ros_msgs__msg__StatusResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // code
  output->code = input->code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__StatusResponse *
cartographer_ros_msgs__msg__StatusResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__StatusResponse * msg = (cartographer_ros_msgs__msg__StatusResponse *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__StatusResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__StatusResponse));
  bool success = cartographer_ros_msgs__msg__StatusResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__StatusResponse__destroy(cartographer_ros_msgs__msg__StatusResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__StatusResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__init(cartographer_ros_msgs__msg__StatusResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__StatusResponse * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__StatusResponse *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__StatusResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__StatusResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__StatusResponse__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__StatusResponse__Sequence__fini(cartographer_ros_msgs__msg__StatusResponse__Sequence * array)
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
      cartographer_ros_msgs__msg__StatusResponse__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__StatusResponse__Sequence *
cartographer_ros_msgs__msg__StatusResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__StatusResponse__Sequence * array = (cartographer_ros_msgs__msg__StatusResponse__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__StatusResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__StatusResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__StatusResponse__Sequence__destroy(cartographer_ros_msgs__msg__StatusResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__StatusResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__are_equal(const cartographer_ros_msgs__msg__StatusResponse__Sequence * lhs, const cartographer_ros_msgs__msg__StatusResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__StatusResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__StatusResponse__Sequence__copy(
  const cartographer_ros_msgs__msg__StatusResponse__Sequence * input,
  cartographer_ros_msgs__msg__StatusResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__StatusResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__StatusResponse * data =
      (cartographer_ros_msgs__msg__StatusResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__StatusResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__StatusResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__StatusResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
