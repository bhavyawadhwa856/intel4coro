// Generated by gencpp from file data_vis_msgs/Task.msg
// DO NOT EDIT!


#ifndef DATA_VIS_MSGS_MESSAGE_TASK_H
#define DATA_VIS_MSGS_MESSAGE_TASK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace data_vis_msgs
{
template <class ContainerAllocator>
struct Task_
{
  typedef Task_<ContainerAllocator> Type;

  Task_()
    : id(0)
    , parent(0)
    , color()
    , info()
    , type()
    , tip()  {
    }
  Task_(const ContainerAllocator& _alloc)
    : id(0)
    , parent(0)
    , color(_alloc)
    , info(_alloc)
    , type(_alloc)
    , tip(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _id_type;
  _id_type id;

   typedef int32_t _parent_type;
  _parent_type parent;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _color_type;
  _color_type color;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _info_type;
  _info_type info;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _tip_type;
  _tip_type tip;





  typedef boost::shared_ptr< ::data_vis_msgs::Task_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::data_vis_msgs::Task_<ContainerAllocator> const> ConstPtr;

}; // struct Task_

typedef ::data_vis_msgs::Task_<std::allocator<void> > Task;

typedef boost::shared_ptr< ::data_vis_msgs::Task > TaskPtr;
typedef boost::shared_ptr< ::data_vis_msgs::Task const> TaskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::data_vis_msgs::Task_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::data_vis_msgs::Task_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::data_vis_msgs::Task_<ContainerAllocator1> & lhs, const ::data_vis_msgs::Task_<ContainerAllocator2> & rhs)
{
  return lhs.id == rhs.id &&
    lhs.parent == rhs.parent &&
    lhs.color == rhs.color &&
    lhs.info == rhs.info &&
    lhs.type == rhs.type &&
    lhs.tip == rhs.tip;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::data_vis_msgs::Task_<ContainerAllocator1> & lhs, const ::data_vis_msgs::Task_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace data_vis_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::data_vis_msgs::Task_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::data_vis_msgs::Task_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_vis_msgs::Task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::data_vis_msgs::Task_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_vis_msgs::Task_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::data_vis_msgs::Task_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::data_vis_msgs::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "165080ef33de5a23c032a947cb733600";
  }

  static const char* value(const ::data_vis_msgs::Task_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x165080ef33de5a23ULL;
  static const uint64_t static_value2 = 0xc032a947cb733600ULL;
};

template<class ContainerAllocator>
struct DataType< ::data_vis_msgs::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "data_vis_msgs/Task";
  }

  static const char* value(const ::data_vis_msgs::Task_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::data_vis_msgs::Task_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 id\n"
"int32 parent\n"
"string color\n"
"string info\n"
"string type\n"
"string tip\n"
;
  }

  static const char* value(const ::data_vis_msgs::Task_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::data_vis_msgs::Task_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.parent);
      stream.next(m.color);
      stream.next(m.info);
      stream.next(m.type);
      stream.next(m.tip);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Task_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::data_vis_msgs::Task_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::data_vis_msgs::Task_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
    s << indent << "parent: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parent);
    s << indent << "color: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.color);
    s << indent << "info: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.info);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "tip: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.tip);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DATA_VIS_MSGS_MESSAGE_TASK_H
