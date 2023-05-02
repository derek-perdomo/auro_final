// Generated by gencpp from file kortex_driver/GetUARTConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETUARTCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETUARTCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/UARTDeviceIdentification.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetUARTConfigurationRequest_
{
  typedef GetUARTConfigurationRequest_<ContainerAllocator> Type;

  GetUARTConfigurationRequest_()
    : input()  {
    }
  GetUARTConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::UARTDeviceIdentification_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetUARTConfigurationRequest_

typedef ::kortex_driver::GetUARTConfigurationRequest_<std::allocator<void> > GetUARTConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::GetUARTConfigurationRequest > GetUARTConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetUARTConfigurationRequest const> GetUARTConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0e34f297fb0dd637682ff6e1f3a7b31a";
  }

  static const char* value(const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0e34f297fb0dd637ULL;
  static const uint64_t static_value2 = 0x682ff6e1f3a7b31aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetUARTConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "UARTDeviceIdentification input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/UARTDeviceIdentification\n"
"\n"
"uint32 port_id\n"
;
  }

  static const char* value(const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUARTConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetUARTConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::UARTDeviceIdentification_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETUARTCONFIGURATIONREQUEST_H
