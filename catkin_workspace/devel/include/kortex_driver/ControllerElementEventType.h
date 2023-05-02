// Generated by gencpp from file kortex_driver/ControllerElementEventType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLLERELEMENTEVENTTYPE_H
#define KORTEX_DRIVER_MESSAGE_CONTROLLERELEMENTEVENTTYPE_H


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
struct ControllerElementEventType_
{
  typedef ControllerElementEventType_<ContainerAllocator> Type;

  ControllerElementEventType_()
    {
    }
  ControllerElementEventType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_CONTROLLER_ELEMENT_EVENT)
  #undef UNSPECIFIED_CONTROLLER_ELEMENT_EVENT
#endif
#if defined(_WIN32) && defined(AXIS_MOVED)
  #undef AXIS_MOVED
#endif
#if defined(_WIN32) && defined(BUTTON_DOWN)
  #undef BUTTON_DOWN
#endif
#if defined(_WIN32) && defined(BUTTON_UP)
  #undef BUTTON_UP
#endif
#if defined(_WIN32) && defined(BUTTON_CLICK)
  #undef BUTTON_CLICK
#endif

  enum {
    UNSPECIFIED_CONTROLLER_ELEMENT_EVENT = 0u,
    AXIS_MOVED = 1u,
    BUTTON_DOWN = 2u,
    BUTTON_UP = 3u,
    BUTTON_CLICK = 4u,
  };


  typedef boost::shared_ptr< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerElementEventType_

typedef ::kortex_driver::ControllerElementEventType_<std::allocator<void> > ControllerElementEventType;

typedef boost::shared_ptr< ::kortex_driver::ControllerElementEventType > ControllerElementEventTypePtr;
typedef boost::shared_ptr< ::kortex_driver::ControllerElementEventType const> ControllerElementEventTypeConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ControllerElementEventType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "30410419f52cbfa760b386b2213e4309";
  }

  static const char* value(const ::kortex_driver::ControllerElementEventType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x30410419f52cbfa7ULL;
  static const uint64_t static_value2 = 0x60b386b2213e4309ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ControllerElementEventType";
  }

  static const char* value(const ::kortex_driver::ControllerElementEventType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_CONTROLLER_ELEMENT_EVENT = 0\n"
"\n"
"uint32 AXIS_MOVED = 1\n"
"\n"
"uint32 BUTTON_DOWN = 2\n"
"\n"
"uint32 BUTTON_UP = 3\n"
"\n"
"uint32 BUTTON_CLICK = 4\n"
;
  }

  static const char* value(const ::kortex_driver::ControllerElementEventType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerElementEventType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ControllerElementEventType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::ControllerElementEventType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLLERELEMENTEVENTTYPE_H
