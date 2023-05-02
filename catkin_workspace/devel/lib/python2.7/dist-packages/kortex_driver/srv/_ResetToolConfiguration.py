# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ResetToolConfigurationRequest.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class ResetToolConfigurationRequest(genpy.Message):
  _md5sum = "fa3403cd5897c9698bc0fdcb2a453fbc"
  _type = "kortex_driver/ResetToolConfigurationRequest"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """Empty input

================================================================================
MSG: kortex_driver/Empty
"""
  __slots__ = ['input']
  _slot_types = ['kortex_driver/Empty']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       input

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ResetToolConfigurationRequest, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
    else:
      self.input = kortex_driver.msg.Empty()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      pass
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.input is None:
        self.input = kortex_driver.msg.Empty()
      end = 0
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/ResetToolConfigurationResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import kortex_driver.msg

class ResetToolConfigurationResponse(genpy.Message):
  _md5sum = "e8aee88048229955a9c6e4f254f854b1"
  _type = "kortex_driver/ResetToolConfigurationResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """ToolConfiguration output

================================================================================
MSG: kortex_driver/ToolConfiguration

CartesianTransform tool_transform
float32 tool_mass
ControlConfig_Position tool_mass_center
================================================================================
MSG: kortex_driver/CartesianTransform

float32 x
float32 y
float32 z
float32 theta_x
float32 theta_y
float32 theta_z
================================================================================
MSG: kortex_driver/ControlConfig_Position

float32 x
float32 y
float32 z"""
  __slots__ = ['output']
  _slot_types = ['kortex_driver/ToolConfiguration']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       output

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ResetToolConfigurationResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.output is None:
        self.output = kortex_driver.msg.ToolConfiguration()
    else:
      self.output = kortex_driver.msg.ToolConfiguration()

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_10f().pack(_x.output.tool_transform.x, _x.output.tool_transform.y, _x.output.tool_transform.z, _x.output.tool_transform.theta_x, _x.output.tool_transform.theta_y, _x.output.tool_transform.theta_z, _x.output.tool_mass, _x.output.tool_mass_center.x, _x.output.tool_mass_center.y, _x.output.tool_mass_center.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.output is None:
        self.output = kortex_driver.msg.ToolConfiguration()
      end = 0
      _x = self
      start = end
      end += 40
      (_x.output.tool_transform.x, _x.output.tool_transform.y, _x.output.tool_transform.z, _x.output.tool_transform.theta_x, _x.output.tool_transform.theta_y, _x.output.tool_transform.theta_z, _x.output.tool_mass, _x.output.tool_mass_center.x, _x.output.tool_mass_center.y, _x.output.tool_mass_center.z,) = _get_struct_10f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_10f().pack(_x.output.tool_transform.x, _x.output.tool_transform.y, _x.output.tool_transform.z, _x.output.tool_transform.theta_x, _x.output.tool_transform.theta_y, _x.output.tool_transform.theta_z, _x.output.tool_mass, _x.output.tool_mass_center.x, _x.output.tool_mass_center.y, _x.output.tool_mass_center.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.output is None:
        self.output = kortex_driver.msg.ToolConfiguration()
      end = 0
      _x = self
      start = end
      end += 40
      (_x.output.tool_transform.x, _x.output.tool_transform.y, _x.output.tool_transform.z, _x.output.tool_transform.theta_x, _x.output.tool_transform.theta_y, _x.output.tool_transform.theta_z, _x.output.tool_mass, _x.output.tool_mass_center.x, _x.output.tool_mass_center.y, _x.output.tool_mass_center.z,) = _get_struct_10f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_10f = None
def _get_struct_10f():
    global _struct_10f
    if _struct_10f is None:
        _struct_10f = struct.Struct("<10f")
    return _struct_10f
class ResetToolConfiguration(object):
  _type          = 'kortex_driver/ResetToolConfiguration'
  _md5sum = '49c06fd31c2188ee0d629d1b8491b1f0'
  _request_class  = ResetToolConfigurationRequest
  _response_class = ResetToolConfigurationResponse
