# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from designator_integration_msgs/KeyValuePair.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg
import std_msgs.msg

class KeyValuePair(genpy.Message):
  _md5sum = "f1028427513befe30073351bcecef205"
  _type = "designator_integration_msgs/KeyValuePair"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# Purely for (de-)serialization purposes
int32 id
int32 parent

# Data
int32 TYPE_STRING=0
int32 TYPE_FLOAT=1
int32 TYPE_DATA=2
int32 TYPE_LIST=3
int32 TYPE_POSESTAMPED=4
int32 TYPE_POSE=5
int32 TYPE_DESIGNATOR_ACTION=6
int32 TYPE_DESIGNATOR_OBJECT=7
int32 TYPE_DESIGNATOR_LOCATION=8
int32 TYPE_DESIGNATOR_HUMAN=9
int32 TYPE_POINT=10
int32 TYPE_WRENCH=11
int32 TYPE_MATRIX=12
int32 TYPE_VECTOR=13
int32 TYPE_TRANSFORMSTAMPED=14

int32 type

string key
string value_string
float64 value_float
char[] value_data
float64[] value_array
geometry_msgs/PoseStamped value_posestamped
geometry_msgs/Pose value_pose
geometry_msgs/Point value_point
geometry_msgs/Wrench value_wrench
geometry_msgs/TransformStamped value_transformstamped

================================================================================
MSG: geometry_msgs/PoseStamped
# A Pose with reference coordinate frame and timestamp
Header header
Pose pose

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id

================================================================================
MSG: geometry_msgs/Pose
# A representation of pose in free space, composed of position and orientation. 
Point position
Quaternion orientation

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Quaternion
# This represents an orientation in free space in quaternion form.

float64 x
float64 y
float64 z
float64 w

================================================================================
MSG: geometry_msgs/Wrench
# This represents force in free space, separated into
# its linear and angular parts.
Vector3  force
Vector3  torque

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 
# It is only meant to represent a direction. Therefore, it does not
# make sense to apply a translation to it (e.g., when applying a 
# generic rigid transformation to a Vector3, tf2 will only apply the
# rotation). If you want your data to be translatable too, use the
# geometry_msgs/Point message instead.

float64 x
float64 y
float64 z
================================================================================
MSG: geometry_msgs/TransformStamped
# This expresses a transform from coordinate frame header.frame_id
# to the coordinate frame child_frame_id
#
# This message is mostly used by the 
# <a href="http://wiki.ros.org/tf">tf</a> package. 
# See its documentation for more information.

Header header
string child_frame_id # the frame id of the child frame
Transform transform

================================================================================
MSG: geometry_msgs/Transform
# This represents the transform between two coordinate frames in free space.

