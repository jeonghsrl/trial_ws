# generated from rosidl_generator_py/resource/_idl.py.em
# with input from trial_interface:srv/XYZ.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_XYZ_Request(type):
    """Metaclass of message 'XYZ_Request'."""

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
            module = import_type_support('trial_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trial_interface.srv.XYZ_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__xyz__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__xyz__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__xyz__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__xyz__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__xyz__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XYZ_Request(metaclass=Metaclass_XYZ_Request):
    """Message class 'XYZ_Request'."""

    __slots__ = [
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'x': 'int64',
        'y': 'int64',
        'z': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', int())
        self.y = kwargs.get('y', int())
        self.z = kwargs.get('z', int())

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
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'x' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'x' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._x = value

    @property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'y' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'y' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._y = value

    @property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'z' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._z = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_XYZ_Response(type):
    """Metaclass of message 'XYZ_Response'."""

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
            module = import_type_support('trial_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trial_interface.srv.XYZ_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__xyz__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__xyz__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__xyz__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__xyz__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__xyz__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class XYZ_Response(metaclass=Metaclass_XYZ_Response):
    """Message class 'XYZ_Response'."""

    __slots__ = [
        '_sqsum',
    ]

    _fields_and_field_types = {
        'sqsum': 'int64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sqsum = kwargs.get('sqsum', int())

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
        if self.sqsum != other.sqsum:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def sqsum(self):
        """Message field 'sqsum'."""
        return self._sqsum

    @sqsum.setter
    def sqsum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sqsum' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'sqsum' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._sqsum = value


class Metaclass_XYZ(type):
    """Metaclass of service 'XYZ'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('trial_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'trial_interface.srv.XYZ')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__xyz

            from trial_interface.srv import _xyz
            if _xyz.Metaclass_XYZ_Request._TYPE_SUPPORT is None:
                _xyz.Metaclass_XYZ_Request.__import_type_support__()
            if _xyz.Metaclass_XYZ_Response._TYPE_SUPPORT is None:
                _xyz.Metaclass_XYZ_Response.__import_type_support__()


class XYZ(metaclass=Metaclass_XYZ):
    from trial_interface.srv._xyz import XYZ_Request as Request
    from trial_interface.srv._xyz import XYZ_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
