// Generated by gencpp from file kortex_driver/GetConfiguredWifiRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCONFIGUREDWIFIREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETCONFIGUREDWIFIREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Ssid.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetConfiguredWifiRequest_
{
  typedef GetConfiguredWifiRequest_<ContainerAllocator> Type;

  GetConfiguredWifiRequest_()
    : input()  {
    }
  GetConfiguredWifiRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Ssid_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetConfiguredWifiRequest_

typedef ::kortex_driver::GetConfiguredWifiRequest_<std::allocator<void> > GetConfiguredWifiRequest;

typedef boost::shared_ptr< ::kortex_driver::GetConfiguredWifiRequest > GetConfiguredWifiRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetConfiguredWifiRequest const> GetConfiguredWifiRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e22d121851e9887ae67065d9db92deab";
  }

  static const char* value(const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe22d121851e9887aULL;
  static const uint64_t static_value2 = 0xe67065d9db92deabULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetConfiguredWifiRequest";
  }

  static const char* value(const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Ssid input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/Ssid\n"
"\n"
"string identifier\n"
;
  }

  static const char* value(const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetConfiguredWifiRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetConfiguredWifiRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::Ssid_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCONFIGUREDWIFIREQUEST_H
