# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cartographer_ros_msgs:msg/BagfileProgress.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BagfileProgress(type):
    """Metaclass of message 'BagfileProgress'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'cartographer_ros_msgs.msg.BagfileProgress')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bagfile_progress
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bagfile_progress
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bagfile_progress
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bagfile_progress
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bagfile_progress

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BagfileProgress(metaclass=Metaclass_BagfileProgress):
    """Message class 'BagfileProgress'."""

    __slots__ = [
        '_current_bagfile_name',
        '_current_bagfile_id',
        '_total_bagfiles',
        '_total_messages',
        '_processed_messages',
        '_total_seconds',
        '_processed_seconds',
    ]

    _fields_and_field_types = {
        'current_bagfile_name': 'string',
        'current_bagfile_id': 'uint32',
        'total_bagfiles': 'uint32',
        'total_messages': 'uint32',
        'processed_messages': 'uint32',
        'total_seconds': 'float',
        'processed_seconds': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.current_bagfile_name = kwargs.get('current_bagfile_name', str())
        self.current_bagfile_id = kwargs.get('current_bagfile_id', int())
        self.total_bagfiles = kwargs.get('total_bagfiles', int())
        self.total_messages = kwargs.get('total_messages', int())
        self.processed_messages = kwargs.get('processed_messages', int())
        self.total_seconds = kwargs.get('total_seconds', float())
        self.processed_seconds = kwargs.get('processed_seconds', float())

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
        if self.current_bagfile_name != other.current_bagfile_name:
            return False
        if self.current_bagfile_id != other.current_bagfile_id:
            return False
        if self.total_bagfiles != other.total_bagfiles:
            return False
        if self.total_messages != other.total_messages:
            return False
        if self.processed_messages != other.processed_messages:
            return False
        if self.total_seconds != other.total_seconds:
            return False
        if self.processed_seconds != other.processed_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_bagfile_name(self):
        """Message field 'current_bagfile_name'."""
        return self._current_bagfile_name

    @current_bagfile_name.setter
    def current_bagfile_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'current_bagfile_name' field must be of type 'str'"
        self._current_bagfile_name = value

    @builtins.property
    def current_bagfile_id(self):
        """Message field 'current_bagfile_id'."""
        return self._current_bagfile_id

    @current_bagfile_id.setter
    def current_bagfile_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_bagfile_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'current_bagfile_id' field must be an unsigned integer in [0, 4294967295]"
        self._current_bagfile_id = value

    @builtins.property
    def total_bagfiles(self):
        """Message field 'total_bagfiles'."""
        return self._total_bagfiles

    @total_bagfiles.setter
    def total_bagfiles(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_bagfiles' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_bagfiles' field must be an unsigned integer in [0, 4294967295]"
        self._total_bagfiles = value

    @builtins.property
    def total_messages(self):
        """Message field 'total_messages'."""
        return self._total_messages

    @total_messages.setter
    def total_messages(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'total_messages' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'total_messages' field must be an unsigned integer in [0, 4294967295]"
        self._total_messages = value

    @builtins.property
    def processed_messages(self):
        """Message field 'processed_messages'."""
        return self._processed_messages

    @processed_messages.setter
    def processed_messages(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'processed_messages' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'processed_messages' field must be an unsigned integer in [0, 4294967295]"
        self._processed_messages = value

    @builtins.property
    def total_seconds(self):
        """Message field 'total_seconds'."""
        return self._total_seconds

    @total_seconds.setter
    def total_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_seconds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_seconds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_seconds = value

    @builtins.property
    def processed_seconds(self):
        """Message field 'processed_seconds'."""
        return self._processed_seconds

    @processed_seconds.setter
    def processed_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'processed_seconds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'processed_seconds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._processed_seconds = value
