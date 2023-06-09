// Generated by gencpp from file kortex_driver/GetTrajectoryErrorReportResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETTRAJECTORYERRORREPORTRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_GETTRAJECTORYERRORREPORTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/TrajectoryErrorReport.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetTrajectoryErrorReportResponse_
{
  typedef GetTrajectoryErrorReportResponse_<ContainerAllocator> Type;

  GetTrajectoryErrorReportResponse_()
    : output()  {
    }
  GetTrajectoryErrorReportResponse_(const ContainerAllocator& _alloc)
    : output(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::TrajectoryErrorReport_<ContainerAllocator>  _output_type;
  _output_type output;





  typedef boost::shared_ptr< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetTrajectoryErrorReportResponse_

typedef ::kortex_driver::GetTrajectoryErrorReportResponse_<std::allocator<void> > GetTrajectoryErrorReportResponse;

typedef boost::shared_ptr< ::kortex_driver::GetTrajectoryErrorReportResponse > GetTrajectoryErrorReportResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::GetTrajectoryErrorReportResponse const> GetTrajectoryErrorReportResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator2> & rhs)
{
  return lhs.output == rhs.output;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "78f80ad2dfce158708c08b1d353a0a4d";
  }

  static const char* value(const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x78f80ad2dfce1587ULL;
  static const uint64_t static_value2 = 0x08c08b1d353a0a4dULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetTrajectoryErrorReportResponse";
  }

  static const char* value(const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "TrajectoryErrorReport output\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/TrajectoryErrorReport\n"
"\n"
"TrajectoryErrorElement[] trajectory_error_elements\n"
"================================================================================\n"
"MSG: kortex_driver/TrajectoryErrorElement\n"
"\n"
"uint32 error_type\n"
"uint32 error_identifier\n"
"float32 error_value\n"
"float32 min_value\n"
"float32 max_value\n"
"uint32 index\n"
"string message\n"
"uint32 waypoint_index\n"
;
  }

  static const char* value(const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.output);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetTrajectoryErrorReportResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetTrajectoryErrorReportResponse_<ContainerAllocator>& v)
  {
    s << indent << "output: ";
    s << std::endl;
    Printer< ::kortex_driver::TrajectoryErrorReport_<ContainerAllocator> >::stream(s, indent + "  ", v.output);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETTRAJECTORYERRORREPORTRESPONSE_H
