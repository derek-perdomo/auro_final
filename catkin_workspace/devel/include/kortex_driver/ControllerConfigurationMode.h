// Generated by gencpp from file kortex_driver/ControllerConfigurationMode.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLLERCONFIGURATIONMODE_H
#define KORTEX_DRIVER_MESSAGE_CONTROLLERCONFIGURATIONMODE_H


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
struct ControllerConfigurationMode_
{
  typedef ControllerConfigurationMode_<ContainerAllocator> Type;

  ControllerConfigurationMode_()
    : enable(false)  {
    }
  ControllerConfigurationMode_(const ContainerAllocator& _alloc)
    : enable(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerConfigurationMode_

typedef ::kortex_driver::ControllerConfigurationMode_<std::allocator<void> > ControllerConfigurationMode;

typedef boost::shared_ptr< ::kortex_driver::ControllerConfigurationMode > ControllerConfigurationModePtr;
typedef boost::shared_ptr< ::kortex_driver::ControllerConfigurationMode const> ControllerConfigurationModeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator1> & lhs, const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator2> & rhs)
{
  return lhs.enable == rhs.enable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator1> & lhs, const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c1211af706069c994c06e00eb59ac9e";
  }

  static const char* value(const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c1211af706069c9ULL;
  static const uint64_t static_value2 = 0x94c06e00eb59ac9eULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ControllerConfigurationMode";
  }

  static const char* value(const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"bool enable\n"
;
  }

  static const char* value(const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerConfigurationMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ControllerConfigurationMode_<ContainerAllocator>& v)
  {
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLLERCONFIGURATIONMODE_H
