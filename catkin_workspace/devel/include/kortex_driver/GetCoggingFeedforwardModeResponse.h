// Generated by gencpp from file kortex_driver/GetCoggingFeedforwardModeResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCOGGINGFEEDFORWARDMODERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETCOGGINGFEEDFORWARDMODERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CoggingFeedforwardModeInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetCoggingFeedforwardModeResponse_
{
  typedef GetCoggingFeedforwardModeResponse_<ContainerAllocator> Type;

  GetCoggingFeedforwardModeResponse_()
    : output()  {
    }
  GetCoggingFeedforwardModeResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CoggingFeedforwardModeInformation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCoggingFeedforwardModeResponse_

typedef ::kortex_driver::GetCoggingFeedforwardModeResponse_<std::allocator<void> > GetCoggingFeedforwardModeResponse;

typedef boost::shared_ptr< ::kortex_driver::GetCoggingFeedforwardModeResponse > GetCoggingFeedforwardModeResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetCoggingFeedforwardModeResponse const> GetCoggingFeedforwardModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dd1f3050013774259b1634ed413b40a8";
  }

  static const char* value(const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdd1f305001377425ULL;
  static const uint64_t static_value2 = 0x9b1634ed413b40a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetCoggingFeedforwardModeResponse";
  }

  static const char* value(const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "CoggingFeedforwardModeInformation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/CoggingFeedforwardModeInformation\n"
"\n"
"uint32 cogging_feedforward_mode\n"
;
  }

  static const char* value(const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCoggingFeedforwardModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetCoggingFeedforwardModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::CoggingFeedforwardModeInformation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCOGGINGFEEDFORWARDMODERESPONSE_H
