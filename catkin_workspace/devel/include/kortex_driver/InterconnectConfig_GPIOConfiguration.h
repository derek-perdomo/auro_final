// Generated by gencpp from file kortex_driver/InterconnectConfig_GPIOConfiguration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTERCONNECTCONFIG_GPIOCONFIGURATION_H
#define KORTEX_DRIVER_MESSAGE_INTERCONNECTCONFIG_GPIOCONFIGURATION_H


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
struct InterconnectConfig_GPIOConfiguration_
{
  typedef InterconnectConfig_GPIOConfiguration_<ContainerAllocator> Type;

  InterconnectConfig_GPIOConfiguration_()
    : identifier(0)
    , mode(0)
    , pull(0)
    , default_value(0)  {
    }
  InterconnectConfig_GPIOConfiguration_(const ContainerAllocator& _alloc)
    : identifier(0)
    , mode(0)
    , pull(0)
    , default_value(0)  {
  (void)_alloc;
    }



   typedef uint32_t _identifier_type;
  _identifier_type identifier;

   typedef uint32_t _mode_type;
  _mode_type mode;

   typedef uint32_t _pull_type;
  _pull_type pull;

   typedef uint32_t _default_value_type;
  _default_value_type default_value;





  typedef boost::shared_ptr< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> const> ConstPtr;

}; // struct InterconnectConfig_GPIOConfiguration_

typedef ::kortex_driver::InterconnectConfig_GPIOConfiguration_<std::allocator<void> > InterconnectConfig_GPIOConfiguration;

typedef boost::shared_ptr< ::kortex_driver::InterconnectConfig_GPIOConfiguration > InterconnectConfig_GPIOConfigurationPtr;
typedef boost::shared_ptr< ::kortex_driver::InterconnectConfig_GPIOConfiguration const> InterconnectConfig_GPIOConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator2> & rhs)
{
  return lhs.identifier == rhs.identifier &&
    lhs.mode == rhs.mode &&
    lhs.pull == rhs.pull &&
    lhs.default_value == rhs.default_value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "beac18d5b1b9bb04dc5a1a2c0d366dac";
  }

  static const char* value(const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbeac18d5b1b9bb04ULL;
  static const uint64_t static_value2 = 0xdc5a1a2c0d366dacULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/InterconnectConfig_GPIOConfiguration";
  }

  static const char* value(const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 identifier\n"
"uint32 mode\n"
"uint32 pull\n"
"uint32 default_value\n"
;
  }

  static const char* value(const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.identifier);
      stream.next(m.mode);
      stream.next(m.pull);
      stream.next(m.default_value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterconnectConfig_GPIOConfiguration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::InterconnectConfig_GPIOConfiguration_<ContainerAllocator>& v)
  {
    s << indent << "identifier: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.identifier);
    s << indent << "mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mode);
    s << indent << "pull: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.pull);
    s << indent << "default_value: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.default_value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTERCONNECTCONFIG_GPIOCONFIGURATION_H
