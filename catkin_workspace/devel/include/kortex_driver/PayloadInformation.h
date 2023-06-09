// Generated by gencpp from file kortex_driver/PayloadInformation.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_PAYLOADINFORMATION_H
#define KORTEX_DRIVER_MESSAGE_PAYLOADINFORMATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControlConfig_Position.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct PayloadInformation_
{
  typedef PayloadInformation_<ContainerAllocator> Type;

  PayloadInformation_()
    : payload_mass(0.0)
    , payload_mass_center()  {
    }
  PayloadInformation_(const ContainerAllocator& _alloc)
    : payload_mass(0.0)
    , payload_mass_center(_alloc)  {
  (void)_alloc;
    }



   typedef float _payload_mass_type;
  _payload_mass_type payload_mass;

   typedef  ::kortex_driver::ControlConfig_Position_<ContainerAllocator>  _payload_mass_center_type;
  _payload_mass_center_type payload_mass_center;





  typedef boost::shared_ptr< ::kortex_driver::PayloadInformation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::PayloadInformation_<ContainerAllocator> const> ConstPtr;

}; // struct PayloadInformation_

typedef ::kortex_driver::PayloadInformation_<std::allocator<void> > PayloadInformation;

typedef boost::shared_ptr< ::kortex_driver::PayloadInformation > PayloadInformationPtr;
typedef boost::shared_ptr< ::kortex_driver::PayloadInformation const> PayloadInformationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::PayloadInformation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::PayloadInformation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::PayloadInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::PayloadInformation_<ContainerAllocator2> & rhs)
{
  return lhs.payload_mass == rhs.payload_mass &&
    lhs.payload_mass_center == rhs.payload_mass_center;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::PayloadInformation_<ContainerAllocator1> & lhs, const ::kortex_driver::PayloadInformation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PayloadInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PayloadInformation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PayloadInformation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6414681a38d62f0a2b6ff0a6a813f53";
  }

  static const char* value(const ::kortex_driver::PayloadInformation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6414681a38d62f0ULL;
  static const uint64_t static_value2 = 0xa2b6ff0a6a813f53ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/PayloadInformation";
  }

  static const char* value(const ::kortex_driver::PayloadInformation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 payload_mass\n"
"ControlConfig_Position payload_mass_center\n"
"================================================================================\n"
"MSG: kortex_driver/ControlConfig_Position\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::kortex_driver::PayloadInformation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.payload_mass);
      stream.next(m.payload_mass_center);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PayloadInformation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::PayloadInformation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::PayloadInformation_<ContainerAllocator>& v)
  {
    s << indent << "payload_mass: ";
    Printer<float>::stream(s, indent + "  ", v.payload_mass);
    s << indent << "payload_mass_center: ";
    s << std::endl;
    Printer< ::kortex_driver::ControlConfig_Position_<ContainerAllocator> >::stream(s, indent + "  ", v.payload_mass_center);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_PAYLOADINFORMATION_H
