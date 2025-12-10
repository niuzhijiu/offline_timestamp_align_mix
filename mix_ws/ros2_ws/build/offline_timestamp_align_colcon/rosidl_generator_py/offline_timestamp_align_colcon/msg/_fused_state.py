# generated from rosidl_generator_py/resource/_idl.py.em
# with input from offline_timestamp_align_colcon:msg/FusedState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'imu_timestamp'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FusedState(type):
    """Metaclass of message 'FusedState'."""

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
            module = import_type_support('offline_timestamp_align_colcon')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'offline_timestamp_align_colcon.msg.FusedState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__fused_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__fused_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__fused_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__fused_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__fused_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sensor_msgs.msg import Image
            if Image.__class__._TYPE_SUPPORT is None:
                Image.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FusedState(metaclass=Metaclass_FusedState):
    """Message class 'FusedState'."""

    __slots__ = [
        '_timestamp',
        '_image_filename',
        '_image',
        '_angular_velocity',
        '_linear_acceleration',
        '_imu_timestamp',
    ]

    _fields_and_field_types = {
        'timestamp': 'builtin_interfaces/Time',
        'image_filename': 'string',
        'image': 'sensor_msgs/Image',
        'angular_velocity': 'sequence<geometry_msgs/Vector3>',
        'linear_acceleration': 'sequence<geometry_msgs/Vector3>',
        'imu_timestamp': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'Image'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.timestamp = kwargs.get('timestamp', Time())
        self.image_filename = kwargs.get('image_filename', str())
        from sensor_msgs.msg import Image
        self.image = kwargs.get('image', Image())
        self.angular_velocity = kwargs.get('angular_velocity', [])
        self.linear_acceleration = kwargs.get('linear_acceleration', [])
        self.imu_timestamp = array.array('d', kwargs.get('imu_timestamp', []))

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
        if self.timestamp != other.timestamp:
            return False
        if self.image_filename != other.image_filename:
            return False
        if self.image != other.image:
            return False
        if self.angular_velocity != other.angular_velocity:
            return False
        if self.linear_acceleration != other.linear_acceleration:
            return False
        if self.imu_timestamp != other.imu_timestamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'timestamp' field must be a sub message of type 'Time'"
        self._timestamp = value

    @property
    def image_filename(self):
        """Message field 'image_filename'."""
        return self._image_filename

    @image_filename.setter
    def image_filename(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'image_filename' field must be of type 'str'"
        self._image_filename = value

    @property
    def image(self):
        """Message field 'image'."""
        return self._image

    @image.setter
    def image(self, value):
        if __debug__:
            from sensor_msgs.msg import Image
            assert \
                isinstance(value, Image), \
                "The 'image' field must be a sub message of type 'Image'"
        self._image = value

    @property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'angular_velocity' field must be a set or sequence and each value of type 'Vector3'"
        self._angular_velocity = value

    @property
    def linear_acceleration(self):
        """Message field 'linear_acceleration'."""
        return self._linear_acceleration

    @linear_acceleration.setter
    def linear_acceleration(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'linear_acceleration' field must be a set or sequence and each value of type 'Vector3'"
        self._linear_acceleration = value

    @property
    def imu_timestamp(self):
        """Message field 'imu_timestamp'."""
        return self._imu_timestamp

    @imu_timestamp.setter
    def imu_timestamp(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'imu_timestamp' array.array() must have the type code of 'd'"
            self._imu_timestamp = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'imu_timestamp' field must be a set or sequence and each value of type 'float'"
        self._imu_timestamp = array.array('d', value)
