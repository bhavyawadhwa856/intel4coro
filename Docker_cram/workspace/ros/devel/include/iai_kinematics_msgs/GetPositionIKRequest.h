// Generated by gencpp from file iai_kinematics_msgs/GetPositionIKRequest.msg
// DO NOT EDIT!


#ifndef IAI_KINEMATICS_MSGS_MESSAGE_GETPOSITIONIKREQUEST_H
#define IAI_KINEMATICS_MSGS_MESSAGE_GETPOSITIONIKREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <iai_kinematics_msgs/PositionIKRequest.h>

namespace iai_kinematics_msgs
{
template <class ContainerAllocator>
struct GetPositionIKRequest_
{
  typedef GetPositionIKRequest_<ContainerAllocator> Type;

  GetPositionIKRequest_()
    : ik_request()
    , timeout()  {
    }
  GetPositionIKRequest_(const ContainerAllocator& _alloc)
    : ik_request(_alloc)
    , timeout()  {
  (void)_alloc;
    }



   typedef  ::iai_kinematics_msgs::PositionIKRequest_<ContainerAllocator>  _ik_request_type;
  _ik_request_type ik_request;

   typedef ros::Duration _timeout_type;
  _timeout_type timeout;





  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPositionIKRequest_

typedef ::iai_kinematics_msgs::GetPositionIKRequest_<std::allocator<void> > GetPositionIKRequest;

typedef boost::shared_ptr< ::iai_kinematics_msgs::GetPositionIKRequest > GetPositionIKRequestPtr;
typedef boost::shared_ptr< ::iai_kinematics_msgs::GetPositionIKRequest const> GetPositionIKRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator1> & lhs, const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ik_request == rhs.ik_request &&
    lhs.timeout == rhs.timeout;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator1> & lhs, const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iai_kinematics_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bf9ee33930d9eaff390b8af4a213ba62";
  }

  static const char* value(const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbf9ee33930d9eaffULL;
  static const uint64_t static_value2 = 0x390b8af4a213ba62ULL;
};

template<class ContainerAllocator>
struct DataType< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iai_kinematics_msgs/GetPositionIKRequest";
  }

  static const char* value(const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A service call to carry out an inverse kinematics computation\n"
"# The inverse kinematics request\n"
"iai_kinematics_msgs/PositionIKRequest ik_request\n"
"# Maximum allowed time for IK calculation\n"
"duration timeout\n"
"\n"
"================================================================================\n"
"MSG: iai_kinematics_msgs/PositionIKRequest\n"
"# A Position IK request message\n"
"# The name of the link for which we are computing IK\n"
"string ik_link_name\n"
"\n"
"# The (stamped) pose of the link\n"
"geometry_msgs/PoseStamped pose_stamped\n"
"\n"
"# A RobotState consisting of hint/seed positions for the IK computation. \n"
"# These may be used to seed the IK search. \n"
"# The seed state MUST contain state for all joints to be used by the IK solver\n"
"# to compute IK. The list of joints that the IK solver deals with can be found using\n"
"# the kinematics_msgs/GetKinematicSolverInfo\n"
"iai_kinematics_msgs/RobotState ik_seed_state\n"
"\n"
"# Additional state information can be provided here to specify the starting positions \n"
"# of other joints/links on the robot.\n"
"iai_kinematics_msgs/RobotState robot_state\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: iai_kinematics_msgs/RobotState\n"
"# This message contains information about the robot state, i.e. the positions of its joints and links\n"
"sensor_msgs/JointState joint_state\n"
"iai_kinematics_msgs/MultiDOFJointState multi_dof_joint_state\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: iai_kinematics_msgs/MultiDOFJointState\n"
"#A representation of a multi-dof joint state\n"
"time stamp\n"
"string[] joint_names\n"
"string[] frame_ids\n"
"string[] child_frame_ids\n"
"geometry_msgs/Pose[] poses\n"
;
  }

  static const char* value(const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ik_request);
      stream.next(m.timeout);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPositionIKRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iai_kinematics_msgs::GetPositionIKRequest_<ContainerAllocator>& v)
  {
    s << indent << "ik_request: ";
    s << std::endl;
    Printer< ::iai_kinematics_msgs::PositionIKRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.ik_request);
    s << indent << "timeout: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.timeout);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAI_KINEMATICS_MSGS_MESSAGE_GETPOSITIONIKREQUEST_H
