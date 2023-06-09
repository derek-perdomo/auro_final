// Generated by gencpp from file kortex_driver/FirmwareVersion.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_FIRMWAREVERSION_H
#define KORTEX_DRIVER_MESSAGE_FIRMWAREVERSION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct FirmwareVersion_
{
  typedef FirmwareVersion_<ContainerAllocator> Type;

  FirmwareVersion_()
    : firmware_version(0)  {
    }
  FirmwareVersion_(const ContainerAllocator& _alloc)
    : firmware_version(0)  {
  (void)_alloc;
    }



   typedef uint32_t _firmware_version_type;
  _firmware_version_type firmware_version;





  typedef boost::shared_ptr< ::kortex_driver::FirmwareVersion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::FirmwareVersion_<ContainerAllocator> const> ConstPtr;

}; // struct FirmwareVersion_

typedef ::kortex_driver::FirmwareVersion_<std::allocator<void> > FirmwareVersion;

typedef boost::shared_ptr< ::kortex_driver::FirmwareVersion > FirmwareVersionPtr;
typedef boost::shared_ptr< ::kortex_driver::FirmwareVersion const> FirmwareVersionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::FirmwareVersion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::FirmwareVersion_<ContainerAllocator1> & lhs, const ::kortex_driver::FirmwareVersion_<ContainerAllocator2> & rhs)
{
  return lhs.firmware_version == rhs.firmware_version;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::FirmwareVersion_<ContainerAllocator1> & lhs, const ::kortex_driver::FirmwareVersion_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::FirmwareVersion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::FirmwareVersion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::FirmwareVersion_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f0cdf3021edc70c033ace598cc19b3d0";
  }

  static const char* value(const ::kortex_driver::FirmwareVersion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf0cdf3021edc70c0ULL;
  static const uint64_t static_value2 = 0x33ace598cc19b3d0ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/FirmwareVersion";
  }

  static const char* value(const ::kortex_driver::FirmwareVersion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 firmware_version\n"
;
  }

  static const char* value(const ::kortex_driver::FirmwareVersion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.firmware_version);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FirmwareVersion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::FirmwareVersion_<ContainerAllocator>& v)
  {
    s << indent << "firmware_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.firmware_version);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_FIRMWAREVERSION_H
