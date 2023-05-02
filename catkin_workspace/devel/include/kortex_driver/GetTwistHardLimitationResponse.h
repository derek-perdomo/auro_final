// Generated by gencpp from file kortex_driver/GetTwistHardLimitationResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETTWISTHARDLIMITATIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETTWISTHARDLIMITATIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TwistLimitation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetTwistHardLimitationResponse_
{
  typedef GetTwistHardLimitationResponse_<ContainerAllocator> Type;

  GetTwistHardLimitationResponse_()
    : output()  {
    }
  GetTwistHardLimitationResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::TwistLimitation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetTwistHardLimitationResponse_

typedef ::kortex_driver::GetTwistHardLimitationResponse_<std::allocator<void> > GetTwistHardLimitationResponse;

typedef boost::shared_ptr< ::kortex_driver::GetTwistHardLimitationResponse > GetTwistHardLimitationResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetTwistHardLimitationResponse const> GetTwistHardLimitationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9072bb865353880c3de62e793dbcdb4e";
  }

  static const char* value(const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9072bb865353880cULL;
  static const uint64_t static_value2 = 0x3de62e793dbcdb4eULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetTwistHardLimitationResponse";
  }

  static const char* value(const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TwistLimitation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/TwistLimitation\n"
"\n"
"float32 linear\n"
"float32 angular\n"
;
  }

  static const char* value(const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetTwistHardLimitationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetTwistHardLimitationResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::TwistLimitation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETTWISTHARDLIMITATIONRESPONSE_H
