# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/Metric.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Metric(type):
    """Metaclass of message 'Metric'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_COUNTER': 0,
        'TYPE_GAUGE': 1,
        'TYPE_HISTOGRAM': 2,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('cartographer_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cartographer_ros_msgs.msg.Metric')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__metric
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__metric
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__metric
            cls._TYPE_SUPPORT = module.type_support_msg__msg__metric
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__metric

            from cartographer_ros_msgs.msg import HistogramBucket
            if HistogramBucket.__class__._TYPE_SUPPORT is None:
                HistogramBucket.__class__.__import_type_support__()

            from cartographer_ros_msgs.msg import MetricLabel
            if MetricLabel.__class__._TYPE_SUPPORT is None:
                MetricLabel.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_COUNTER': cls.__constants['TYPE_COUNTER'],
            'TYPE_GAUGE': cls.__constants['TYPE_GAUGE'],
            'TYPE_HISTOGRAM': cls.__constants['TYPE_HISTOGRAM'],
        }

    @property
    def TYPE_COUNTER(self):
        """Message constant 'TYPE_COUNTER'."""
        return Metaclass_Metric.__constants['TYPE_COUNTER']

    @property
    def TYPE_GAUGE(self):
        """Message constant 'TYPE_GAUGE'."""
        return Metaclass_Metric.__constants['TYPE_GAUGE']

    @property
    def TYPE_HISTOGRAM(self):
        """Message constant 'TYPE_HISTOGRAM'."""
        return Metaclass_Metric.__constants['TYPE_HISTOGRAM']


class Metric(metaclass=Metaclass_Metric):
    """
    Message class 'Metric'.

    Constants:
      TYPE_COUNTER
      TYPE_GAUGE
      TYPE_HISTOGRAM
    """

    __slots__ = [
        '_type',
        '_labels',
        '_value',
        '_counts_by_bucket',
    ]

    _fields_and_field_types = {
        'type': 'uint8',
        'labels': 'sequence<cartographer_ros_msgs/MetricLabel>',
        'value': 'double',
        'counts_by_bucket': 'sequence<cartographer_ros_msgs/HistogramBucket>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'MetricLabel')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['cartographer_ros_msgs', 'msg'], 'HistogramBucket')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.type = kwargs.get('type', int())
        self.labels = kwargs.get('labels', [])
        self.value = kwargs.get('value', float())
        self.counts_by_bucket = kwargs.get('counts_by_bucket', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.type != other.type:
            return False
        if self.labels != other.labels:
            return False
        if self.value != other.value:
            return False
        if self.counts_by_bucket != other.counts_by_bucket:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def labels(self):
        """Message field 'labels'."""
        return self._labels

    @labels.setter
    def labels(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import MetricLabel
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, MetricLabel) for v in value) and
                 True), \
                "The 'labels' field must be a set or sequence and each value of type 'MetricLabel'"
        self._labels = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value = value

    @builtins.property
    def counts_by_bucket(self):
        """Message field 'counts_by_bucket'."""
        return self._counts_by_bucket

    @counts_by_bucket.setter
    def counts_by_bucket(self, value):
        if __debug__:
            from cartographer_ros_msgs.msg import HistogramBucket
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, HistogramBucket) for v in value) and
                 True), \
                "The 'counts_by_bucket' field must be a set or sequence and each value of type 'HistogramBucket'"
        self._counts_by_bucket = value
