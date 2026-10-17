# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robot_arm_interfaces:action/LinearMove.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
# Member 'rotation'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LinearMove_Goal(type):
    """Metaclass of message 'LinearMove_Goal'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_Goal(metaclass=Metaclass_LinearMove_Goal):
    """Message class 'LinearMove_Goal'."""

    __slots__ = [
        '_position',
        '_rotation',
        '_rotation_mode',
        '_step_size',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'position': 'double[3]',
        'rotation': 'double[3]',
        'rotation_mode': 'string',
        'step_size': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 3),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'position' not in kwargs:
            self.position = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.position = kwargs.get('position')
        if 'rotation' not in kwargs:
            self.rotation = numpy.zeros(3, dtype=numpy.float64)
        else:
            self.rotation = kwargs.get('rotation')
        self.rotation_mode = kwargs.get('rotation_mode', str())
        self.step_size = kwargs.get('step_size', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if any(self.position != other.position):
            return False
        if any(self.rotation != other.rotation):
            return False
        if self.rotation_mode != other.rotation_mode:
            return False
        if self.step_size != other.step_size:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'position' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'position' numpy.ndarray() must have a size of 3"
                self._position = value
                return
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rotation(self):
        """Message field 'rotation'."""
        return self._rotation

    @rotation.setter
    def rotation(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'rotation' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 3, \
                    "The 'rotation' numpy.ndarray() must have a size of 3"
                self._rotation = value
                return
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'rotation' field must be a set or sequence with length 3 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._rotation = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def rotation_mode(self):
        """Message field 'rotation_mode'."""
        return self._rotation_mode

    @rotation_mode.setter
    def rotation_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rotation_mode' field must be of type 'str'"
        self._rotation_mode = value

    @builtins.property
    def step_size(self):
        """Message field 'step_size'."""
        return self._step_size

    @step_size.setter
    def step_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'step_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'step_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._step_size = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_Result(type):
    """Metaclass of message 'LinearMove_Result'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_Result(metaclass=Metaclass_LinearMove_Result):
    """Message class 'LinearMove_Result'."""

    __slots__ = [
        '_success',
        '_message',
        '_execution_time',
        '_total_steps',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
        'execution_time': 'double',
        'total_steps': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())
        self.execution_time = kwargs.get('execution_time', float())
        self.total_steps = kwargs.get('total_steps', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        if self.execution_time != other.execution_time:
            return False
        if self.total_steps != other.total_steps:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value

    @builtins.property
    def execution_time(self):
        """Message field 'execution_time'."""
        return self._execution_time

    @execution_time.setter
    def execution_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'execution_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'execution_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._execution_time = value

    @builtins.property
    def total_steps(self):
        """Message field 'total_steps'."""
        return self._total_steps

    @total_steps.setter
    def total_steps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_steps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_steps' field must be an integer in [-2147483648, 2147483647]"
        self._total_steps = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'current_angles'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_Feedback(type):
    """Metaclass of message 'LinearMove_Feedback'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_Feedback(metaclass=Metaclass_LinearMove_Feedback):
    """Message class 'LinearMove_Feedback'."""

    __slots__ = [
        '_elapsed_time',
        '_progress',
        '_current_step',
        '_total_steps',
        '_current_angles',
        '_status_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'elapsed_time': 'double',
        'progress': 'double',
        'current_step': 'int32',
        'total_steps': 'int32',
        'current_angles': 'double[6]',
        'status_message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 6),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.elapsed_time = kwargs.get('elapsed_time', float())
        self.progress = kwargs.get('progress', float())
        self.current_step = kwargs.get('current_step', int())
        self.total_steps = kwargs.get('total_steps', int())
        if 'current_angles' not in kwargs:
            self.current_angles = numpy.zeros(6, dtype=numpy.float64)
        else:
            self.current_angles = kwargs.get('current_angles')
        self.status_message = kwargs.get('status_message', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.elapsed_time != other.elapsed_time:
            return False
        if self.progress != other.progress:
            return False
        if self.current_step != other.current_step:
            return False
        if self.total_steps != other.total_steps:
            return False
        if any(self.current_angles != other.current_angles):
            return False
        if self.status_message != other.status_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def elapsed_time(self):
        """Message field 'elapsed_time'."""
        return self._elapsed_time

    @elapsed_time.setter
    def elapsed_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'elapsed_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'elapsed_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._elapsed_time = value

    @builtins.property
    def progress(self):
        """Message field 'progress'."""
        return self._progress

    @progress.setter
    def progress(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'progress' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'progress' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._progress = value

    @builtins.property
    def current_step(self):
        """Message field 'current_step'."""
        return self._current_step

    @current_step.setter
    def current_step(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'current_step' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_step' field must be an integer in [-2147483648, 2147483647]"
        self._current_step = value

    @builtins.property
    def total_steps(self):
        """Message field 'total_steps'."""
        return self._total_steps

    @total_steps.setter
    def total_steps(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'total_steps' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'total_steps' field must be an integer in [-2147483648, 2147483647]"
        self._total_steps = value

    @builtins.property
    def current_angles(self):
        """Message field 'current_angles'."""
        return self._current_angles

    @current_angles.setter
    def current_angles(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'current_angles' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 6, \
                    "The 'current_angles' numpy.ndarray() must have a size of 6"
                self._current_angles = value
                return
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
                 len(value) == 6 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'current_angles' field must be a set or sequence with length 6 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._current_angles = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def status_message(self):
        """Message field 'status_message'."""
        return self._status_message

    @status_message.setter
    def status_message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'status_message' field must be of type 'str'"
        self._status_message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_SendGoal_Request(type):
    """Metaclass of message 'LinearMove_SendGoal_Request'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__send_goal__request

            from robot_arm_interfaces.action import LinearMove
            if LinearMove.Goal.__class__._TYPE_SUPPORT is None:
                LinearMove.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_SendGoal_Request(metaclass=Metaclass_LinearMove_SendGoal_Request):
    """Message class 'LinearMove_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'robot_arm_interfaces/LinearMove_Goal',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from robot_arm_interfaces.action._linear_move import LinearMove_Goal
        self.goal = kwargs.get('goal', LinearMove_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action._linear_move import LinearMove_Goal
            assert \
                isinstance(value, LinearMove_Goal), \
                "The 'goal' field must be a sub message of type 'LinearMove_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_SendGoal_Response(type):
    """Metaclass of message 'LinearMove_SendGoal_Response'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_SendGoal_Response(metaclass=Metaclass_LinearMove_SendGoal_Response):
    """Message class 'LinearMove_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_SendGoal_Event(type):
    """Metaclass of message 'LinearMove_SendGoal_Event'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_SendGoal_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__send_goal__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__send_goal__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__send_goal__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__send_goal__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__send_goal__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_SendGoal_Event(metaclass=Metaclass_LinearMove_SendGoal_Event):
    """Message class 'LinearMove_SendGoal_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<robot_arm_interfaces/LinearMove_SendGoal_Request, 1>',
        'response': 'sequence<robot_arm_interfaces/LinearMove_SendGoal_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_SendGoal_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_SendGoal_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action import LinearMove_SendGoal_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LinearMove_SendGoal_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LinearMove_SendGoal_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action import LinearMove_SendGoal_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LinearMove_SendGoal_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LinearMove_SendGoal_Response'"
        self._response = value


class Metaclass_LinearMove_SendGoal(type):
    """Metaclass of service 'LinearMove_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__linear_move__send_goal

            from robot_arm_interfaces.action import _linear_move
            if _linear_move.Metaclass_LinearMove_SendGoal_Request._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_SendGoal_Request.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_SendGoal_Response._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_SendGoal_Response.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_SendGoal_Event._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_SendGoal_Event.__import_type_support__()


class LinearMove_SendGoal(metaclass=Metaclass_LinearMove_SendGoal):
    from robot_arm_interfaces.action._linear_move import LinearMove_SendGoal_Request as Request
    from robot_arm_interfaces.action._linear_move import LinearMove_SendGoal_Response as Response
    from robot_arm_interfaces.action._linear_move import LinearMove_SendGoal_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_GetResult_Request(type):
    """Metaclass of message 'LinearMove_GetResult_Request'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_GetResult_Request(metaclass=Metaclass_LinearMove_GetResult_Request):
    """Message class 'LinearMove_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_GetResult_Response(type):
    """Metaclass of message 'LinearMove_GetResult_Response'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__get_result__response

            from robot_arm_interfaces.action import LinearMove
            if LinearMove.Result.__class__._TYPE_SUPPORT is None:
                LinearMove.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_GetResult_Response(metaclass=Metaclass_LinearMove_GetResult_Response):
    """Message class 'LinearMove_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'robot_arm_interfaces/LinearMove_Result',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from robot_arm_interfaces.action._linear_move import LinearMove_Result
        self.result = kwargs.get('result', LinearMove_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action._linear_move import LinearMove_Result
            assert \
                isinstance(value, LinearMove_Result), \
                "The 'result' field must be a sub message of type 'LinearMove_Result'"
        self._result = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_GetResult_Event(type):
    """Metaclass of message 'LinearMove_GetResult_Event'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_GetResult_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__get_result__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__get_result__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__get_result__event
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__get_result__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__get_result__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_GetResult_Event(metaclass=Metaclass_LinearMove_GetResult_Event):
    """Message class 'LinearMove_GetResult_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<robot_arm_interfaces/LinearMove_GetResult_Request, 1>',
        'response': 'sequence<robot_arm_interfaces/LinearMove_GetResult_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_GetResult_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_GetResult_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action import LinearMove_GetResult_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, LinearMove_GetResult_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'LinearMove_GetResult_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action import LinearMove_GetResult_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, LinearMove_GetResult_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'LinearMove_GetResult_Response'"
        self._response = value


class Metaclass_LinearMove_GetResult(type):
    """Metaclass of service 'LinearMove_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__linear_move__get_result

            from robot_arm_interfaces.action import _linear_move
            if _linear_move.Metaclass_LinearMove_GetResult_Request._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_GetResult_Request.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_GetResult_Response._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_GetResult_Response.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_GetResult_Event._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_GetResult_Event.__import_type_support__()


class LinearMove_GetResult(metaclass=Metaclass_LinearMove_GetResult):
    from robot_arm_interfaces.action._linear_move import LinearMove_GetResult_Request as Request
    from robot_arm_interfaces.action._linear_move import LinearMove_GetResult_Response as Response
    from robot_arm_interfaces.action._linear_move import LinearMove_GetResult_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_LinearMove_FeedbackMessage(type):
    """Metaclass of message 'LinearMove_FeedbackMessage'."""

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
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__linear_move__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__linear_move__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__linear_move__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__linear_move__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__linear_move__feedback_message

            from robot_arm_interfaces.action import LinearMove
            if LinearMove.Feedback.__class__._TYPE_SUPPORT is None:
                LinearMove.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LinearMove_FeedbackMessage(metaclass=Metaclass_LinearMove_FeedbackMessage):
    """Message class 'LinearMove_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'robot_arm_interfaces/LinearMove_Feedback',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['robot_arm_interfaces', 'action'], 'LinearMove_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from robot_arm_interfaces.action._linear_move import LinearMove_Feedback
        self.feedback = kwargs.get('feedback', LinearMove_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if self._check_fields:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if self._check_fields:
            from robot_arm_interfaces.action._linear_move import LinearMove_Feedback
            assert \
                isinstance(value, LinearMove_Feedback), \
                "The 'feedback' field must be a sub message of type 'LinearMove_Feedback'"
        self._feedback = value


class Metaclass_LinearMove(type):
    """Metaclass of action 'LinearMove'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('robot_arm_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robot_arm_interfaces.action.LinearMove')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__linear_move

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from robot_arm_interfaces.action import _linear_move
            if _linear_move.Metaclass_LinearMove_SendGoal._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_SendGoal.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_GetResult._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_GetResult.__import_type_support__()
            if _linear_move.Metaclass_LinearMove_FeedbackMessage._TYPE_SUPPORT is None:
                _linear_move.Metaclass_LinearMove_FeedbackMessage.__import_type_support__()


class LinearMove(metaclass=Metaclass_LinearMove):

    # The goal message defined in the action definition.
    from robot_arm_interfaces.action._linear_move import LinearMove_Goal as Goal
    # The result message defined in the action definition.
    from robot_arm_interfaces.action._linear_move import LinearMove_Result as Result
    # The feedback message defined in the action definition.
    from robot_arm_interfaces.action._linear_move import LinearMove_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from robot_arm_interfaces.action._linear_move import LinearMove_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from robot_arm_interfaces.action._linear_move import LinearMove_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from robot_arm_interfaces.action._linear_move import LinearMove_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
