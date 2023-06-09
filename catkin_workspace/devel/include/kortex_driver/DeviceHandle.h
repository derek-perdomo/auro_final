// Generated by gencpp from file kortex_driver/DeviceHandle.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DEVICEHANDLE_H
#define KORTEX_DRIVER_MESSAGE_DEVICEHANDLE_H


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
struct DeviceHandle_
{
  typedef DeviceHandle_<ContainerAllocator> Type;

  DeviceHandle_()
    : device_type(0)
    , device_identifier(0)
    , order(0)  {
    }
  DeviceHandle_(const ContainerAllocator& _alloc)
    : device_type(0)
    , device_identifier(0)
    , order(0)  {
  (void)_alloc;
    }



   typedef uint32_t _device_type_type;
  _device_type_type device_type;

   typedef uint32_t _device_identifier_type;
  _device_identifier_type device_identifier;

   typedef uint32_t _order_type;
  _order_type order;





  typedef boost::shared_ptr< ::kortex_driver::DeviceHandle_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DeviceHandle_<ContainerAllocator> const> ConstPtr;

}; // struct DeviceHandle_

typedef ::kortex_driver::DeviceHandle_<std::allocator<void> > DeviceHandle;

typedef boost::shared_ptr< ::kortex_driver::DeviceHandle > DeviceHandlePtr;
typedef boost::shared_ptr< ::kortex_driver::DeviceHandle const> DeviceHandleConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DeviceHandle_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DeviceHandle_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DeviceHandle_<ContainerAllocator1> & lhs, const ::kortex_driver::DeviceHandle_<ContainerAllocator2> & rhs)
{
  return lhs.device_type == rhs.device_type &&
    lhs.device_identifier == rhs.device_identifier &&
    lhs.order == rhs.order;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DeviceHandle_<ContainerAllocator1> & lhs, const ::kortex_driver::DeviceHandle_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DeviceHandle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DeviceHandle_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DeviceHandle_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a89d226be38807777119fd9acd7acb3b";
  }

  static const char* value(const ::kortex_driver::DeviceHandle_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa89d226be3880777ULL;
  static const uint64_t static_value2 = 0x7119fd9acd7acb3bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DeviceHandle";
  }

  static const char* value(const ::kortex_driver::DeviceHandle_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 device_type\n"
"uint32 device_identifier\n"
"uint32 order\n"
;
  }

  static const char* value(const ::kortex_driver::DeviceHandle_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.device_type);
      stream.next(m.device_identifier);
      stream.next(m.order);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DeviceHandle_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DeviceHandle_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DeviceHandle_<ContainerAllocator>& v)
  {
    s << indent << "device_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.device_type);
    s << indent << "device_identifier: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.device_identifier);
    s << indent << "order: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.order);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DEVICEHANDLE_H
