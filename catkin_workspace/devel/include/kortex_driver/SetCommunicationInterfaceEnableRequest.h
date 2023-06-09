// Generated by gencpp from file kortex_driver/SetCommunicationInterfaceEnableRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETCOMMUNICATIONINTERFACEENABLEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETCOMMUNICATIONINTERFACEENABLEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CommunicationInterfaceConfiguration.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetCommunicationInterfaceEnableRequest_
{
  typedef SetCommunicationInterfaceEnableRequest_<ContainerAllocator> Type;

  SetCommunicationInterfaceEnableRequest_()
    : input()  {
    }
  SetCommunicationInterfaceEnableRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCommunicationInterfaceEnableRequest_

typedef ::kortex_driver::SetCommunicationInterfaceEnableRequest_<std::allocator<void> > SetCommunicationInterfaceEnableRequest;

typedef boost::shared_ptr< ::kortex_driver::SetCommunicationInterfaceEnableRequest > SetCommunicationInterfaceEnableRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetCommunicationInterfaceEnableRequest const> SetCommunicationInterfaceEnableRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "98d776df460a80c9b3e32187fc3e4632";
  }

  static const char* value(const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x98d776df460a80c9ULL;
  static const uint64_t static_value2 = 0xb3e32187fc3e4632ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetCommunicationInterfaceEnableRequest";
  }

  static const char* value(const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CommunicationInterfaceConfiguration input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CommunicationInterfaceConfiguration\n"
"\n"
"uint32 type\n"
"bool enable\n"
;
  }

  static const char* value(const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCommunicationInterfaceEnableRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetCommunicationInterfaceEnableRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETCOMMUNICATIONINTERFACEENABLEREQUEST_H
