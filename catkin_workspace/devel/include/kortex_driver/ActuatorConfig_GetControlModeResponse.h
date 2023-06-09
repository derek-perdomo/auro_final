// Generated by gencpp from file kortex_driver/ActuatorConfig_GetControlModeResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_GETCONTROLMODERESPONSE_H
#define KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_GETCONTROLMODERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ActuatorConfig_ControlModeInformation.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ActuatorConfig_GetControlModeResponse_
{
  typedef ActuatorConfig_GetControlModeResponse_<ContainerAllocator> Type;

  ActuatorConfig_GetControlModeResponse_()
    : output()  {
    }
  ActuatorConfig_GetControlModeResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorConfig_GetControlModeResponse_

typedef ::kortex_driver::ActuatorConfig_GetControlModeResponse_<std::allocator<void> > ActuatorConfig_GetControlModeResponse;

typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_GetControlModeResponse > ActuatorConfig_GetControlModeResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_GetControlModeResponse const> ActuatorConfig_GetControlModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e3d508e1e33b4af9f591f4bf29eb71d5";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe3d508e1e33b4af9ULL;
  static const uint64_t static_value2 = 0xf591f4bf29eb71d5ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActuatorConfig_GetControlModeResponse";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ActuatorConfig_ControlModeInformation output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ActuatorConfig_ControlModeInformation\n"
"\n"
"uint32 control_mode\n"
;
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorConfig_GetControlModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActuatorConfig_GetControlModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::ActuatorConfig_ControlModeInformation_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_GETCONTROLMODERESPONSE_H