Vector3 translation
Quaternion rotation
"""
  # Pseudo-constants
  TYPE_STRING = 0
  TYPE_FLOAT = 1
  TYPE_DATA = 2
  TYPE_LIST = 3
  TYPE_POSESTAMPED = 4
  TYPE_POSE = 5
  TYPE_DESIGNATOR_ACTION = 6
  TYPE_DESIGNATOR_OBJECT = 7
  TYPE_DESIGNATOR_LOCATION = 8
  TYPE_DESIGNATOR_HUMAN = 9
  TYPE_POINT = 10
  TYPE_WRENCH = 11
  TYPE_MATRIX = 12
  TYPE_VECTOR = 13
  TYPE_TRANSFORMSTAMPED = 14

  __slots__ = ['id','parent','type','key','value_string','value_float','value_data','value_array','value_posestamped','value_pose','value_point','value_wrench','value_transformstamped']
  _slot_types = ['int32','int32','int32','string','string','float64','char[]','float64[]','geometry_msgs/PoseStamped','geometry_msgs/Pose','geometry_msgs/Point','geometry_msgs/Wrench','geometry_msgs/TransformStamped']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,parent,type,key,value_string,value_float,value_data,value_array,value_posestamped,value_pose,value_point,value_wrench,value_transformstamped

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(KeyValuePair, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = 0
      if self.parent is None:
        self.parent = 0
      if self.type is None:
        self.type = 0
      if self.key is None:
        self.key = ''
      if self.value_string is None:
        self.value_string = ''
      if self.value_float is None:
        self.value_float = 0.
      if self.value_data is None:
        self.value_data = b''
      if self.value_array is None:
        self.value_array = []
      if self.value_posestamped is None:
        self.value_posestamped = geometry_msgs.msg.PoseStamped()
      if self.value_pose is None:
        self.value_pose = geometry_msgs.msg.Pose()
      if self.value_point is None:
        self.value_point = geometry_msgs.msg.Point()
      if self.value_wrench is None:
        self.value_wrench = geometry_msgs.msg.Wrench()
      if self.value_transformstamped is None:
        self.value_transformstamped = geometry_msgs.msg.TransformStamped()
    else:
      self.id = 0
      self.parent = 0
      self.type = 0
      self.key = ''
      self.value_string = ''
      self.value_float = 0.
      self.value_data = b''
      self.value_array = []
      self.value_posestamped = geometry_msgs.msg.PoseStamped()
      self.value_pose = geometry_msgs.msg.Pose()
      self.value_point = geometry_msgs.msg.Point()
      self.value_wrench = geometry_msgs.msg.Wrench()
      self.value_transformstamped = geometry_msgs.msg.TransformStamped()

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
      buff.write(_get_struct_3i().pack(_x.id, _x.parent, _x.type))
      _x = self.key
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_string
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_float
      buff.write(_get_struct_d().pack(_x))
      _x = self.value_data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.value_array)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(struct.Struct(pattern).pack(*self.value_array))
      _x = self
      buff.write(_get_struct_3I().pack(_x.value_posestamped.header.seq, _x.value_posestamped.header.stamp.secs, _x.value_posestamped.header.stamp.nsecs))
      _x = self.value_posestamped.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_23d3I().pack(_x.value_posestamped.pose.position.x, _x.value_posestamped.pose.position.y, _x.value_posestamped.pose.position.z, _x.value_posestamped.pose.orientation.x, _x.value_posestamped.pose.orientation.y, _x.value_posestamped.pose.orientation.z, _x.value_posestamped.pose.orientation.w, _x.value_pose.position.x, _x.value_pose.position.y, _x.value_pose.position.z, _x.value_pose.orientation.x, _x.value_pose.orientation.y, _x.value_pose.orientation.z, _x.value_pose.orientation.w, _x.value_point.x, _x.value_point.y, _x.value_point.z, _x.value_wrench.force.x, _x.value_wrench.force.y, _x.value_wrench.force.z, _x.value_wrench.torque.x, _x.value_wrench.torque.y, _x.value_wrench.torque.z, _x.value_transformstamped.header.seq, _x.value_transformstamped.header.stamp.secs, _x.value_transformstamped.header.stamp.nsecs))
      _x = self.value_transformstamped.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_transformstamped.child_frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.value_transformstamped.transform.translation.x, _x.value_transformstamped.transform.translation.y, _x.value_transformstamped.transform.translation.z, _x.value_transformstamped.transform.rotation.x, _x.value_transformstamped.transform.rotation.y, _x.value_transformstamped.transform.rotation.z, _x.value_transformstamped.transform.rotation.w))
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
      if self.value_posestamped is None:
        self.value_posestamped = geometry_msgs.msg.PoseStamped()
      if self.value_pose is None:
        self.value_pose = geometry_msgs.msg.Pose()
      if self.value_point is None:
        self.value_point = geometry_msgs.msg.Point()
      if self.value_wrench is None:
        self.value_wrench = geometry_msgs.msg.Wrench()
      if self.value_transformstamped is None:
        self.value_transformstamped = geometry_msgs.msg.TransformStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.id, _x.parent, _x.type,) = _get_struct_3i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.key = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.key = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_string = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_string = str[start:end]
      start = end
      end += 8
      (self.value_float,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.value_data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.value_array = s.unpack(str[start:end])
      _x = self
      start = end
      end += 12
      (_x.value_posestamped.header.seq, _x.value_posestamped.header.stamp.secs, _x.value_posestamped.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_posestamped.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_posestamped.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 196
      (_x.value_posestamped.pose.position.x, _x.value_posestamped.pose.position.y, _x.value_posestamped.pose.position.z, _x.value_posestamped.pose.orientation.x, _x.value_posestamped.pose.orientation.y, _x.value_posestamped.pose.orientation.z, _x.value_posestamped.pose.orientation.w, _x.value_pose.position.x, _x.value_pose.position.y, _x.value_pose.position.z, _x.value_pose.orientation.x, _x.value_pose.orientation.y, _x.value_pose.orientation.z, _x.value_pose.orientation.w, _x.value_point.x, _x.value_point.y, _x.value_point.z, _x.value_wrench.force.x, _x.value_wrench.force.y, _x.value_wrench.force.z, _x.value_wrench.torque.x, _x.value_wrench.torque.y, _x.value_wrench.torque.z, _x.value_transformstamped.header.seq, _x.value_transformstamped.header.stamp.secs, _x.value_transformstamped.header.stamp.nsecs,) = _get_struct_23d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_transformstamped.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_transformstamped.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_transformstamped.child_frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_transformstamped.child_frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.value_transformstamped.transform.translation.x, _x.value_transformstamped.transform.translation.y, _x.value_transformstamped.transform.translation.z, _x.value_transformstamped.transform.rotation.x, _x.value_transformstamped.transform.rotation.y, _x.value_transformstamped.transform.rotation.z, _x.value_transformstamped.transform.rotation.w,) = _get_struct_7d().unpack(str[start:end])
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
      buff.write(_get_struct_3i().pack(_x.id, _x.parent, _x.type))
      _x = self.key
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_string
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_float
      buff.write(_get_struct_d().pack(_x))
      _x = self.value_data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.value_array)
      buff.write(_struct_I.pack(length))
      pattern = '<%sd'%length
      buff.write(self.value_array.tostring())
      _x = self
      buff.write(_get_struct_3I().pack(_x.value_posestamped.header.seq, _x.value_posestamped.header.stamp.secs, _x.value_posestamped.header.stamp.nsecs))
      _x = self.value_posestamped.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_23d3I().pack(_x.value_posestamped.pose.position.x, _x.value_posestamped.pose.position.y, _x.value_posestamped.pose.position.z, _x.value_posestamped.pose.orientation.x, _x.value_posestamped.pose.orientation.y, _x.value_posestamped.pose.orientation.z, _x.value_posestamped.pose.orientation.w, _x.value_pose.position.x, _x.value_pose.position.y, _x.value_pose.position.z, _x.value_pose.orientation.x, _x.value_pose.orientation.y, _x.value_pose.orientation.z, _x.value_pose.orientation.w, _x.value_point.x, _x.value_point.y, _x.value_point.z, _x.value_wrench.force.x, _x.value_wrench.force.y, _x.value_wrench.force.z, _x.value_wrench.torque.x, _x.value_wrench.torque.y, _x.value_wrench.torque.z, _x.value_transformstamped.header.seq, _x.value_transformstamped.header.stamp.secs, _x.value_transformstamped.header.stamp.nsecs))
      _x = self.value_transformstamped.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.value_transformstamped.child_frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_7d().pack(_x.value_transformstamped.transform.translation.x, _x.value_transformstamped.transform.translation.y, _x.value_transformstamped.transform.translation.z, _x.value_transformstamped.transform.rotation.x, _x.value_transformstamped.transform.rotation.y, _x.value_transformstamped.transform.rotation.z, _x.value_transformstamped.transform.rotation.w))
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
      if self.value_posestamped is None:
        self.value_posestamped = geometry_msgs.msg.PoseStamped()
      if self.value_pose is None:
        self.value_pose = geometry_msgs.msg.Pose()
      if self.value_point is None:
        self.value_point = geometry_msgs.msg.Point()
      if self.value_wrench is None:
        self.value_wrench = geometry_msgs.msg.Wrench()
      if self.value_transformstamped is None:
        self.value_transformstamped = geometry_msgs.msg.TransformStamped()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.id, _x.parent, _x.type,) = _get_struct_3i().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.key = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.key = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_string = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_string = str[start:end]
      start = end
      end += 8
      (self.value_float,) = _get_struct_d().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.value_data = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sd'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.value_array = numpy.frombuffer(str[start:end], dtype=numpy.float64, count=length)
      _x = self
      start = end
      end += 12
      (_x.value_posestamped.header.seq, _x.value_posestamped.header.stamp.secs, _x.value_posestamped.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_posestamped.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_posestamped.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 196
      (_x.value_posestamped.pose.position.x, _x.value_posestamped.pose.position.y, _x.value_posestamped.pose.position.z, _x.value_posestamped.pose.orientation.x, _x.value_posestamped.pose.orientation.y, _x.value_posestamped.pose.orientation.z, _x.value_posestamped.pose.orientation.w, _x.value_pose.position.x, _x.value_pose.position.y, _x.value_pose.position.z, _x.value_pose.orientation.x, _x.value_pose.orientation.y, _x.value_pose.orientation.z, _x.value_pose.orientation.w, _x.value_point.x, _x.value_point.y, _x.value_point.z, _x.value_wrench.force.x, _x.value_wrench.force.y, _x.value_wrench.force.z, _x.value_wrench.torque.x, _x.value_wrench.torque.y, _x.value_wrench.torque.z, _x.value_transformstamped.header.seq, _x.value_transformstamped.header.stamp.secs, _x.value_transformstamped.header.stamp.nsecs,) = _get_struct_23d3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_transformstamped.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_transformstamped.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.value_transformstamped.child_frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.value_transformstamped.child_frame_id = str[start:end]
      _x = self
      start = end
      end += 56
      (_x.value_transformstamped.transform.translation.x, _x.value_transformstamped.transform.translation.y, _x.value_transformstamped.transform.translation.z, _x.value_transformstamped.transform.rotation.x, _x.value_transformstamped.transform.rotation.y, _x.value_transformstamped.transform.rotation.z, _x.value_transformstamped.transform.rotation.w,) = _get_struct_7d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_23d3I = None
def _get_struct_23d3I():
    global _struct_23d3I
    if _struct_23d3I is None:
        _struct_23d3I = struct.Struct("<23d3I")
    return _struct_23d3I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_3i = None
def _get_struct_3i():
    global _struct_3i
    if _struct_3i is None:
        _struct_3i = struct.Struct("<3i")
    return _struct_3i
_struct_7d = None
def _get_struct_7d():
    global _struct_7d
    if _struct_7d is None:
        _struct_7d = struct.Struct("<7d")
    return _struct_7d
_struct_d = None
def _get_struct_d():
    global _struct_d
    if _struct_d is None:
        _struct_d = struct.Struct("<d")
    return _struct_d