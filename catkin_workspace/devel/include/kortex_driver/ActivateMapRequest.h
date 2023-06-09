// Generated by gencpp from file kortex_driver/ActivateMapRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ACTIVATEMAPREQUEST_H
#define KORTEX_DRIVER_MESSAGE_ACTIVATEMAPREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ActivateMapHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ActivateMapRequest_
{
  typedef ActivateMapRequest_<ContainerAllocator> Type;

  ActivateMapRequest_()
    : input()  {
    }
  ActivateMapRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ActivateMapHandle_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct ActivateMapRequest_

typedef ::kortex_driver::ActivateMapRequest_<std::allocator<void> > ActivateMapRequest;

typedef boost::shared_ptr< ::kortex_driver::ActivateMapRequest > ActivateMapRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::ActivateMapRequest const> ActivateMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ActivateMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ActivateMapRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::ActivateMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ActivateMapRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::ActivateMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "94263c724317f0071dc0beb0531598cf";
  }

  static const char* value(const ::kortex_driver::ActivateMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x94263c724317f007ULL;
  static const uint64_t static_value2 = 0x1dc0beb0531598cfULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ActivateMapRequest";
  }

  static const char* value(const ::kortex_driver::ActivateMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ActivateMapHandle input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ActivateMapHandle\n"
"\n"
"MappingHandle mapping_handle\n"
"MapGroupHandle map_group_handle\n"
"MapHandle map_handle\n"
"================================================================================\n"
"MSG: kortex_driver/MappingHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapGroupHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::ActivateMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActivateMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ActivateMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ActivateMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ActivateMapHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ACTIVATEMAPREQUEST_H
