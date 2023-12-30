// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/srv/detail/start_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `configuration_directory`
// Member `configuration_basename`
#include "rosidl_runtime_c/string_functions.h"
// Member `initial_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
cartographer_ros_msgs__srv__StartTrajectory_Request__init(cartographer_ros_msgs__srv__StartTrajectory_Request * msg)
{
  if (!msg) {
    return false;
  }
  // configuration_directory
  if (!rosidl_runtime_c__String__init(&msg->configuration_directory)) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__fini(msg);
    return false;
  }
  // configuration_basename
  if (!rosidl_runtime_c__String__init(&msg->configuration_basename)) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__fini(msg);
    return false;
  }
  // use_initial_pose
  // initial_pose
  if (!geometry_msgs__msg__Pose__init(&msg->initial_pose)) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__fini(msg);
    return false;
  }
  // relative_to_trajectory_id
  return true;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Request__fini(cartographer_ros_msgs__srv__StartTrajectory_Request * msg)
{
  if (!msg) {
    return;
  }
  // configuration_directory
  rosidl_runtime_c__String__fini(&msg->configuration_directory);
  // configuration_basename
  rosidl_runtime_c__String__fini(&msg->configuration_basename);
  // use_initial_pose
  // initial_pose
  geometry_msgs__msg__Pose__fini(&msg->initial_pose);
  // relative_to_trajectory_id
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Request__are_equal(const cartographer_ros_msgs__srv__StartTrajectory_Request * lhs, const cartographer_ros_msgs__srv__StartTrajectory_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // configuration_directory
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->configuration_directory), &(rhs->configuration_directory)))
  {
    return false;
  }
  // configuration_basename
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->configuration_basename), &(rhs->configuration_basename)))
  {
    return false;
  }
  // use_initial_pose
  if (lhs->use_initial_pose != rhs->use_initial_pose) {
    return false;
  }
  // initial_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->initial_pose), &(rhs->initial_pose)))
  {
    return false;
  }
  // relative_to_trajectory_id
  if (lhs->relative_to_trajectory_id != rhs->relative_to_trajectory_id) {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Request__copy(
  const cartographer_ros_msgs__srv__StartTrajectory_Request * input,
  cartographer_ros_msgs__srv__StartTrajectory_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // configuration_directory
  if (!rosidl_runtime_c__String__copy(
      &(input->configuration_directory), &(output->configuration_directory)))
  {
    return false;
  }
  // configuration_basename
  if (!rosidl_runtime_c__String__copy(
      &(input->configuration_basename), &(output->configuration_basename)))
  {
    return false;
  }
  // use_initial_pose
  output->use_initial_pose = input->use_initial_pose;
  // initial_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->initial_pose), &(output->initial_pose)))
  {
    return false;
  }
  // relative_to_trajectory_id
  output->relative_to_trajectory_id = input->relative_to_trajectory_id;
  return true;
}

cartographer_ros_msgs__srv__StartTrajectory_Request *
cartographer_ros_msgs__srv__StartTrajectory_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Request * msg = (cartographer_ros_msgs__srv__StartTrajectory_Request *)allocator.allocate(sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request));
  bool success = cartographer_ros_msgs__srv__StartTrajectory_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Request__destroy(cartographer_ros_msgs__srv__StartTrajectory_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__init(cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Request * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__srv__StartTrajectory_Request *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__StartTrajectory_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__StartTrajectory_Request__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__fini(cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * array)
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
      cartographer_ros_msgs__srv__StartTrajectory_Request__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence *
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * array = (cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__destroy(cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__are_equal(const cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * lhs, const cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__srv__StartTrajectory_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence__copy(
  const cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * input,
  cartographer_ros_msgs__srv__StartTrajectory_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__srv__StartTrajectory_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__srv__StartTrajectory_Request * data =
      (cartographer_ros_msgs__srv__StartTrajectory_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__srv__StartTrajectory_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__srv__StartTrajectory_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__srv__StartTrajectory_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
#include "cartographer_ros_msgs/msg/detail/status_response__functions.h"

bool
cartographer_ros_msgs__srv__StartTrajectory_Response__init(cartographer_ros_msgs__srv__StartTrajectory_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!cartographer_ros_msgs__msg__StatusResponse__init(&msg->status)) {
    cartographer_ros_msgs__srv__StartTrajectory_Response__fini(msg);
    return false;
  }
  // trajectory_id
  return true;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Response__fini(cartographer_ros_msgs__srv__StartTrajectory_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  cartographer_ros_msgs__msg__StatusResponse__fini(&msg->status);
  // trajectory_id
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Response__are_equal(const cartographer_ros_msgs__srv__StartTrajectory_Response * lhs, const cartographer_ros_msgs__srv__StartTrajectory_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!cartographer_ros_msgs__msg__StatusResponse__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // trajectory_id
  if (lhs->trajectory_id != rhs->trajectory_id) {
    return false;
  }
  return true;
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Response__copy(
  const cartographer_ros_msgs__srv__StartTrajectory_Response * input,
  cartographer_ros_msgs__srv__StartTrajectory_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!cartographer_ros_msgs__msg__StatusResponse__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // trajectory_id
  output->trajectory_id = input->trajectory_id;
  return true;
}

cartographer_ros_msgs__srv__StartTrajectory_Response *
cartographer_ros_msgs__srv__StartTrajectory_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Response * msg = (cartographer_ros_msgs__srv__StartTrajectory_Response *)allocator.allocate(sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response));
  bool success = cartographer_ros_msgs__srv__StartTrajectory_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Response__destroy(cartographer_ros_msgs__srv__StartTrajectory_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cartographer_ros_msgs__srv__StartTrajectory_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__init(cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Response * data = NULL;

  if (size) {
    data = (cartographer_ros_msgs__srv__StartTrajectory_Response *)allocator.zero_allocate(size, sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cartographer_ros_msgs__srv__StartTrajectory_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cartographer_ros_msgs__srv__StartTrajectory_Response__fini(&data[i - 1]);
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
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__fini(cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * array)
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
      cartographer_ros_msgs__srv__StartTrajectory_Response__fini(&array->data[i]);
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

cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence *
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * array = (cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence *)allocator.allocate(sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__destroy(cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__are_equal(const cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * lhs, const cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cartographer_ros_msgs__srv__StartTrajectory_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence__copy(
  const cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * input,
  cartographer_ros_msgs__srv__StartTrajectory_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cartographer_ros_msgs__srv__StartTrajectory_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cartographer_ros_msgs__srv__StartTrajectory_Response * data =
      (cartographer_ros_msgs__srv__StartTrajectory_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cartographer_ros_msgs__srv__StartTrajectory_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cartographer_ros_msgs__srv__StartTrajectory_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cartographer_ros_msgs__srv__StartTrajectory_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
