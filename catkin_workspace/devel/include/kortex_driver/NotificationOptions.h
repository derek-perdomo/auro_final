// Generated by gencpp from file kortex_driver/NotificationOptions.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_NOTIFICATIONOPTIONS_H
#define KORTEX_DRIVER_MESSAGE_NOTIFICATIONOPTIONS_H


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
struct NotificationOptions_
{
  typedef NotificationOptions_<ContainerAllocator> Type;

  NotificationOptions_()
    : type(0)
    , rate_m_sec(0)
    , threshold_value(0.0)  {
    }
  NotificationOptions_(const ContainerAllocator& _alloc)
    : type(0)
    , rate_m_sec(0)
    , threshold_value(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _type_type;
  _type_type type;

   typedef uint32_t _rate_m_sec_type;
  _rate_m_sec_type rate_m_sec;

   typedef float _threshold_value_type;
  _threshold_value_type threshold_value;





  typedef boost::shared_ptr< ::kortex_driver::NotificationOptions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::NotificationOptions_<ContainerAllocator> const> ConstPtr;

}; // struct NotificationOptions_

typedef ::kortex_driver::NotificationOptions_<std::allocator<void> > NotificationOptions;

typedef boost::shared_ptr< ::kortex_driver::NotificationOptions > NotificationOptionsPtr;
typedef boost::shared_ptr< ::kortex_driver::NotificationOptions const> NotificationOptionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::NotificationOptions_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::NotificationOptions_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::NotificationOptions_<ContainerAllocator1> & lhs, const ::kortex_driver::NotificationOptions_<ContainerAllocator2> & rhs)
{
  return lhs.type == rhs.type &&
    lhs.rate_m_sec == rhs.rate_m_sec &&
    lhs.threshold_value == rhs.threshold_value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::NotificationOptions_<ContainerAllocator1> & lhs, const ::kortex_driver::NotificationOptions_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::NotificationOptions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::NotificationOptions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::NotificationOptions_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "756dde28efcdf67e7515ead30453e781";
  }

  static const char* value(const ::kortex_driver::NotificationOptions_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x756dde28efcdf67eULL;
  static const uint64_t static_value2 = 0x7515ead30453e781ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/NotificationOptions";
  }

  static const char* value(const ::kortex_driver::NotificationOptions_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 type\n"
"uint32 rate_m_sec\n"
"float32 threshold_value\n"
;
  }

  static const char* value(const ::kortex_driver::NotificationOptions_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.rate_m_sec);
      stream.next(m.threshold_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NotificationOptions_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::NotificationOptions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::NotificationOptions_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "rate_m_sec: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.rate_m_sec);
    s << indent << "threshold_value: ";
    Printer<float>::stream(s, indent + "  ", v.threshold_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_NOTIFICATIONOPTIONS_H
