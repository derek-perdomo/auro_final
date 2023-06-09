// Generated by gencpp from file kortex_driver/ResetTwistAngularSoftLimitResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_RESETTWISTANGULARSOFTLIMITRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_RESETTWISTANGULARSOFTLIMITRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TwistAngularSoftLimit.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ResetTwistAngularSoftLimitResponse_
{
  typedef ResetTwistAngularSoftLimitResponse_<ContainerAllocator> Type;

  ResetTwistAngularSoftLimitResponse_()
    : output()  {
    }
  ResetTwistAngularSoftLimitResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::TwistAngularSoftLimit_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ResetTwistAngularSoftLimitResponse_

typedef ::kortex_driver::ResetTwistAngularSoftLimitResponse_<std::allocator<void> > ResetTwistAngularSoftLimitResponse;

typedef boost::shared_ptr< ::kortex_driver::ResetTwistAngularSoftLimitResponse > ResetTwistAngularSoftLimitResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::ResetTwistAngularSoftLimitResponse const> ResetTwistAngularSoftLimitResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1ad82473bf29ed446f8b39f5390816e9";
  }

  static const char* value(const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1ad82473bf29ed44ULL;
  static const uint64_t static_value2 = 0x6f8b39f5390816e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ResetTwistAngularSoftLimitResponse";
  }

  static const char* value(const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TwistAngularSoftLimit output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/TwistAngularSoftLimit\n"
"\n"
"uint32 control_mode\n"
"float32 twist_angular_soft_limit\n"
;
  }

  static const char* value(const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ResetTwistAngularSoftLimitResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ResetTwistAngularSoftLimitResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::TwistAngularSoftLimit_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_RESETTWISTANGULARSOFTLIMITRESPONSE_H
