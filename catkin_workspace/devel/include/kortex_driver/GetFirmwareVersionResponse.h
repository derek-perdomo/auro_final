// Generated by gencpp from file kortex_driver/GetFirmwareVersionResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETFIRMWAREVERSIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETFIRMWAREVERSIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/FirmwareVersion.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetFirmwareVersionResponse_
{
  typedef GetFirmwareVersionResponse_<ContainerAllocator> Type;

  GetFirmwareVersionResponse_()
    : output()  {
    }
  GetFirmwareVersionResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::FirmwareVersion_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetFirmwareVersionResponse_

typedef ::kortex_driver::GetFirmwareVersionResponse_<std::allocator<void> > GetFirmwareVersionResponse;

typedef boost::shared_ptr< ::kortex_driver::GetFirmwareVersionResponse > GetFirmwareVersionResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetFirmwareVersionResponse const> GetFirmwareVersionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21015a11b53d0e99fd37623e0604662b";
  }

  static const char* value(const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21015a11b53d0e99ULL;
  static const uint64_t static_value2 = 0xfd37623e0604662bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetFirmwareVersionResponse";
  }

  static const char* value(const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "FirmwareVersion output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/FirmwareVersion\n"
"\n"
"uint32 firmware_version\n"
;
  }

  static const char* value(const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetFirmwareVersionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetFirmwareVersionResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::FirmwareVersion_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETFIRMWAREVERSIONRESPONSE_H
