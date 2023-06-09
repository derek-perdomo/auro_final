// Generated by gencpp from file kortex_driver/UpdateEndEffectorTypeConfigurationRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_UPDATEENDEFFECTORTYPECONFIGURATIONREQUEST_H
#define KORTEX_DRIVER_MESSAGE_UPDATEENDEFFECTORTYPECONFIGURATIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ProductConfigurationEndEffectorType.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct UpdateEndEffectorTypeConfigurationRequest_
{
  typedef UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> Type;

  UpdateEndEffectorTypeConfigurationRequest_()
    : input()  {
    }
  UpdateEndEffectorTypeConfigurationRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::ProductConfigurationEndEffectorType_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> const> ConstPtr;

}; // struct UpdateEndEffectorTypeConfigurationRequest_

typedef ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<std::allocator<void> > UpdateEndEffectorTypeConfigurationRequest;

typedef boost::shared_ptr< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest > UpdateEndEffectorTypeConfigurationRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest const> UpdateEndEffectorTypeConfigurationRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6db55183257243561f63029a7fc09ffe";
  }

  static const char* value(const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6db5518325724356ULL;
  static const uint64_t static_value2 = 0x1f63029a7fc09ffeULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/UpdateEndEffectorTypeConfigurationRequest";
  }

  static const char* value(const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ProductConfigurationEndEffectorType input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/ProductConfigurationEndEffectorType\n"
"\n"
"uint32 end_effector_type\n"
;
  }

  static const char* value(const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct UpdateEndEffectorTypeConfigurationRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::UpdateEndEffectorTypeConfigurationRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::ProductConfigurationEndEffectorType_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_UPDATEENDEFFECTORTYPECONFIGURATIONREQUEST_H
