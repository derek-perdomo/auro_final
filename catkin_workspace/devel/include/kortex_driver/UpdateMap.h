// Generated by gencpp from file kortex_driver/UpdateMap.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_UPDATEMAP_H
#define KORTEX_DRIVER_MESSAGE_UPDATEMAP_H

#include <ros/service_traits.h>


#include <kortex_driver/UpdateMapRequest.h>
#include <kortex_driver/UpdateMapResponse.h>


namespace kortex_driver
{

struct UpdateMap
{

typedef UpdateMapRequest Request;
typedef UpdateMapResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct UpdateMap
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::UpdateMap > {
  static const char* value()
  {
    return "29eebeafd5a84177e84ecf6d8f99893d";
  }

  static const char* value(const ::kortex_driver::UpdateMap&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::UpdateMap > {
  static const char* value()
  {
    return "kortex_driver/UpdateMap";
  }

  static const char* value(const ::kortex_driver::UpdateMap&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::UpdateMapRequest> should match
// service_traits::MD5Sum< ::kortex_driver::UpdateMap >
template<>
struct MD5Sum< ::kortex_driver::UpdateMapRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::UpdateMap >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMapRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::UpdateMapRequest> should match
// service_traits::DataType< ::kortex_driver::UpdateMap >
template<>
struct DataType< ::kortex_driver::UpdateMapRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::UpdateMap >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMapRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::UpdateMapResponse> should match
// service_traits::MD5Sum< ::kortex_driver::UpdateMap >
template<>
struct MD5Sum< ::kortex_driver::UpdateMapResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::UpdateMap >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMapResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::UpdateMapResponse> should match
// service_traits::DataType< ::kortex_driver::UpdateMap >
template<>
struct DataType< ::kortex_driver::UpdateMapResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::UpdateMap >::value();
  }
  static const char* value(const ::kortex_driver::UpdateMapResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_UPDATEMAP_H