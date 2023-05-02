// Generated by gencpp from file kortex_driver/SafetyNotification.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SAFETYNOTIFICATION_H
#define KORTEX_DRIVER_MESSAGE_SAFETYNOTIFICATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyHandle.h>
#include <kortex_driver/Timestamp.h>
#include <kortex_driver/UserProfileHandle.h>
#include <kortex_driver/Connection.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SafetyNotification_
{
  typedef SafetyNotification_<ContainerAllocator> Type;

  SafetyNotification_()
    : safety_handle()
    , value(0)
    , timestamp()
    , user_handle()
    , connection()  {
    }
  SafetyNotification_(const ContainerAllocator& _alloc)
    : safety_handle(_alloc)
    , value(0)
    , timestamp(_alloc)
    , user_handle(_alloc)
    , connection(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SafetyHandle_<ContainerAllocator>  _safety_handle_type;
  _safety_handle_type safety_handle;

   typedef uint32_t _value_type;
  _value_type value;

   typedef  ::kortex_driver::Timestamp_<ContainerAllocator>  _timestamp_type;
  _timestamp_type timestamp;

   typedef  ::kortex_driver::UserProfileHandle_<ContainerAllocator>  _user_handle_type;
  _user_handle_type user_handle;

   typedef  ::kortex_driver::Connection_<ContainerAllocator>  _connection_type;
  _connection_type connection;





  typedef boost::shared_ptr< ::kortex_driver::SafetyNotification_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SafetyNotification_<ContainerAllocator> const> ConstPtr;

}; // struct SafetyNotification_

typedef ::kortex_driver::SafetyNotification_<std::allocator<void> > SafetyNotification;

typedef boost::shared_ptr< ::kortex_driver::SafetyNotification > SafetyNotificationPtr;
typedef boost::shared_ptr< ::kortex_driver::SafetyNotification const> SafetyNotificationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SafetyNotification_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SafetyNotification_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SafetyNotification_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyNotification_<ContainerAllocator2> & rhs)
{
  return lhs.safety_handle == rhs.safety_handle &&
    lhs.value == rhs.value &&
    lhs.timestamp == rhs.timestamp &&
    lhs.user_handle == rhs.user_handle &&
    lhs.connection == rhs.connection;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SafetyNotification_<ContainerAllocator1> & lhs, const ::kortex_driver::SafetyNotification_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SafetyNotification_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SafetyNotification_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SafetyNotification_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dffadcb533e64106d087a7e7e2548f72";
  }

  static const char* value(const ::kortex_driver::SafetyNotification_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdffadcb533e64106ULL;
  static const uint64_t static_value2 = 0xd087a7e7e2548f72ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SafetyNotification";
  }

  static const char* value(const ::kortex_driver::SafetyNotification_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"SafetyHandle safety_handle\n"
"uint32 value\n"
"Timestamp timestamp\n"
"UserProfileHandle user_handle\n"
"Connection connection\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/Timestamp\n"
"\n"
"uint32 sec\n"
"uint32 usec\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/Connection\n"
"\n"
"UserProfileHandle user_handle\n"
"string connection_information\n"
"uint32 connection_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::SafetyNotification_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.safety_handle);
      stream.next(m.value);
      stream.next(m.timestamp);
      stream.next(m.user_handle);
      stream.next(m.connection);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SafetyNotification_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SafetyNotification_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SafetyNotification_<ContainerAllocator>& v)
  {
    s << indent << "safety_handle: ";
    s << std::endl;
    Printer< ::kortex_driver::SafetyHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.safety_handle);
    s << indent << "value: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.value);
    s << indent << "timestamp: ";
    s << std::endl;
    Printer< ::kortex_driver::Timestamp_<ContainerAllocator> >::stream(s, indent + "  ", v.timestamp);
    s << indent << "user_handle: ";
    s << std::endl;
    Printer< ::kortex_driver::UserProfileHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.user_handle);
    s << indent << "connection: ";
    s << std::endl;
    Printer< ::kortex_driver::Connection_<ContainerAllocator> >::stream(s, indent + "  ", v.connection);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SAFETYNOTIFICATION_H
