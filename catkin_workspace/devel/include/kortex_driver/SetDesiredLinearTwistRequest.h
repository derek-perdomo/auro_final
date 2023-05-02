// Generated by gencpp from file kortex_driver/SetDesiredLinearTwistRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SETDESIREDLINEARTWISTREQUEST_H
#define KORTEX_DRIVER_MESSAGE_SETDESIREDLINEARTWISTREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/LinearTwist.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct SetDesiredLinearTwistRequest_
{
  typedef SetDesiredLinearTwistRequest_<ContainerAllocator> Type;

  SetDesiredLinearTwistRequest_()
    : input()  {
    }
  SetDesiredLinearTwistRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::LinearTwist_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetDesiredLinearTwistRequest_

typedef ::kortex_driver::SetDesiredLinearTwistRequest_<std::allocator<void> > SetDesiredLinearTwistRequest;

typedef boost::shared_ptr< ::kortex_driver::SetDesiredLinearTwistRequest > SetDesiredLinearTwistRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::SetDesiredLinearTwistRequest const> SetDesiredLinearTwistRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4a179e9e98e0cbd858e142aa4e286fd2";
  }

  static const char* value(const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4a179e9e98e0cbd8ULL;
  static const uint64_t static_value2 = 0x58e142aa4e286fd2ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SetDesiredLinearTwistRequest";
  }

  static const char* value(const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "LinearTwist input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/LinearTwist\n"
"\n"
"float32 linear\n"
;
  }

  static const char* value(const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetDesiredLinearTwistRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SetDesiredLinearTwistRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::LinearTwist_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SETDESIREDLINEARTWISTREQUEST_H
