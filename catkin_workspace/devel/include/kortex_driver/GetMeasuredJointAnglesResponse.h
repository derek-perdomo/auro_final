// Generated by gencpp from file kortex_driver/GetMeasuredJointAnglesResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETMEASUREDJOINTANGLESRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETMEASUREDJOINTANGLESRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/JointAngles.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetMeasuredJointAnglesResponse_
{
  typedef GetMeasuredJointAnglesResponse_<ContainerAllocator> Type;

  GetMeasuredJointAnglesResponse_()
    : output()  {
    }
  GetMeasuredJointAnglesResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::JointAngles_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMeasuredJointAnglesResponse_

typedef ::kortex_driver::GetMeasuredJointAnglesResponse_<std::allocator<void> > GetMeasuredJointAnglesResponse;

typedef boost::shared_ptr< ::kortex_driver::GetMeasuredJointAnglesResponse > GetMeasuredJointAnglesResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetMeasuredJointAnglesResponse const> GetMeasuredJointAnglesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "57ef940a22a8b164beebfd955a89b3bb";
  }

  static const char* value(const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x57ef940a22a8b164ULL;
  static const uint64_t static_value2 = 0xbeebfd955a89b3bbULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetMeasuredJointAnglesResponse";
  }

  static const char* value(const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "JointAngles output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/JointAngles\n"
"\n"
"JointAngle[] joint_angles\n"
"================================================================================\n"
"MSG: kortex_driver/JointAngle\n"
"\n"
"uint32 joint_identifier\n"
"float32 value\n"
;
  }

  static const char* value(const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMeasuredJointAnglesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetMeasuredJointAnglesResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::JointAngles_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETMEASUREDJOINTANGLESRESPONSE_H
