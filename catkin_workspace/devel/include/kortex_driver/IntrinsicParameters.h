// Generated by gencpp from file kortex_driver/IntrinsicParameters.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTRINSICPARAMETERS_H
#define KORTEX_DRIVER_MESSAGE_INTRINSICPARAMETERS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/DistortionCoefficients.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct IntrinsicParameters_
{
  typedef IntrinsicParameters_<ContainerAllocator> Type;

  IntrinsicParameters_()
    : sensor(0)
    , resolution(0)
    , principal_point_x(0.0)
    , principal_point_y(0.0)
    , focal_length_x(0.0)
    , focal_length_y(0.0)
    , distortion_coeffs()  {
    }
  IntrinsicParameters_(const ContainerAllocator& _alloc)
    : sensor(0)
    , resolution(0)
    , principal_point_x(0.0)
    , principal_point_y(0.0)
    , focal_length_x(0.0)
    , focal_length_y(0.0)
    , distortion_coeffs(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _sensor_type;
  _sensor_type sensor;

   typedef uint32_t _resolution_type;
  _resolution_type resolution;

   typedef float _principal_point_x_type;
  _principal_point_x_type principal_point_x;

   typedef float _principal_point_y_type;
  _principal_point_y_type principal_point_y;

   typedef float _focal_length_x_type;
  _focal_length_x_type focal_length_x;

   typedef float _focal_length_y_type;
  _focal_length_y_type focal_length_y;

   typedef  ::kortex_driver::DistortionCoefficients_<ContainerAllocator>  _distortion_coeffs_type;
  _distortion_coeffs_type distortion_coeffs;





  typedef boost::shared_ptr< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> const> ConstPtr;

}; // struct IntrinsicParameters_

typedef ::kortex_driver::IntrinsicParameters_<std::allocator<void> > IntrinsicParameters;

typedef boost::shared_ptr< ::kortex_driver::IntrinsicParameters > IntrinsicParametersPtr;
typedef boost::shared_ptr< ::kortex_driver::IntrinsicParameters const> IntrinsicParametersConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::IntrinsicParameters_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::IntrinsicParameters_<ContainerAllocator1> & lhs, const ::kortex_driver::IntrinsicParameters_<ContainerAllocator2> & rhs)
{
  return lhs.sensor == rhs.sensor &&
    lhs.resolution == rhs.resolution &&
    lhs.principal_point_x == rhs.principal_point_x &&
    lhs.principal_point_y == rhs.principal_point_y &&
    lhs.focal_length_x == rhs.focal_length_x &&
    lhs.focal_length_y == rhs.focal_length_y &&
    lhs.distortion_coeffs == rhs.distortion_coeffs;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::IntrinsicParameters_<ContainerAllocator1> & lhs, const ::kortex_driver::IntrinsicParameters_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "23b95f71707877a1e06e2ac8ba309bb9";
  }

  static const char* value(const ::kortex_driver::IntrinsicParameters_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x23b95f71707877a1ULL;
  static const uint64_t static_value2 = 0xe06e2ac8ba309bb9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/IntrinsicParameters";
  }

  static const char* value(const ::kortex_driver::IntrinsicParameters_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 sensor\n"
"uint32 resolution\n"
"float32 principal_point_x\n"
"float32 principal_point_y\n"
"float32 focal_length_x\n"
"float32 focal_length_y\n"
"DistortionCoefficients distortion_coeffs\n"
"================================================================================\n"
"MSG: kortex_driver/DistortionCoefficients\n"
"\n"
"float32 k1\n"
"float32 k2\n"
"float32 k3\n"
"float32 p1\n"
"float32 p2\n"
;
  }

  static const char* value(const ::kortex_driver::IntrinsicParameters_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor);
      stream.next(m.resolution);
      stream.next(m.principal_point_x);
      stream.next(m.principal_point_y);
      stream.next(m.focal_length_x);
      stream.next(m.focal_length_y);
      stream.next(m.distortion_coeffs);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IntrinsicParameters_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::IntrinsicParameters_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::IntrinsicParameters_<ContainerAllocator>& v)
  {
    s << indent << "sensor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensor);
    s << indent << "resolution: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.resolution);
    s << indent << "principal_point_x: ";
    Printer<float>::stream(s, indent + "  ", v.principal_point_x);
    s << indent << "principal_point_y: ";
    Printer<float>::stream(s, indent + "  ", v.principal_point_y);
    s << indent << "focal_length_x: ";
    Printer<float>::stream(s, indent + "  ", v.focal_length_x);
    s << indent << "focal_length_y: ";
    Printer<float>::stream(s, indent + "  ", v.focal_length_y);
    s << indent << "distortion_coeffs: ";
    s << std::endl;
    Printer< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >::stream(s, indent + "  ", v.distortion_coeffs);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTRINSICPARAMETERS_H
