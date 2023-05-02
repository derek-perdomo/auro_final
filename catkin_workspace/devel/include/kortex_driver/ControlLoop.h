// Generated by gencpp from file kortex_driver/ControlLoop.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLLOOP_H
#define KORTEX_DRIVER_MESSAGE_CONTROLLOOP_H


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
struct ControlLoop_
{
  typedef ControlLoop_<ContainerAllocator> Type;

  ControlLoop_()
    : control_loop(0)  {
    }
  ControlLoop_(const ContainerAllocator& _alloc)
    : control_loop(0)  {
  (void)_alloc;
    }



   typedef uint32_t _control_loop_type;
  _control_loop_type control_loop;





  typedef boost::shared_ptr< ::kortex_driver::ControlLoop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ControlLoop_<ContainerAllocator> const> ConstPtr;

}; // struct ControlLoop_

typedef ::kortex_driver::ControlLoop_<std::allocator<void> > ControlLoop;

typedef boost::shared_ptr< ::kortex_driver::ControlLoop > ControlLoopPtr;
typedef boost::shared_ptr< ::kortex_driver::ControlLoop const> ControlLoopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ControlLoop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ControlLoop_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ControlLoop_<ContainerAllocator1> & lhs, const ::kortex_driver::ControlLoop_<ContainerAllocator2> & rhs)
{
  return lhs.control_loop == rhs.control_loop;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ControlLoop_<ContainerAllocator1> & lhs, const ::kortex_driver::ControlLoop_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControlLoop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControlLoop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControlLoop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControlLoop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControlLoop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControlLoop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ControlLoop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "26936d7a4ae5672d376ef90225be07d4";
  }

  static const char* value(const ::kortex_driver::ControlLoop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x26936d7a4ae5672dULL;
  static const uint64_t static_value2 = 0x376ef90225be07d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ControlLoop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ControlLoop";
  }

  static const char* value(const ::kortex_driver::ControlLoop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ControlLoop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 control_loop\n"
;
  }

  static const char* value(const ::kortex_driver::ControlLoop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ControlLoop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.control_loop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlLoop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ControlLoop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ControlLoop_<ContainerAllocator>& v)
  {
    s << indent << "control_loop: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.control_loop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLLOOP_H
