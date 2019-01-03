// Generated by gencpp from file roboteq_control/Service.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_CONTROL_MESSAGE_SERVICE_H
#define ROBOTEQ_CONTROL_MESSAGE_SERVICE_H

#include <ros/service_traits.h>


#include <roboteq_control/ServiceRequest.h>
#include <roboteq_control/ServiceResponse.h>


namespace roboteq_control
{

struct Service
{

typedef ServiceRequest Request;
typedef ServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Service
} // namespace roboteq_control


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::roboteq_control::Service > {
  static const char* value()
  {
    return "e6679107a9158ba5cdd48d614a8c1546";
  }

  static const char* value(const ::roboteq_control::Service&) { return value(); }
};

template<>
struct DataType< ::roboteq_control::Service > {
  static const char* value()
  {
    return "roboteq_control/Service";
  }

  static const char* value(const ::roboteq_control::Service&) { return value(); }
};


// service_traits::MD5Sum< ::roboteq_control::ServiceRequest> should match 
// service_traits::MD5Sum< ::roboteq_control::Service > 
template<>
struct MD5Sum< ::roboteq_control::ServiceRequest>
{
  static const char* value()
  {
    return MD5Sum< ::roboteq_control::Service >::value();
  }
  static const char* value(const ::roboteq_control::ServiceRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboteq_control::ServiceRequest> should match 
// service_traits::DataType< ::roboteq_control::Service > 
template<>
struct DataType< ::roboteq_control::ServiceRequest>
{
  static const char* value()
  {
    return DataType< ::roboteq_control::Service >::value();
  }
  static const char* value(const ::roboteq_control::ServiceRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::roboteq_control::ServiceResponse> should match 
// service_traits::MD5Sum< ::roboteq_control::Service > 
template<>
struct MD5Sum< ::roboteq_control::ServiceResponse>
{
  static const char* value()
  {
    return MD5Sum< ::roboteq_control::Service >::value();
  }
  static const char* value(const ::roboteq_control::ServiceResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::roboteq_control::ServiceResponse> should match 
// service_traits::DataType< ::roboteq_control::Service > 
template<>
struct DataType< ::roboteq_control::ServiceResponse>
{
  static const char* value()
  {
    return DataType< ::roboteq_control::Service >::value();
  }
  static const char* value(const ::roboteq_control::ServiceResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTEQ_CONTROL_MESSAGE_SERVICE_H