// Generated by gencpp from file kortex_driver/ActuatorInformation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTUATORINFORMATION_H
#define KORTEX_DRIVER_MESSAGE_ACTUATORINFORMATION_H


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
struct ActuatorInformation_
{
  typedef ActuatorInformation_<ContainerAllocator> Type;

  ActuatorInformation_()
    : count(0)  {
    }
  ActuatorInformation_(const ContainerAllocator& _alloc)
    : count(0)  {
  (void)_alloc;
    }



   typedef uint32_t _count_type;
  _count_type count;





  typedef boost::shared_ptr< ::kortex_driver::ActuatorInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActuatorInformation_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorInformation_

typedef ::kortex_driver::ActuatorInformation_<std::allocator<void> > ActuatorInformation;

typedef boost::shared_ptr< ::kortex_driver::ActuatorInformation > ActuatorInformationPtr;
typedef boost::shared_ptr< ::kortex_driver::ActuatorInformation const> ActuatorInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActuatorInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActuatorInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorInformation_<ContainerAllocator2> & rhs)
{
  return lhs.count == rhs.count;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActuatorInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac8b22eb02c1f433e0a55ee9aac59a18";
  }

  static const char* value(const ::kortex_driver::ActuatorInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac8b22eb02c1f433ULL;
  static const uint64_t static_value2 = 0xe0a55ee9aac59a18ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActuatorInformation";
  }

  static const char* value(const ::kortex_driver::ActuatorInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 count\n"
;
  }

  static const char* value(const ::kortex_driver::ActuatorInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.count);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActuatorInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActuatorInformation_<ContainerAllocator>& v)
  {
    s << indent << "count: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.count);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTUATORINFORMATION_H
