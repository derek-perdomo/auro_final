// Generated by gencpp from file kortex_driver/SetApiOptionsRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETAPIOPTIONSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETAPIOPTIONSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ApiOptions.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetApiOptionsRequest_
{
  typedef SetApiOptionsRequest_<ContainerAllocator> Type;

  SetApiOptionsRequest_()
    : input()  {
    }
  SetApiOptionsRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ApiOptions_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetApiOptionsRequest_

typedef ::kortex_driver::SetApiOptionsRequest_<std::allocator<void> > SetApiOptionsRequest;

typedef boost::shared_ptr< ::kortex_driver::SetApiOptionsRequest > SetApiOptionsRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetApiOptionsRequest const> SetApiOptionsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "11c85b567b00c6eb6cd55fdb8cb9ad1b";
  }

  static const char* value(const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x11c85b567b00c6ebULL;
  static const uint64_t static_value2 = 0x6cd55fdb8cb9ad1bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetApiOptionsRequest";
  }

  static const char* value(const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ApiOptions input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ApiOptions\n"
"uint32 timeout_ms\n"
;
  }

  static const char* value(const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetApiOptionsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetApiOptionsRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ApiOptions_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETAPIOPTIONSREQUEST_H
