// Generated by gencpp from file kortex_driver/GripperConfig_SafetyIdentifier.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GRIPPERCONFIG_SAFETYIDENTIFIER_H
#define KORTEX_DRIVER_MESSAGE_GRIPPERCONFIG_SAFETYIDENTIFIER_H


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
struct GripperConfig_SafetyIdentifier_
{
  typedef GripperConfig_SafetyIdentifier_<ContainerAllocator> Type;

  GripperConfig_SafetyIdentifier_()
    {
    }
  GripperConfig_SafetyIdentifier_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_ACTUATOR_SAFETY_IDENTIFIER)
  #undef UNSPECIFIED_ACTUATOR_SAFETY_IDENTIFIER
#endif
#if defined(_WIN32) && defined(MAXIMUM_MOTOR_CURRENT)
  #undef MAXIMUM_MOTOR_CURRENT
#endif
#if defined(_WIN32) && defined(MAXIMUM_VOLTAGE)
  #undef MAXIMUM_VOLTAGE
#endif
#if defined(_WIN32) && defined(MINIMUM_VOLTAGE)
  #undef MINIMUM_VOLTAGE
#endif
#if defined(_WIN32) && defined(MAXIMUM_MOTOR_TEMPERATURE)
  #undef MAXIMUM_MOTOR_TEMPERATURE
#endif
#if defined(_WIN32) && defined(MAXIMUM_CORE_TEMPERATURE)
  #undef MAXIMUM_CORE_TEMPERATURE
#endif
#if defined(_WIN32) && defined(NON_VOLATILE_MEMORY_CORRUPTED)
  #undef NON_VOLATILE_MEMORY_CORRUPTED
#endif
#if defined(_WIN32) && defined(EMERGENCY_LINE_ASSERTED)
  #undef EMERGENCY_LINE_ASSERTED
#endif
#if defined(_WIN32) && defined(COMMUNICATION_TICK_LOST)
  #undef COMMUNICATION_TICK_LOST
#endif
#if defined(_WIN32) && defined(WATCHDOG_TRIGGERED)
  #undef WATCHDOG_TRIGGERED
#endif

  enum {
    UNSPECIFIED_ACTUATOR_SAFETY_IDENTIFIER = 0u,
    MAXIMUM_MOTOR_CURRENT = 1u,
    MAXIMUM_VOLTAGE = 2u,
    MINIMUM_VOLTAGE = 4u,
    MAXIMUM_MOTOR_TEMPERATURE = 8u,
    MAXIMUM_CORE_TEMPERATURE = 16u,
    NON_VOLATILE_MEMORY_CORRUPTED = 32u,
    EMERGENCY_LINE_ASSERTED = 64u,
    COMMUNICATION_TICK_LOST = 128u,
    WATCHDOG_TRIGGERED = 256u,
  };


  typedef boost::shared_ptr< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> const> ConstPtr;

}; // struct GripperConfig_SafetyIdentifier_

typedef ::kortex_driver::GripperConfig_SafetyIdentifier_<std::allocator<void> > GripperConfig_SafetyIdentifier;

typedef boost::shared_ptr< ::kortex_driver::GripperConfig_SafetyIdentifier > GripperConfig_SafetyIdentifierPtr;
typedef boost::shared_ptr< ::kortex_driver::GripperConfig_SafetyIdentifier const> GripperConfig_SafetyIdentifierConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7392d34e7992e1d68eccf5c1f5cd7f7";
  }

  static const char* value(const ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7392d34e7992e1dULL;
  static const uint64_t static_value2 = 0x68eccf5c1f5cd7f7ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GripperConfig_SafetyIdentifier";
  }

  static const char* value(const ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_ACTUATOR_SAFETY_IDENTIFIER = 0\n"
"\n"
"uint32 MAXIMUM_MOTOR_CURRENT = 1\n"
"\n"
"uint32 MAXIMUM_VOLTAGE = 2\n"
"\n"
"uint32 MINIMUM_VOLTAGE = 4\n"
"\n"
"uint32 MAXIMUM_MOTOR_TEMPERATURE = 8\n"
"\n"
"uint32 MAXIMUM_CORE_TEMPERATURE = 16\n"
"\n"
"uint32 NON_VOLATILE_MEMORY_CORRUPTED = 32\n"
"\n"
"uint32 EMERGENCY_LINE_ASSERTED = 64\n"
"\n"
"uint32 COMMUNICATION_TICK_LOST = 128\n"
"\n"
"uint32 WATCHDOG_TRIGGERED = 256\n"
;
  }

  static const char* value(const ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GripperConfig_SafetyIdentifier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::GripperConfig_SafetyIdentifier_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GRIPPERCONFIG_SAFETYIDENTIFIER_H
