// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/MetricFamily.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/metric_family__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"
// Member `metrics`
#include "cartographer_ros_msgs/msg/detail/metric__functions.h"

bool
cartographer_ros_msgs__msg__MetricFamily__init(cartographer_ros_msgs__msg__MetricFamily * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    cartographer_ros_msgs__msg__MetricFamily__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    cartographer_ros_msgs__msg__MetricFamily__fini(msg);
    return false;
  }
  // metrics
  if (!cartographer_ros_msgs__msg__Metric__Sequence__init(&msg->metrics, 0)) {
    cartographer_ros_msgs__msg__MetricFamily__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__MetricFamily__fini(cartographer_ros_msgs__msg__MetricFamily * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // metrics
  cartographer_ros_msgs__msg__Metric__Sequence__fini(&msg->metrics);
}

bool
cartographer_ros_msgs__msg__MetricFamily__are_equal(const cartographer_ros_msgs__msg__MetricFamily * lhs, const cartographer_ros_msgs__msg__MetricFamily * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // metrics
  if (!cartographer_ros_msgs__msg__Metric__Sequence__are_equal(
      &(lhs->metrics), &(rhs->metrics)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__MetricFamily__copy(
  const cartographer_ros_msgs__msg__MetricFamily * input,
  cartographer_ros_msgs__msg__MetricFamily * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // metrics
  if (!cartographer_ros_msgs__msg__Metric__Sequence__copy(
      &(input->metrics), &(output->metrics)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__MetricFamily *
cartographer_ros_msgs__msg__MetricFamily__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__MetricFamily * msg = (cartographer_ros_msgs__msg__MetricFamily *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__MetricFamily), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__MetricFamily));
  bool success = cartographer_ros_msgs__msg__MetricFamily__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__MetricFamily__destroy(cartographer_ros_msgs__msg__MetricFamily * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__MetricFamily__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__MetricFamily__Sequence__init(cartographer_ros_msgs__msg__MetricFamily__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__MetricFamily * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__MetricFamily *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__MetricFamily), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__MetricFamily__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__MetricFamily__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__MetricFamily__Sequence__fini(cartographer_ros_msgs__msg__MetricFamily__Sequence * array)
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
      cartographer_ros_msgs__msg__MetricFamily__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__MetricFamily__Sequence *
cartographer_ros_msgs__msg__MetricFamily__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__MetricFamily__Sequence * array = (cartographer_ros_msgs__msg__MetricFamily__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__MetricFamily__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__MetricFamily__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__MetricFamily__Sequence__destroy(cartographer_ros_msgs__msg__MetricFamily__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__MetricFamily__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__MetricFamily__Sequence__are_equal(const cartographer_ros_msgs__msg__MetricFamily__Sequence * lhs, const cartographer_ros_msgs__msg__MetricFamily__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__MetricFamily__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__MetricFamily__Sequence__copy(
  const cartographer_ros_msgs__msg__MetricFamily__Sequence * input,
  cartographer_ros_msgs__msg__MetricFamily__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__MetricFamily);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__MetricFamily * data =
      (cartographer_ros_msgs__msg__MetricFamily *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__MetricFamily__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__MetricFamily__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__MetricFamily__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
