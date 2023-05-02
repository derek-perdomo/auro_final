// Generated by gencpp from file kortex_driver/UpdateMapping.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_UPDATEMAPPING_H
#define KORTEX_DRIVER_MESSAGE_UPDATEMAPPING_H

#include <ros/service_traits.h>


#include <kortex_driver/UpdateMappingRequest.h>
#include <kortex_driver/UpdateMappingResponse.h>


namespace kortex_driver
{

struct UpdateMapping
{

typedef UpdateMappingRequest Request;
typedef UpdateMappingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UpdateMapping
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::UpdateMapping > {
  static const char* value()
  {
    return "921c2b05776ccd75721af97241aa399d";
  }

  static const char* value(const ::kortex_driver::UpdateMapping&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::UpdateMapping > {
  static const char* value()
  {
    return "kortex_driver/UpdateMapping";
  }

  static const char* value(const ::kortex_driver::UpdateMapping&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::UpdateMappingRequest> should match
// service_traits::MD5Sum< ::kortex_driver::UpdateMapping >
template<>
struct MD5Sum< ::kortex_driver::UpdateMappingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::UpdateMapping >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMappingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::UpdateMappingRequest> should match
// service_traits::DataType< ::kortex_driver::UpdateMapping >
template<>
struct DataType< ::kortex_driver::UpdateMappingRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::UpdateMapping >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMappingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::UpdateMappingResponse> should match
// service_traits::MD5Sum< ::kortex_driver::UpdateMapping >
template<>
struct MD5Sum< ::kortex_driver::UpdateMappingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::UpdateMapping >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMappingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::UpdateMappingResponse> should match
// service_traits::DataType< ::kortex_driver::UpdateMapping >
template<>
struct DataType< ::kortex_driver::UpdateMappingResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::UpdateMapping >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMappingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_UPDATEMAPPING_H
