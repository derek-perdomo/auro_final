// Generated by gencpp from file kortex_driver/CreateMappingResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CREATEMAPPINGRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_CREATEMAPPINGRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/MappingHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct CreateMappingResponse_
{
  typedef CreateMappingResponse_<ContainerAllocator> Type;

  CreateMappingResponse_()
    : output()  {
    }
  CreateMappingResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::MappingHandle_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CreateMappingResponse_

typedef ::kortex_driver::CreateMappingResponse_<std::allocator<void> > CreateMappingResponse;

typedef boost::shared_ptr< ::kortex_driver::CreateMappingResponse > CreateMappingResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::CreateMappingResponse const> CreateMappingResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CreateMappingResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CreateMappingResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateMappingResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CreateMappingResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::CreateMappingResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "335f209b31742c233f4d4fd3cb08b30f";
  }

  static const char* value(const ::kortex_driver::CreateMappingResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x335f209b31742c23ULL;
  static const uint64_t static_value2 = 0x3f4d4fd3cb08b30fULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CreateMappingResponse";
  }

  static const char* value(const ::kortex_driver::CreateMappingResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MappingHandle output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/MappingHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::CreateMappingResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CreateMappingResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CreateMappingResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CreateMappingResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::MappingHandle_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CREATEMAPPINGRESPONSE_H
