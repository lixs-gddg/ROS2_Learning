// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/detail/metric__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `labels`
#include "cartographer_ros_msgs/msg/detail/metric_label__functions.h"
// Member `counts_by_bucket`
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__functions.h"

bool
cartographer_ros_msgs__msg__Metric__init(cartographer_ros_msgs__msg__Metric * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // labels
  if (!cartographer_ros_msgs__msg__MetricLabel__Sequence__init(&msg->labels, 0)) {
    cartographer_ros_msgs__msg__Metric__fini(msg);
    return false;
  }
  // value
  // counts_by_bucket
  if (!cartographer_ros_msgs__msg__HistogramBucket__Sequence__init(&msg->counts_by_bucket, 0)) {
    cartographer_ros_msgs__msg__Metric__fini(msg);
    return false;
  }
  return true;
}

void
cartographer_ros_msgs__msg__Metric__fini(cartographer_ros_msgs__msg__Metric * msg)
{
  if (!msg) {
    return;
  }
  // type
  // labels
  cartographer_ros_msgs__msg__MetricLabel__Sequence__fini(&msg->labels);
  // value
  // counts_by_bucket
  cartographer_ros_msgs__msg__HistogramBucket__Sequence__fini(&msg->counts_by_bucket);
}

bool
cartographer_ros_msgs__msg__Metric__are_equal(const cartographer_ros_msgs__msg__Metric * lhs, const cartographer_ros_msgs__msg__Metric * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // labels
  if (!cartographer_ros_msgs__msg__MetricLabel__Sequence__are_equal(
      &(lhs->labels), &(rhs->labels)))
  {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // counts_by_bucket
  if (!cartographer_ros_msgs__msg__HistogramBucket__Sequence__are_equal(
      &(lhs->counts_by_bucket), &(rhs->counts_by_bucket)))
  {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__msg__Metric__copy(
  const cartographer_ros_msgs__msg__Metric * input,
  cartographer_ros_msgs__msg__Metric * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // labels
  if (!cartographer_ros_msgs__msg__MetricLabel__Sequence__copy(
      &(input->labels), &(output->labels)))
  {
    return false;
  }
  // value
  output->value = input->value;
  // counts_by_bucket
  if (!cartographer_ros_msgs__msg__HistogramBucket__Sequence__copy(
      &(input->counts_by_bucket), &(output->counts_by_bucket)))
  {
    return false;
  }
  return true;
}

cartographer_ros_msgs__msg__Metric *
cartographer_ros_msgs__msg__Metric__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__Metric * msg = (cartographer_ros_msgs__msg__Metric *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__Metric), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__msg__Metric));
  bool success = cartographer_ros_msgs__msg__Metric__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__msg__Metric__destroy(cartographer_ros_msgs__msg__Metric * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__msg__Metric__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__msg__Metric__Sequence__init(cartographer_ros_msgs__msg__Metric__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__Metric * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__msg__Metric *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__msg__Metric), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__msg__Metric__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__msg__Metric__fini(&data[i - 1]);
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
cartographer_ros_msgs__msg__Metric__Sequence__fini(cartographer_ros_msgs__msg__Metric__Sequence * array)
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
      cartographer_ros_msgs__msg__Metric__fini(&array->data[i]);
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

cartographer_ros_msgs__msg__Metric__Sequence *
cartographer_ros_msgs__msg__Metric__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__msg__Metric__Sequence * array = (cartographer_ros_msgs__msg__Metric__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__msg__Metric__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__msg__Metric__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__msg__Metric__Sequence__destroy(cartographer_ros_msgs__msg__Metric__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__msg__Metric__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__msg__Metric__Sequence__are_equal(const cartographer_ros_msgs__msg__Metric__Sequence * lhs, const cartographer_ros_msgs__msg__Metric__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__msg__Metric__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__msg__Metric__Sequence__copy(
  const cartographer_ros_msgs__msg__Metric__Sequence * input,
  cartographer_ros_msgs__msg__Metric__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__msg__Metric);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__msg__Metric * data =
      (cartographer_ros_msgs__msg__Metric *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__msg__Metric__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__msg__Metric__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__msg__Metric__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
