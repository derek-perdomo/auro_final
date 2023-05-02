// Generated by gencpp from file kortex_driver/Delay.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DELAY_H
#define KORTEX_DRIVER_MESSAGE_DELAY_H


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
struct Delay_
{
  typedef Delay_<ContainerAllocator> Type;

  Delay_()
    : duration(0)  {
    }
  Delay_(const ContainerAllocator& _alloc)
    : duration(0)  {
  (void)_alloc;
    }



   typedef uint32_t _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::kortex_driver::Delay_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Delay_<ContainerAllocator> const> ConstPtr;

}; // struct Delay_

typedef ::kortex_driver::Delay_<std::allocator<void> > Delay;

typedef boost::shared_ptr< ::kortex_driver::Delay > DelayPtr;
typedef boost::shared_ptr< ::kortex_driver::Delay const> DelayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Delay_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Delay_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Delay_<ContainerAllocator1> & lhs, const ::kortex_driver::Delay_<ContainerAllocator2> & rhs)
{
  return lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Delay_<ContainerAllocator1> & lhs, const ::kortex_driver::Delay_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Delay_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Delay_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Delay_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Delay_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Delay_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Delay_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Delay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "eea8d32b4658822ac77c4c94fbbb5f2b";
  }

  static const char* value(const ::kortex_driver::Delay_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xeea8d32b4658822aULL;
  static const uint64_t static_value2 = 0xc77c4c94fbbb5f2bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Delay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Delay";
  }

  static const char* value(const ::kortex_driver::Delay_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Delay_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::Delay_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Delay_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Delay_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Delay_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Delay_<ContainerAllocator>& v)
  {
    s << indent << "duration: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DELAY_H
