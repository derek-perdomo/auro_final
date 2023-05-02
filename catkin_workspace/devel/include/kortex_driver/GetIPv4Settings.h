// Generated by gencpp from file kortex_driver/GetIPv4Settings.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETIPV4SETTINGS_H
#define KORTEX_DRIVER_MESSAGE_GETIPV4SETTINGS_H

#include <ros/service_traits.h>


#include <kortex_driver/GetIPv4SettingsRequest.h>
#include <kortex_driver/GetIPv4SettingsResponse.h>


namespace kortex_driver
{

struct GetIPv4Settings
{

typedef GetIPv4SettingsRequest Request;
typedef GetIPv4SettingsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetIPv4Settings
} // namespace kortex_driver


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::kortex_driver::GetIPv4Settings > {
  static const char* value()
  {
    return "e77074eb046f4a5b909d72ae5404567e";
  }

  static const char* value(const ::kortex_driver::GetIPv4Settings&) { return value(); }
};

template<>
struct DataType< ::kortex_driver::GetIPv4Settings > {
  static const char* value()
  {
    return "kortex_driver/GetIPv4Settings";
  }

  static const char* value(const ::kortex_driver::GetIPv4Settings&) { return value(); }
};


// service_traits::MD5Sum< ::kortex_driver::GetIPv4SettingsRequest> should match
// service_traits::MD5Sum< ::kortex_driver::GetIPv4Settings >
template<>
struct MD5Sum< ::kortex_driver::GetIPv4SettingsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetIPv4Settings >::value();
  }
  static const char* value(const ::kortex_driver::GetIPv4SettingsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetIPv4SettingsRequest> should match
// service_traits::DataType< ::kortex_driver::GetIPv4Settings >
template<>
struct DataType< ::kortex_driver::GetIPv4SettingsRequest>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetIPv4Settings >::value();
  }
  static const char* value(const ::kortex_driver::GetIPv4SettingsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::kortex_driver::GetIPv4SettingsResponse> should match
// service_traits::MD5Sum< ::kortex_driver::GetIPv4Settings >
template<>
struct MD5Sum< ::kortex_driver::GetIPv4SettingsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::kortex_driver::GetIPv4Settings >::value();
  }
  static const char* value(const ::kortex_driver::GetIPv4SettingsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::kortex_driver::GetIPv4SettingsResponse> should match
// service_traits::DataType< ::kortex_driver::GetIPv4Settings >
template<>
struct DataType< ::kortex_driver::GetIPv4SettingsResponse>
{
  static const char* value()
  {
    return DataType< ::kortex_driver::GetIPv4Settings >::value();
  }
  static const char* value(const ::kortex_driver::GetIPv4SettingsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETIPV4SETTINGS_H
