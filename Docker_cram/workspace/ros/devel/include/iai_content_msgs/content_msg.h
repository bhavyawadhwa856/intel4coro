// Generated by gencpp from file iai_content_msgs/content_msg.msg
// DO NOT EDIT!


#ifndef IAI_CONTENT_MSGS_MESSAGE_CONTENT_MSG_H
#define IAI_CONTENT_MSGS_MESSAGE_CONTENT_MSG_H

#include <ros/service_traits.h>


#include <iai_content_msgs/content_msgRequest.h>
#include <iai_content_msgs/content_msgResponse.h>


namespace iai_content_msgs
{

struct content_msg
{

typedef content_msgRequest Request;
typedef content_msgResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct content_msg
} // namespace iai_content_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::iai_content_msgs::content_msg > {
  static const char* value()
  {
    return "cd8f4c57d396801edf6a2140ccb6506e";
  }

  static const char* value(const ::iai_content_msgs::content_msg&) { return value(); }
};

template<>
struct DataType< ::iai_content_msgs::content_msg > {
  static const char* value()
  {
    return "iai_content_msgs/content_msg";
  }

  static const char* value(const ::iai_content_msgs::content_msg&) { return value(); }
};


// service_traits::MD5Sum< ::iai_content_msgs::content_msgRequest> should match
// service_traits::MD5Sum< ::iai_content_msgs::content_msg >
template<>
struct MD5Sum< ::iai_content_msgs::content_msgRequest>
{
  static const char* value()
  {
    return MD5Sum< ::iai_content_msgs::content_msg >::value();
  }
  static const char* value(const ::iai_content_msgs::content_msgRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::iai_content_msgs::content_msgRequest> should match
// service_traits::DataType< ::iai_content_msgs::content_msg >
template<>
struct DataType< ::iai_content_msgs::content_msgRequest>
{
  static const char* value()
  {
    return DataType< ::iai_content_msgs::content_msg >::value();
  }
  static const char* value(const ::iai_content_msgs::content_msgRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::iai_content_msgs::content_msgResponse> should match
// service_traits::MD5Sum< ::iai_content_msgs::content_msg >
template<>
struct MD5Sum< ::iai_content_msgs::content_msgResponse>
{
  static const char* value()
  {
    return MD5Sum< ::iai_content_msgs::content_msg >::value();
  }
  static const char* value(const ::iai_content_msgs::content_msgResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::iai_content_msgs::content_msgResponse> should match
// service_traits::DataType< ::iai_content_msgs::content_msg >
template<>
struct DataType< ::iai_content_msgs::content_msgResponse>
{
  static const char* value()
  {
    return DataType< ::iai_content_msgs::content_msg >::value();
  }
  static const char* value(const ::iai_content_msgs::content_msgResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // IAI_CONTENT_MSGS_MESSAGE_CONTENT_MSG_H
