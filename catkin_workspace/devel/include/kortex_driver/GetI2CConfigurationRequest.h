// Generated by gencpp from file kortex_driver/GetI2CConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/I2CDeviceIdentification.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetI2CConfigurationRequest_
{
  typedef GetI2CConfigurationRequest_<ContainerAllocator> Type;

  GetI2CConfigurationRequest_()
    : input()  {
    }
  GetI2CConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::I2CDeviceIdentification_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetI2CConfigurationRequest_

typedef ::kortex_driver::GetI2CConfigurationRequest_<std::allocator<void> > GetI2CConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::GetI2CConfigurationRequest > GetI2CConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetI2CConfigurationRequest const> GetI2CConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2afd0c991c8e92ffa9e59279739b28dd";
  }

  static const char* value(const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2afd0c991c8e92ffULL;
  static const uint64_t static_value2 = 0xa9e59279739b28ddULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetI2CConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "I2CDeviceIdentification input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/I2CDeviceIdentification\n"
"\n"
"uint32 device\n"
;
  }

  static const char* value(const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetI2CConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetI2CConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::I2CDeviceIdentification_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETI2CCONFIGURATIONREQUEST_H