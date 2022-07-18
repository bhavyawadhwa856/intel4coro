// Generated by gencpp from file grasp_stability_msgs/ControlRequest.msg
// DO NOT EDIT!


#ifndef GRASP_STABILITY_MSGS_MESSAGE_CONTROLREQUEST_H
#define GRASP_STABILITY_MSGS_MESSAGE_CONTROLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace grasp_stability_msgs
{
template <class ContainerAllocator>
struct ControlRequest_
{
  typedef ControlRequest_<ContainerAllocator> Type;

  ControlRequest_()
    : command(0)
    , measurement_context_id()  {
    }
  ControlRequest_(const ContainerAllocator& _alloc)
    : command(0)
    , measurement_context_id(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _command_type;
  _command_type command;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _measurement_context_id_type;
  _measurement_context_id_type measurement_context_id;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CTRL_START)
  #undef CTRL_START
#endif
#if defined(_WIN32) && defined(CTRL_STOP)
  #undef CTRL_STOP
#endif

  enum {
    CTRL_START = 0,
    CTRL_STOP = 1,
  };


  typedef boost::shared_ptr< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ControlRequest_

typedef ::grasp_stability_msgs::ControlRequest_<std::allocator<void> > ControlRequest;

typedef boost::shared_ptr< ::grasp_stability_msgs::ControlRequest > ControlRequestPtr;
typedef boost::shared_ptr< ::grasp_stability_msgs::ControlRequest const> ControlRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator1> & lhs, const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator2> & rhs)
{
  return lhs.command == rhs.command &&
    lhs.measurement_context_id == rhs.measurement_context_id;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator1> & lhs, const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace grasp_stability_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3e8c36ca9a454fdd1d9690e53d57a07c";
  }

  static const char* value(const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3e8c36ca9a454fddULL;
  static const uint64_t static_value2 = 0x1d9690e53d57a07cULL;
};

template<class ContainerAllocator>
struct DataType< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "grasp_stability_msgs/ControlRequest";
  }

  static const char* value(const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 CTRL_START=0\n"
"int32 CTRL_STOP=1\n"
"int32 command\n"
"string measurement_context_id\n"
;
  }

  static const char* value(const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.measurement_context_id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::grasp_stability_msgs::ControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::grasp_stability_msgs::ControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<int32_t>::stream(s, indent + "  ", v.command);
    s << indent << "measurement_context_id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.measurement_context_id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GRASP_STABILITY_MSGS_MESSAGE_CONTROLREQUEST_H
