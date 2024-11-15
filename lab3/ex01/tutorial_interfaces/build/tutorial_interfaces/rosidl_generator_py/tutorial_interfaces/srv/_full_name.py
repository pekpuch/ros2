# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tutorial_interfaces:srv/FullName.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FullName_Request(type):
    """Metaclass of message 'FullName_Request'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.FullName_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__full_name__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__full_name__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__full_name__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__full_name__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__full_name__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FullName_Request(metaclass=Metaclass_FullName_Request):
    """Message class 'FullName_Request'."""

    __slots__ = [
        '_last_name',
        '_first_name',
        '_patronymic',
    ]

    _fields_and_field_types = {
        'last_name': 'string',
        'first_name': 'string',
        'patronymic': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.last_name = kwargs.get('last_name', str())
        self.first_name = kwargs.get('first_name', str())
        self.patronymic = kwargs.get('patronymic', str())

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
        if self.last_name != other.last_name:
            return False
        if self.first_name != other.first_name:
            return False
        if self.patronymic != other.patronymic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def last_name(self):
        """Message field 'last_name'."""
        return self._last_name

    @last_name.setter
    def last_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_name' field must be of type 'str'"
        self._last_name = value

    @builtins.property
    def first_name(self):
        """Message field 'first_name'."""
        return self._first_name

    @first_name.setter
    def first_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'first_name' field must be of type 'str'"
        self._first_name = value

    @builtins.property
    def patronymic(self):
        """Message field 'patronymic'."""
        return self._patronymic

    @patronymic.setter
    def patronymic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'patronymic' field must be of type 'str'"
        self._patronymic = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_FullName_Response(type):
    """Metaclass of message 'FullName_Response'."""

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
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.FullName_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__full_name__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__full_name__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__full_name__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__full_name__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__full_name__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FullName_Response(metaclass=Metaclass_FullName_Response):
    """Message class 'FullName_Response'."""

    __slots__ = [
        '_full_name',
    ]

    _fields_and_field_types = {
        'full_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.full_name = kwargs.get('full_name', str())

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
        if self.full_name != other.full_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def full_name(self):
        """Message field 'full_name'."""
        return self._full_name

    @full_name.setter
    def full_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'full_name' field must be of type 'str'"
        self._full_name = value


class Metaclass_FullName(type):
    """Metaclass of service 'FullName'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tutorial_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tutorial_interfaces.srv.FullName')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__full_name

            from tutorial_interfaces.srv import _full_name
            if _full_name.Metaclass_FullName_Request._TYPE_SUPPORT is None:
                _full_name.Metaclass_FullName_Request.__import_type_support__()
            if _full_name.Metaclass_FullName_Response._TYPE_SUPPORT is None:
                _full_name.Metaclass_FullName_Response.__import_type_support__()


class FullName(metaclass=Metaclass_FullName):
    from tutorial_interfaces.srv._full_name import FullName_Request as Request
    from tutorial_interfaces.srv._full_name import FullName_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
