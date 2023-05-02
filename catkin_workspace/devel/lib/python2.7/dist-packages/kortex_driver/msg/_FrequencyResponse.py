# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from kortex_driver/FrequencyResponse.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class FrequencyResponse(genpy.Message):
  _md5sum = "86ed7a41c264d9e5ff7a52aa97222d1e"
  _type = "kortex_driver/FrequencyResponse"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """
uint32 loop_selection
float32 min_frequency
float32 max_frequency
float32 amplitude
float32 duration"""
  __slots__ = ['loop_selection','min_frequency','max_frequency','amplitude','duration']
  _slot_types = ['uint32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       loop_selection,min_frequency,max_frequency,amplitude,duration

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FrequencyResponse, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.loop_selection is None:
        self.loop_selection = 0
      if self.min_frequency is None:
        self.min_frequency = 0.
      if self.max_frequency is None:
        self.max_frequency = 0.
      if self.amplitude is None:
        self.amplitude = 0.
      if self.duration is None:
        self.duration = 0.
    else:
      self.loop_selection = 0
      self.min_frequency = 0.
      self.max_frequency = 0.
      self.amplitude = 0.
      self.duration = 0.

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
      buff.write(_get_struct_I4f().pack(_x.loop_selection, _x.min_frequency, _x.max_frequency, _x.amplitude, _x.duration))
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
      end = 0
      _x = self
      start = end
      end += 20
      (_x.loop_selection, _x.min_frequency, _x.max_frequency, _x.amplitude, _x.duration,) = _get_struct_I4f().unpack(str[start:end])
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
      buff.write(_get_struct_I4f().pack(_x.loop_selection, _x.min_frequency, _x.max_frequency, _x.amplitude, _x.duration))
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
      end = 0
      _x = self
      start = end
      end += 20
      (_x.loop_selection, _x.min_frequency, _x.max_frequency, _x.amplitude, _x.duration,) = _get_struct_I4f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I4f = None
def _get_struct_I4f():
    global _struct_I4f
    if _struct_I4f is None:
        _struct_I4f = struct.Struct("<I4f")
    return _struct_I4f
