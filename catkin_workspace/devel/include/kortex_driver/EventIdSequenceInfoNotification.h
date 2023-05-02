// Generated by gencpp from file kortex_driver/EventIdSequenceInfoNotification.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_EVENTIDSEQUENCEINFONOTIFICATION_H
#define KORTEX_DRIVER_MESSAGE_EVENTIDSEQUENCEINFONOTIFICATION_H


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
struct EventIdSequenceInfoNotification_
{
  typedef EventIdSequenceInfoNotification_<ContainerAllocator> Type;

  EventIdSequenceInfoNotification_()
    {
    }
  EventIdSequenceInfoNotification_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_SEQUENCE_EVENT)
  #undef UNSPECIFIED_SEQUENCE_EVENT
#endif
#if defined(_WIN32) && defined(SEQUENCE_COMPLETED)
  #undef SEQUENCE_COMPLETED
#endif
#if defined(_WIN32) && defined(SEQUENCE_ABORTED)
  #undef SEQUENCE_ABORTED
#endif
#if defined(_WIN32) && defined(SEQUENCE_PAUSED)
  #undef SEQUENCE_PAUSED
#endif
#if defined(_WIN32) && defined(SEQUENCE_TASK_STARTED)
  #undef SEQUENCE_TASK_STARTED
#endif
#if defined(_WIN32) && defined(SEQUENCE_TASK_COMPLETED)
  #undef SEQUENCE_TASK_COMPLETED
#endif
#if defined(_WIN32) && defined(SEQUENCE_STARTED)
  #undef SEQUENCE_STARTED
#endif

  enum {
    UNSPECIFIED_SEQUENCE_EVENT = 0u,
    SEQUENCE_COMPLETED = 1u,
    SEQUENCE_ABORTED = 2u,
    SEQUENCE_PAUSED = 3u,
    SEQUENCE_TASK_STARTED = 4u,
    SEQUENCE_TASK_COMPLETED = 5u,
    SEQUENCE_STARTED = 6u,
  };


  typedef boost::shared_ptr< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> const> ConstPtr;

}; // struct EventIdSequenceInfoNotification_

typedef ::kortex_driver::EventIdSequenceInfoNotification_<std::allocator<void> > EventIdSequenceInfoNotification;

typedef boost::shared_ptr< ::kortex_driver::EventIdSequenceInfoNotification > EventIdSequenceInfoNotificationPtr;
typedef boost::shared_ptr< ::kortex_driver::EventIdSequenceInfoNotification const> EventIdSequenceInfoNotificationConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "68fe86a38033c2b20696485a1800dc6a";
  }

  static const char* value(const ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x68fe86a38033c2b2ULL;
  static const uint64_t static_value2 = 0x0696485a1800dc6aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/EventIdSequenceInfoNotification";
  }

  static const char* value(const ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_SEQUENCE_EVENT = 0\n"
"\n"
"uint32 SEQUENCE_COMPLETED = 1\n"
"\n"
"uint32 SEQUENCE_ABORTED = 2\n"
"\n"
"uint32 SEQUENCE_PAUSED = 3\n"
"\n"
"uint32 SEQUENCE_TASK_STARTED = 4\n"
"\n"
"uint32 SEQUENCE_TASK_COMPLETED = 5\n"
"\n"
"uint32 SEQUENCE_STARTED = 6\n"
;
  }

  static const char* value(const ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EventIdSequenceInfoNotification_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::EventIdSequenceInfoNotification_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_EVENTIDSEQUENCEINFONOTIFICATION_H
