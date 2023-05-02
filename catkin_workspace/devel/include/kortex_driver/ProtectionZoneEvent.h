// Generated by gencpp from file kortex_driver/ProtectionZoneEvent.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_PROTECTIONZONEEVENT_H
#define KORTEX_DRIVER_MESSAGE_PROTECTIONZONEEVENT_H


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
struct ProtectionZoneEvent_
{
  typedef ProtectionZoneEvent_<ContainerAllocator> Type;

  ProtectionZoneEvent_()
    {
    }
  ProtectionZoneEvent_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_PROTECTION_ZONE_EVENT)
  #undef UNSPECIFIED_PROTECTION_ZONE_EVENT
#endif
#if defined(_WIN32) && defined(REACHED)
  #undef REACHED
#endif
#if defined(_WIN32) && defined(ENTERED)
  #undef ENTERED
#endif
#if defined(_WIN32) && defined(EXITED)
  #undef EXITED
#endif

  enum {
    UNSPECIFIED_PROTECTION_ZONE_EVENT = 0u,
    REACHED = 1u,
    ENTERED = 2u,
    EXITED = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> const> ConstPtr;

}; // struct ProtectionZoneEvent_

typedef ::kortex_driver::ProtectionZoneEvent_<std::allocator<void> > ProtectionZoneEvent;

typedef boost::shared_ptr< ::kortex_driver::ProtectionZoneEvent > ProtectionZoneEventPtr;
typedef boost::shared_ptr< ::kortex_driver::ProtectionZoneEvent const> ProtectionZoneEventConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e1a0e125d0c3437f9fc79af445cf181";
  }

  static const char* value(const ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e1a0e125d0c3437ULL;
  static const uint64_t static_value2 = 0xf9fc79af445cf181ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ProtectionZoneEvent";
  }

  static const char* value(const ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_PROTECTION_ZONE_EVENT = 0\n"
"\n"
"uint32 REACHED = 1\n"
"\n"
"uint32 ENTERED = 2\n"
"\n"
"uint32 EXITED = 3\n"
;
  }

  static const char* value(const ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProtectionZoneEvent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::ProtectionZoneEvent_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_PROTECTIONZONEEVENT_H
