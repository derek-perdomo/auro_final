// Generated by gencpp from file kortex_driver/ControlModeNotificationList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLMODENOTIFICATIONLIST_H
#define KORTEX_DRIVER_MESSAGE_CONTROLMODENOTIFICATIONLIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Base_ControlModeNotification.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ControlModeNotificationList_
{
  typedef ControlModeNotificationList_<ContainerAllocator> Type;

  ControlModeNotificationList_()
    : notifications()  {
    }
  ControlModeNotificationList_(const ContainerAllocator& _alloc)
    : notifications(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::Base_ControlModeNotification_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::Base_ControlModeNotification_<ContainerAllocator> >> _notifications_type;
  _notifications_type notifications;





  typedef boost::shared_ptr< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> const> ConstPtr;

}; // struct ControlModeNotificationList_

typedef ::kortex_driver::ControlModeNotificationList_<std::allocator<void> > ControlModeNotificationList;

typedef boost::shared_ptr< ::kortex_driver::ControlModeNotificationList > ControlModeNotificationListPtr;
typedef boost::shared_ptr< ::kortex_driver::ControlModeNotificationList const> ControlModeNotificationListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator1> & lhs, const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator2> & rhs)
{
  return lhs.notifications == rhs.notifications;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator1> & lhs, const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "15ea06dcb7be562d13fce4a4e5f177b9";
  }

  static const char* value(const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x15ea06dcb7be562dULL;
  static const uint64_t static_value2 = 0x13fce4a4e5f177b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ControlModeNotificationList";
  }

  static const char* value(const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Base_ControlModeNotification[] notifications\n"
"================================================================================\n"
"MSG: kortex_driver/Base_ControlModeNotification\n"
"\n"
"uint32 control_mode\n"
"Timestamp timestamp\n"
"UserProfileHandle user_handle\n"
"Connection connection\n"
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

  static const char* value(const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.notifications);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlModeNotificationList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ControlModeNotificationList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ControlModeNotificationList_<ContainerAllocator>& v)
  {
    s << indent << "notifications[]" << std::endl;
    for (size_t i = 0; i < v.notifications.size(); ++i)
    {
      s << indent << "  notifications[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Base_ControlModeNotification_<ContainerAllocator> >::stream(s, indent + "    ", v.notifications[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLMODENOTIFICATIONLIST_H
