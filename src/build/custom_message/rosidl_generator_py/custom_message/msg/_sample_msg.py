# generated from rosidl_generator_py/resource/_idl.py.em
# with input from custom_message:msg/SampleMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SampleMsg(type):
    """Metaclass of message 'SampleMsg'."""

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
            module = import_type_support('custom_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'custom_message.msg.SampleMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sample_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sample_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sample_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sample_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sample_msg

            from std_msgs.msg import String
            if String.__class__._TYPE_SUPPORT is None:
                String.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SampleMsg(metaclass=Metaclass_SampleMsg):
    """Message class 'SampleMsg'."""

    __slots__ = [
        '_my_string',
        '_my_num',
    ]

    _fields_and_field_types = {
        'my_string': 'std_msgs/String',
        'my_num': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'String'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import String
        self.my_string = kwargs.get('my_string', String())
        self.my_num = kwargs.get('my_num', int())

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
        if self.my_string != other.my_string:
            return False
        if self.my_num != other.my_num:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def my_string(self):
        """Message field 'my_string'."""
        return self._my_string

    @my_string.setter
    def my_string(self, value):
        if __debug__:
            from std_msgs.msg import String
            assert \
                isinstance(value, String), \
                "The 'my_string' field must be a sub message of type 'String'"
        self._my_string = value

    @builtins.property
    def my_num(self):
        """Message field 'my_num'."""
        return self._my_num

    @my_num.setter
    def my_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'my_num' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'my_num' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._my_num = value
