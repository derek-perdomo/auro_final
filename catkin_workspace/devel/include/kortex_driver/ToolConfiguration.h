// Generated by gencpp from file kortex_driver/ToolConfiguration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_TOOLCONFIGURATION_H
#define KORTEX_DRIVER_MESSAGE_TOOLCONFIGURATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CartesianTransform.h>
#include <kortex_driver/ControlConfig_Position.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ToolConfiguration_
{
  typedef ToolConfiguration_<ContainerAllocator> Type;

  ToolConfiguration_()
    : tool_transform()
    , tool_mass(0.0)
    , tool_mass_center()  {
    }
  ToolConfiguration_(const ContainerAllocator& _alloc)
    : tool_transform(_alloc)
    , tool_mass(0.0)
    , tool_mass_center(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::CartesianTransform_<ContainerAllocator>  _tool_transform_type;
  _tool_transform_type tool_transform;

   typedef float _tool_mass_type;
  _tool_mass_type tool_mass;

   typedef  ::kortex_driver::ControlConfig_Position_<ContainerAllocator>  _tool_mass_center_type;
  _tool_mass_center_type tool_mass_center;





  typedef boost::shared_ptr< ::kortex_driver::ToolConfiguration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ToolConfiguration_<ContainerAllocator> const> ConstPtr;

}; // struct ToolConfiguration_

typedef ::kortex_driver::ToolConfiguration_<std::allocator<void> > ToolConfiguration;

typedef boost::shared_ptr< ::kortex_driver::ToolConfiguration > ToolConfigurationPtr;
typedef boost::shared_ptr< ::kortex_driver::ToolConfiguration const> ToolConfigurationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ToolConfiguration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ToolConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::ToolConfiguration_<ContainerAllocator2> & rhs)
{
  return lhs.tool_transform == rhs.tool_transform &&
    lhs.tool_mass == rhs.tool_mass &&
    lhs.tool_mass_center == rhs.tool_mass_center;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ToolConfiguration_<ContainerAllocator1> & lhs, const ::kortex_driver::ToolConfiguration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ToolConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ToolConfiguration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ToolConfiguration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cf7e6c29cefe7625fb7412c1a3c76941";
  }

  static const char* value(const ::kortex_driver::ToolConfiguration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcf7e6c29cefe7625ULL;
  static const uint64_t static_value2 = 0xfb7412c1a3c76941ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ToolConfiguration";
  }

  static const char* value(const ::kortex_driver::ToolConfiguration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"CartesianTransform tool_transform\n"
"float32 tool_mass\n"
"ControlConfig_Position tool_mass_center\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianTransform\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
"================================================================================\n"
"MSG: kortex_driver/ControlConfig_Position\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::kortex_driver::ToolConfiguration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tool_transform);
      stream.next(m.tool_mass);
      stream.next(m.tool_mass_center);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ToolConfiguration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ToolConfiguration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ToolConfiguration_<ContainerAllocator>& v)
  {
    s << indent << "tool_transform: ";
    s << std::endl;
    Printer< ::kortex_driver::CartesianTransform_<ContainerAllocator> >::stream(s, indent + "  ", v.tool_transform);
    s << indent << "tool_mass: ";
    Printer<float>::stream(s, indent + "  ", v.tool_mass);
    s << indent << "tool_mass_center: ";
    s << std::endl;
    Printer< ::kortex_driver::ControlConfig_Position_<ContainerAllocator> >::stream(s, indent + "  ", v.tool_mass_center);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_TOOLCONFIGURATION_H
