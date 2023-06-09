// Generated by gencpp from file kortex_driver/SafetyEnable.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SAFETYENABLE_H
#define KORTEX_DRIVER_MESSAGE_SAFETYENABLE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SafetyEnable_
{
  typedef SafetyEnable_<ContainerAllocator> Type;

  SafetyEnable_()
    : handle()
    , enable(false)  {
    }
  SafetyEnable_(const ContainerAllocator& _alloc)
    : handle(_alloc)
    , enable(false)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SafetyHandle_<ContainerAllocator>  _handle_type;
  _handle_type handle;

   typedef uint8_t _enable_type;
  _enable_type enable;





  typedef boost::shared_ptr< ::kortex_driver::SafetyEnable_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SafetyEnable_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyEnable_

typedef ::kortex_driver::SafetyEnable_<std::allocator<void> > SafetyEnable;

typedef boost::shared_ptr< ::kortex_driver::SafetyEnable > SafetyEnablePtr;
typedef boost::shared_ptr< ::kortex_driver::SafetyEnable const> SafetyEnableConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SafetyEnable_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SafetyEnable_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SafetyEnable_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyEnable_<ContainerAllocator2> & rhs)
{
  return lhs.handle == rhs.handle &&
    lhs.enable == rhs.enable;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SafetyEnable_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyEnable_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyEnable_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyEnable_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyEnable_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f3f3341f0f54081acc9ca67a9de861a";
  }

  static const char* value(const ::kortex_driver::SafetyEnable_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f3f3341f0f54081ULL;
  static const uint64_t static_value2 = 0xacc9ca67a9de861aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SafetyEnable";
  }

  static const char* value(const ::kortex_driver::SafetyEnable_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"SafetyHandle handle\n"
"bool enable\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
;
  }

  static const char* value(const ::kortex_driver::SafetyEnable_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handle);
      stream.next(m.enable);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyEnable_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SafetyEnable_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SafetyEnable_<ContainerAllocator>& v)
  {
    s << indent << "handle: ";
    s << std::endl;
    Printer< ::kortex_driver::SafetyHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.handle);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SAFETYENABLE_H
