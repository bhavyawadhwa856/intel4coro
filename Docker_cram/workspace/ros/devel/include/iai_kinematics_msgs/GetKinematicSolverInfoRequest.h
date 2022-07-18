// Generated by gencpp from file iai_kinematics_msgs/GetKinematicSolverInfoRequest.msg
// DO NOT EDIT!


#ifndef IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFOREQUEST_H
#define IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFOREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace iai_kinematics_msgs
{
template <class ContainerAllocator>
struct GetKinematicSolverInfoRequest_
{
  typedef GetKinematicSolverInfoRequest_<ContainerAllocator> Type;

  GetKinematicSolverInfoRequest_()
    {
    }
  GetKinematicSolverInfoRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetKinematicSolverInfoRequest_

typedef ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<std::allocator<void> > GetKinematicSolverInfoRequest;

typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest > GetKinematicSolverInfoRequestPtr;
typedef boost::shared_ptr< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest const> GetKinematicSolverInfoRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace iai_kinematics_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "iai_kinematics_msgs/GetKinematicSolverInfoRequest";
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A service call to get more information about the solver used by a node performing kinematics\n"
;
  }

  static const char* value(const ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetKinematicSolverInfoRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::iai_kinematics_msgs::GetKinematicSolverInfoRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // IAI_KINEMATICS_MSGS_MESSAGE_GETKINEMATICSOLVERINFOREQUEST_H
