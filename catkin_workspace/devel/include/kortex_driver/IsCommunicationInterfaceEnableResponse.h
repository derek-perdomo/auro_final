// Generated by gencpp from file kortex_driver/IsCommunicationInterfaceEnableResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLERESPONSE_H


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
struct IsCommunicationInterfaceEnableResponse_
{
  typedef IsCommunicationInterfaceEnableResponse_<ContainerAllocator> Type;

  IsCommunicationInterfaceEnableResponse_()
    : output()  {
    }
  IsCommunicationInterfaceEnableResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IsCommunicationInterfaceEnableResponse_

typedef ::kortex_driver::IsCommunicationInterfaceEnableResponse_<std::allocator<void> > IsCommunicationInterfaceEnableResponse;

typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableResponse > IsCommunicationInterfaceEnableResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::IsCommunicationInterfaceEnableResponse const> IsCommunicationInterfaceEnableResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "14aad7bb40261a0342e840837a530b52";
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x14aad7bb40261a03ULL;
  static const uint64_t static_value2 = 0x42e840837a530b52ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/IsCommunicationInterfaceEnableResponse";
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CommunicationInterfaceConfiguration output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CommunicationInterfaceConfiguration\n"
"\n"
"uint32 type\n"
"bool enable\n"
;
  }

  static const char* value(const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsCommunicationInterfaceEnableResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::IsCommunicationInterfaceEnableResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::CommunicationInterfaceConfiguration_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ISCOMMUNICATIONINTERFACEENABLERESPONSE_H
