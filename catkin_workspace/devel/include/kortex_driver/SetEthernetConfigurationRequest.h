// Generated by gencpp from file kortex_driver/SetEthernetConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETETHERNETCONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETETHERNETCONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/EthernetConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetEthernetConfigurationRequest_
{
  typedef SetEthernetConfigurationRequest_<ContainerAllocator> Type;

  SetEthernetConfigurationRequest_()
    : input()  {
    }
  SetEthernetConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::EthernetConfiguration_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEthernetConfigurationRequest_

typedef ::kortex_driver::SetEthernetConfigurationRequest_<std::allocator<void> > SetEthernetConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::SetEthernetConfigurationRequest > SetEthernetConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetEthernetConfigurationRequest const> SetEthernetConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8c9fcfd2e145aefa02569fde06fcfcda";
  }

  static const char* value(const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8c9fcfd2e145aefaULL;
  static const uint64_t static_value2 = 0x02569fde06fcfcdaULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetEthernetConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "EthernetConfiguration input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/EthernetConfiguration\n"
"\n"
"uint32 device\n"
"bool enabled\n"
"uint32 speed\n"
"uint32 duplex\n"
;
  }

  static const char* value(const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEthernetConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetEthernetConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::EthernetConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETETHERNETCONFIGURATIONREQUEST_H
