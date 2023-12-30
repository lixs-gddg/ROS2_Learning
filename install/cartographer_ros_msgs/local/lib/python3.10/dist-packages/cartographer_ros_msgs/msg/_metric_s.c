// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from cartographer_ros_msgs:msg/Metric.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/detail/metric__struct.h"
#include "cartographer_ros_msgs/msg/detail/metric__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "cartographer_ros_msgs/msg/detail/histogram_bucket__functions.h"
#include "cartographer_ros_msgs/msg/detail/metric_label__functions.h"
// end nested array functions include
bool cartographer_ros_msgs__msg__metric_label__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartographer_ros_msgs__msg__metric_label__convert_to_py(void * raw_ros_message);
bool cartographer_ros_msgs__msg__histogram_bucket__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * cartographer_ros_msgs__msg__histogram_bucket__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool cartographer_ros_msgs__msg__metric__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[41];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("cartographer_ros_msgs.msg._metric.Metric", full_classname_dest, 40) == 0);
  }
  cartographer_ros_msgs__msg__Metric * ros_message = _ros_message;
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // labels
    PyObject * field = PyObject_GetAttrString(_pymsg, "labels");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'labels'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cartographer_ros_msgs__msg__MetricLabel__Sequence__init(&(ros_message->labels), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cartographer_ros_msgs__msg__MetricLabel__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cartographer_ros_msgs__msg__MetricLabel * dest = ros_message->labels.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cartographer_ros_msgs__msg__metric_label__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->value = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // counts_by_bucket
    PyObject * field = PyObject_GetAttrString(_pymsg, "counts_by_bucket");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'counts_by_bucket'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!cartographer_ros_msgs__msg__HistogramBucket__Sequence__init(&(ros_message->counts_by_bucket), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create cartographer_ros_msgs__msg__HistogramBucket__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    cartographer_ros_msgs__msg__HistogramBucket * dest = ros_message->counts_by_bucket.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!cartographer_ros_msgs__msg__histogram_bucket__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * cartographer_ros_msgs__msg__metric__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Metric */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("cartographer_ros_msgs.msg._metric");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Metric");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  cartographer_ros_msgs__msg__Metric * ros_message = (cartographer_ros_msgs__msg__Metric *)raw_ros_message;
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // labels
    PyObject * field = NULL;
    size_t size = ros_message->labels.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cartographer_ros_msgs__msg__MetricLabel * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->labels.data[i]);
      PyObject * pyitem = cartographer_ros_msgs__msg__metric_label__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "labels", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // counts_by_bucket
    PyObject * field = NULL;
    size_t size = ros_message->counts_by_bucket.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    cartographer_ros_msgs__msg__HistogramBucket * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->counts_by_bucket.data[i]);
      PyObject * pyitem = cartographer_ros_msgs__msg__histogram_bucket__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "counts_by_bucket", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
