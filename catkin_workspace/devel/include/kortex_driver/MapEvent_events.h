// Generated by gencpp from file kortex_driver/MapEvent_events.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_MAPEVENT_EVENTS_H
#define KORTEX_DRIVER_MESSAGE_MAPEVENT_EVENTS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyEvent.h>
#include <kortex_driver/GpioEvent.h>
#include <kortex_driver/ControllerEvent.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct MapEvent_events_
{
  typedef MapEvent_events_<ContainerAllocator> Type;

  MapEvent_events_()
    : safety_event()
    , gpio_event()
    , controller_event()  {
    }
  MapEvent_events_(const ContainerAllocator& _alloc)
    : safety_event(_alloc)
    , gpio_event(_alloc)
    , controller_event(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::SafetyEvent_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::SafetyEvent_<ContainerAllocator> >> _safety_event_type;
  _safety_event_type safety_event;

   typedef std::vector< ::kortex_driver::GpioEvent_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::GpioEvent_<ContainerAllocator> >> _gpio_event_type;
  _gpio_event_type gpio_event;

   typedef std::vector< ::kortex_driver::ControllerEvent_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::ControllerEvent_<ContainerAllocator> >> _controller_event_type;
  _controller_event_type controller_event;





  typedef boost::shared_ptr< ::kortex_driver::MapEvent_events_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::MapEvent_events_<ContainerAllocator> const> ConstPtr;

}; // struct MapEvent_events_

typedef ::kortex_driver::MapEvent_events_<std::allocator<void> > MapEvent_events;

typedef boost::shared_ptr< ::kortex_driver::MapEvent_events > MapEvent_eventsPtr;
typedef boost::shared_ptr< ::kortex_driver::MapEvent_events const> MapEvent_eventsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::MapEvent_events_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::MapEvent_events_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::MapEvent_events_<ContainerAllocator1> & lhs, const ::kortex_driver::MapEvent_events_<ContainerAllocator2> & rhs)
{
  return lhs.safety_event == rhs.safety_event &&
    lhs.gpio_event == rhs.gpio_event &&
    lhs.controller_event == rhs.controller_event;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::MapEvent_events_<ContainerAllocator1> & lhs, const ::kortex_driver::MapEvent_events_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MapEvent_events_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MapEvent_events_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MapEvent_events_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
{
  static const char* value()
  {
    return "040caa44c991691249bac9565abbf70c";
  }

  static const char* value(const ::kortex_driver::MapEvent_events_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x040caa44c9916912ULL;
  static const uint64_t static_value2 = 0x49bac9565abbf70cULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/MapEvent_events";
  }

  static const char* value(const ::kortex_driver::MapEvent_events_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"SafetyEvent[] safety_event\n"
"GpioEvent[] gpio_event\n"
"ControllerEvent[] controller_event\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyEvent\n"
"\n"
"SafetyHandle safety_handle\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/GpioEvent\n"
"\n"
"uint32 input_type\n"
"uint32 behavior\n"
"uint32 input_identifier\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerEvent\n"
"\n"
"uint32 input_type\n"
"uint32 behavior\n"
"uint32 input_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::MapEvent_events_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.safety_event);
      stream.next(m.gpio_event);
      stream.next(m.controller_event);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapEvent_events_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::MapEvent_events_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::MapEvent_events_<ContainerAllocator>& v)
  {
    s << indent << "safety_event[]" << std::endl;
    for (size_t i = 0; i < v.safety_event.size(); ++i)
    {
      s << indent << "  safety_event[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::SafetyEvent_<ContainerAllocator> >::stream(s, indent + "    ", v.safety_event[i]);
    }
    s << indent << "gpio_event[]" << std::endl;
    for (size_t i = 0; i < v.gpio_event.size(); ++i)
    {
      s << indent << "  gpio_event[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::GpioEvent_<ContainerAllocator> >::stream(s, indent + "    ", v.gpio_event[i]);
    }
    s << indent << "controller_event[]" << std::endl;
    for (size_t i = 0; i < v.controller_event.size(); ++i)
    {
      s << indent << "  controller_event[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ControllerEvent_<ContainerAllocator> >::stream(s, indent + "    ", v.controller_event[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_MAPEVENT_EVENTS_H
