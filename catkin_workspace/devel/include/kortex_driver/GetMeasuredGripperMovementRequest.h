// Generated by gencpp from file kortex_driver/GetMeasuredGripperMovementRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/GripperRequest.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetMeasuredGripperMovementRequest_
{
  typedef GetMeasuredGripperMovementRequest_<ContainerAllocator> Type;

  GetMeasuredGripperMovementRequest_()
    : input()  {
    }
  GetMeasuredGripperMovementRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::GripperRequest_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetMeasuredGripperMovementRequest_

typedef ::kortex_driver::GetMeasuredGripperMovementRequest_<std::allocator<void> > GetMeasuredGripperMovementRequest;

typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementRequest > GetMeasuredGripperMovementRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetMeasuredGripperMovementRequest const> GetMeasuredGripperMovementRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "04a7f7e5f6dd9e64a052ae0e30bcfe9a";
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x04a7f7e5f6dd9e64ULL;
  static const uint64_t static_value2 = 0xa052ae0e30bcfe9aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetMeasuredGripperMovementRequest";
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "GripperRequest input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/GripperRequest\n"
"\n"
"uint32 mode\n"
;
  }

  static const char* value(const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMeasuredGripperMovementRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetMeasuredGripperMovementRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::GripperRequest_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETMEASUREDGRIPPERMOVEMENTREQUEST_H
