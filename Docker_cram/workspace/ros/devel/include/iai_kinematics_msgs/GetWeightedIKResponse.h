// Generated by gencpp from file iai_kinematics_msgs/GetWeightedIKResponse.msg
// DO NOT EDIT!


#ifndef IAI_KINEMATICS_MSGS_MESSAGE_GETWEIGHTEDIKRESPONSE_H
#define IAI_KINEMATICS_MSGS_MESSAGE_GETWEIGHTEDIKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>
#include <iai_kinematics_msgs/ErrorCodes.h>

namespace iai_kinematics_msgs
{
template <class ContainerAllocator>
struct GetWeightedIKResponse_
{
  typedef GetWeightedIKResponse_<ContainerAllocator> Type;

  GetWeightedIKResponse_()
    : solution()
    , error_code()  {
    }
  GetWeightedIKResponse_(const ContainerAllocator& _alloc)
    : solution(_alloc)
    , error_code(_alloc)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _solution_type;
  _solution_type solution;

   typedef  ::iai_kinematics_msgs::ErrorCodes_<ContainerAllocator>  _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetWeightedIKResponse_

typedef ::iai_kinematics_msgs::GetWeightedIKResponse_<std::allocator<void> > GetWeightedIKResponse;

typedef boost::shared_ptr< ::iai_kinematics_msgs::GetWeightedIKResponse > GetWeightedIKResponsePtr;
typedef boost::shared_ptr< ::iai_kinematics_msgs::GetWeightedIKResponse const> GetWeightedIKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator1> & lhs, const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator2> & rhs)
{
  return lhs.solution == rhs.solution &&
    lhs.error_code == rhs.error_code;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator1> & lhs, const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace iai_kinematics_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26703d3aa2f94a5367558f4749423a09";
  }

  static const char* value(const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26703d3aa2f94a53ULL;
  static const uint64_t static_value2 = 0x67558f4749423a09ULL;
};

template<class ContainerAllocator>
struct DataType< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iai_kinematics_msgs/GetWeightedIKResponse";
  }

  static const char* value(const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/JointState solution\n"
"\n"
"iai_kinematics_msgs/ErrorCodes error_code\n"
"\n"
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
"MSG: iai_kinematics_msgs/ErrorCodes\n"
"int32 val\n"
"\n"
"# overall behavior\n"
"int32 PLANNING_FAILED=-1\n"
"int32 SUCCESS=1\n"
"int32 TIMED_OUT=-2\n"
"\n"
"# start state errors\n"
"int32 START_STATE_IN_COLLISION=-3\n"
"int32 START_STATE_VIOLATES_PATH_CONSTRAINTS=-4\n"
"\n"
"# goal errors\n"
"int32 GOAL_IN_COLLISION=-5\n"
"int32 GOAL_VIOLATES_PATH_CONSTRAINTS=-6\n"
"\n"
"# robot state\n"
"int32 INVALID_ROBOT_STATE=-7\n"
"int32 INCOMPLETE_ROBOT_STATE=-8\n"
"\n"
"# planning request errors\n"
"int32 INVALID_PLANNER_ID=-9\n"
"int32 INVALID_NUM_PLANNING_ATTEMPTS=-10\n"
"int32 INVALID_ALLOWED_PLANNING_TIME=-11\n"
"int32 INVALID_GROUP_NAME=-12\n"
"int32 INVALID_GOAL_JOINT_CONSTRAINTS=-13\n"
"int32 INVALID_GOAL_POSITION_CONSTRAINTS=-14\n"
"int32 INVALID_GOAL_ORIENTATION_CONSTRAINTS=-15\n"
"int32 INVALID_PATH_JOINT_CONSTRAINTS=-16\n"
"int32 INVALID_PATH_POSITION_CONSTRAINTS=-17\n"
"int32 INVALID_PATH_ORIENTATION_CONSTRAINTS=-18\n"
"\n"
"# state/trajectory monitor errors\n"
"int32 INVALID_TRAJECTORY=-19\n"
"int32 INVALID_INDEX=-20\n"
"int32 JOINT_LIMITS_VIOLATED=-21\n"
"int32 PATH_CONSTRAINTS_VIOLATED=-22\n"
"int32 COLLISION_CONSTRAINTS_VIOLATED=-23\n"
"int32 GOAL_CONSTRAINTS_VIOLATED=-24\n"
"int32 JOINTS_NOT_MOVING=-25\n"
"int32 TRAJECTORY_CONTROLLER_FAILED=-26\n"
"\n"
"# system errors\n"
"int32 FRAME_TRANSFORM_FAILURE=-27\n"
"int32 COLLISION_CHECKING_UNAVAILABLE=-28\n"
"int32 ROBOT_STATE_STALE=-29\n"
"int32 SENSOR_INFO_STALE=-30\n"
"\n"
"# kinematics errors\n"
"int32 NO_IK_SOLUTION=-31\n"
"int32 INVALID_LINK_NAME=-32\n"
"int32 IK_LINK_IN_COLLISION=-33\n"
"int32 NO_FK_SOLUTION=-34\n"
"int32 KINEMATICS_STATE_IN_COLLISION=-35\n"
"\n"
"# general errors\n"
"int32 INVALID_TIMEOUT=-36\n"
"\n"
;
  }

  static const char* value(const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.solution);
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetWeightedIKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::iai_kinematics_msgs::GetWeightedIKResponse_<ContainerAllocator>& v)
  {
    s << indent << "solution: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.solution);
    s << indent << "error_code: ";
    s << std::endl;
    Printer< ::iai_kinematics_msgs::ErrorCodes_<ContainerAllocator> >::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IAI_KINEMATICS_MSGS_MESSAGE_GETWEIGHTEDIKRESPONSE_H
