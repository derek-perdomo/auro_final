// Generated by gencpp from file kortex_driver/RebootRequestRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_REBOOTREQUESTREQUEST_H
#define KORTEX_DRIVER_MESSAGE_REBOOTREQUESTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/RebootRqst.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct RebootRequestRequest_
{
  typedef RebootRequestRequest_<ContainerAllocator> Type;

  RebootRequestRequest_()
    : input()  {
    }
  RebootRequestRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::RebootRqst_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RebootRequestRequest_

typedef ::kortex_driver::RebootRequestRequest_<std::allocator<void> > RebootRequestRequest;

typedef boost::shared_ptr< ::kortex_driver::RebootRequestRequest > RebootRequestRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::RebootRequestRequest const> RebootRequestRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::RebootRequestRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::RebootRequestRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::RebootRequestRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::RebootRequestRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::RebootRequestRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc819c54405ea1534eb1db3d5f109a8b";
  }

  static const char* value(const ::kortex_driver::RebootRequestRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc819c54405ea153ULL;
  static const uint64_t static_value2 = 0x4eb1db3d5f109a8bULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/RebootRequestRequest";
  }

  static const char* value(const ::kortex_driver::RebootRequestRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "RebootRqst input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/RebootRqst\n"
"\n"
"uint32 delay\n"
;
  }

  static const char* value(const ::kortex_driver::RebootRequestRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RebootRequestRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::RebootRequestRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::RebootRequestRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::RebootRqst_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_REBOOTREQUESTREQUEST_H
