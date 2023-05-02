// Generated by gencpp from file kortex_driver/CreateProtectionZoneRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONEREQUEST_H
#define KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONEREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ProtectionZone.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct CreateProtectionZoneRequest_
{
  typedef CreateProtectionZoneRequest_<ContainerAllocator> Type;

  CreateProtectionZoneRequest_()
    : input()  {
    }
  CreateProtectionZoneRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ProtectionZone_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CreateProtectionZoneRequest_

typedef ::kortex_driver::CreateProtectionZoneRequest_<std::allocator<void> > CreateProtectionZoneRequest;

typedef boost::shared_ptr< ::kortex_driver::CreateProtectionZoneRequest > CreateProtectionZoneRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::CreateProtectionZoneRequest const> CreateProtectionZoneRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4d5a655d6317e3b457ac496f23c160cd";
  }

  static const char* value(const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4d5a655d6317e3b4ULL;
  static const uint64_t static_value2 = 0x57ac496f23c160cdULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CreateProtectionZoneRequest";
  }

  static const char* value(const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ProtectionZone input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ProtectionZone\n"
"\n"
"ProtectionZoneHandle handle\n"
"string name\n"
"string application_data\n"
"bool is_enabled\n"
"ZoneShape shape\n"
"CartesianLimitation[] limitations\n"
"CartesianLimitation[] envelope_limitations\n"
"================================================================================\n"
"MSG: kortex_driver/ProtectionZoneHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/ZoneShape\n"
"\n"
"uint32 shape_type\n"
"Point origin\n"
"Base_RotationMatrix orientation\n"
"float32[] dimensions\n"
"float32 envelope_thickness\n"
"================================================================================\n"
"MSG: kortex_driver/Point\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrix\n"
"\n"
"Base_RotationMatrixRow row1\n"
"Base_RotationMatrixRow row2\n"
"Base_RotationMatrixRow row3\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrixRow\n"
"\n"
"float32 column1\n"
"float32 column2\n"
"float32 column3\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianLimitation\n"
"\n"
"uint32 type\n"
"float32 translation\n"
"float32 orientation\n"
;
  }

  static const char* value(const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateProtectionZoneRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CreateProtectionZoneRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ProtectionZone_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CREATEPROTECTIONZONEREQUEST_H
