// Generated by gencpp from file kortex_driver/ActuatorConfig_ControlMode.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODE_H
#define KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace kortex_driver
{
template <class ContainerAllocator>
struct ActuatorConfig_ControlMode_
{
  typedef ActuatorConfig_ControlMode_<ContainerAllocator> Type;

  ActuatorConfig_ControlMode_()
    {
    }
  ActuatorConfig_ControlMode_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NONE)
  #undef NONE
#endif
#if defined(_WIN32) && defined(POSITION)
  #undef POSITION
#endif
#if defined(_WIN32) && defined(VELOCITY)
  #undef VELOCITY
#endif
#if defined(_WIN32) && defined(TORQUE)
  #undef TORQUE
#endif
#if defined(_WIN32) && defined(CURRENT)
  #undef CURRENT
#endif
#if defined(_WIN32) && defined(CUSTOM)
  #undef CUSTOM
#endif
#if defined(_WIN32) && defined(TORQUE_HIGH_VELOCITY)
  #undef TORQUE_HIGH_VELOCITY
#endif

  enum {
    NONE = 0u,
    POSITION = 1u,
    VELOCITY = 2u,
    TORQUE = 3u,
    CURRENT = 4u,
    CUSTOM = 5u,
    TORQUE_HIGH_VELOCITY = 6u,
  };


  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> const> ConstPtr;

}; // struct ActuatorConfig_ControlMode_

typedef ::kortex_driver::ActuatorConfig_ControlMode_<std::allocator<void> > ActuatorConfig_ControlMode;

typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlMode > ActuatorConfig_ControlModePtr;
typedef boost::shared_ptr< ::kortex_driver::ActuatorConfig_ControlMode const> ActuatorConfig_ControlModeConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb12ce17d437184d7baad58c2fe8b556";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb12ce17d437184dULL;
  static const uint64_t static_value2 = 0x7baad58c2fe8b556ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActuatorConfig_ControlMode";
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 NONE = 0\n"
"\n"
"uint32 POSITION = 1\n"
"\n"
"uint32 VELOCITY = 2\n"
"\n"
"uint32 TORQUE = 3\n"
"\n"
"uint32 CURRENT = 4\n"
"\n"
"uint32 CUSTOM = 5\n"
"\n"
"uint32 TORQUE_HIGH_VELOCITY = 6\n"
;
  }

  static const char* value(const ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActuatorConfig_ControlMode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::ActuatorConfig_ControlMode_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTUATORCONFIG_CONTROLMODE_H
