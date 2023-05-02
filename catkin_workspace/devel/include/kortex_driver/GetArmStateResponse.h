// Generated by gencpp from file kortex_driver/GetArmStateResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETARMSTATERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETARMSTATERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ArmStateInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetArmStateResponse_
{
  typedef GetArmStateResponse_<ContainerAllocator> Type;

  GetArmStateResponse_()
    : output()  {
    }
  GetArmStateResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ArmStateInformation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetArmStateResponse_

typedef ::kortex_driver::GetArmStateResponse_<std::allocator<void> > GetArmStateResponse;

typedef boost::shared_ptr< ::kortex_driver::GetArmStateResponse > GetArmStateResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetArmStateResponse const> GetArmStateResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetArmStateResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetArmStateResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetArmStateResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetArmStateResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetArmStateResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "12602afc0ec80b4ad732a60f2da416b9";
  }

  static const char* value(const ::kortex_driver::GetArmStateResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x12602afc0ec80b4aULL;
  static const uint64_t static_value2 = 0xd732a60f2da416b9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetArmStateResponse";
  }

  static const char* value(const ::kortex_driver::GetArmStateResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ArmStateInformation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ArmStateInformation\n"
"\n"
"uint32 active_state\n"
"Connection connection\n"
"================================================================================\n"
"MSG: kortex_driver/Connection\n"
"\n"
"UserProfileHandle user_handle\n"
"string connection_information\n"
"uint32 connection_identifier\n"
"================================================================================\n"
"MSG: kortex_driver/UserProfileHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::GetArmStateResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetArmStateResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetArmStateResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetArmStateResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ArmStateInformation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETARMSTATERESPONSE_H
