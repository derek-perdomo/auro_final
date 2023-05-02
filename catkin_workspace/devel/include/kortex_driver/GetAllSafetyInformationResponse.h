// Generated by gencpp from file kortex_driver/GetAllSafetyInformationResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETALLSAFETYINFORMATIONRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETALLSAFETYINFORMATIONRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/SafetyInformationList.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetAllSafetyInformationResponse_
{
  typedef GetAllSafetyInformationResponse_<ContainerAllocator> Type;

  GetAllSafetyInformationResponse_()
    : output()  {
    }
  GetAllSafetyInformationResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::SafetyInformationList_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetAllSafetyInformationResponse_

typedef ::kortex_driver::GetAllSafetyInformationResponse_<std::allocator<void> > GetAllSafetyInformationResponse;

typedef boost::shared_ptr< ::kortex_driver::GetAllSafetyInformationResponse > GetAllSafetyInformationResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetAllSafetyInformationResponse const> GetAllSafetyInformationResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "93c578a5c13fe995b1d1d665a7cf5337";
  }

  static const char* value(const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x93c578a5c13fe995ULL;
  static const uint64_t static_value2 = 0xb1d1d665a7cf5337ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetAllSafetyInformationResponse";
  }

  static const char* value(const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "SafetyInformationList output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyInformationList\n"
"\n"
"SafetyInformation[] information\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyInformation\n"
"\n"
"SafetyHandle handle\n"
"bool can_change_safety_state\n"
"bool has_warning_threshold\n"
"bool has_error_threshold\n"
"uint32 limit_type\n"
"float32 default_warning_threshold\n"
"float32 default_error_threshold\n"
"float32 upper_hard_limit\n"
"float32 lower_hard_limit\n"
"uint32 status\n"
"uint32 unit\n"
"================================================================================\n"
"MSG: kortex_driver/SafetyHandle\n"
"\n"
"uint32 identifier\n"
;
  }

  static const char* value(const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetAllSafetyInformationResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetAllSafetyInformationResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::SafetyInformationList_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETALLSAFETYINFORMATIONRESPONSE_H
