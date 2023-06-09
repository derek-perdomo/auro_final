// Generated by gencpp from file kortex_driver/GetControllerStateResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControllerState.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetControllerStateResponse_
{
  typedef GetControllerStateResponse_<ContainerAllocator> Type;

  GetControllerStateResponse_()
    : output()  {
    }
  GetControllerStateResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ControllerState_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetControllerStateResponse_

typedef ::kortex_driver::GetControllerStateResponse_<std::allocator<void> > GetControllerStateResponse;

typedef boost::shared_ptr< ::kortex_driver::GetControllerStateResponse > GetControllerStateResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetControllerStateResponse const> GetControllerStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "91a45b957c71af1f17aba3256ed6d6b5";
  }

  static const char* value(const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x91a45b957c71af1fULL;
  static const uint64_t static_value2 = 0x17aba3256ed6d6b5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetControllerStateResponse";
  }

  static const char* value(const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ControllerState output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerState\n"
"\n"
"ControllerHandle handle\n"
"uint32 event_type\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerHandle\n"
"\n"
"uint32 type\n"
"uint32 controller_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetControllerStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetControllerStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetControllerStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ControllerState_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCONTROLLERSTATERESPONSE_H
