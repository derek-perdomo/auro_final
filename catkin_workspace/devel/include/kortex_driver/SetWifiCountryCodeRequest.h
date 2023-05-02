// Generated by gencpp from file kortex_driver/SetWifiCountryCodeRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CountryCode.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetWifiCountryCodeRequest_
{
  typedef SetWifiCountryCodeRequest_<ContainerAllocator> Type;

  SetWifiCountryCodeRequest_()
    : input()  {
    }
  SetWifiCountryCodeRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CountryCode_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetWifiCountryCodeRequest_

typedef ::kortex_driver::SetWifiCountryCodeRequest_<std::allocator<void> > SetWifiCountryCodeRequest;

typedef boost::shared_ptr< ::kortex_driver::SetWifiCountryCodeRequest > SetWifiCountryCodeRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetWifiCountryCodeRequest const> SetWifiCountryCodeRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "28fc5544fa28c41b8590a221a4f4db30";
  }

  static const char* value(const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x28fc5544fa28c41bULL;
  static const uint64_t static_value2 = 0x8590a221a4f4db30ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetWifiCountryCodeRequest";
  }

  static const char* value(const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CountryCode input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CountryCode\n"
"\n"
"uint32 identifier\n"
;
  }

  static const char* value(const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetWifiCountryCodeRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetWifiCountryCodeRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::CountryCode_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETWIFICOUNTRYCODEREQUEST_H
