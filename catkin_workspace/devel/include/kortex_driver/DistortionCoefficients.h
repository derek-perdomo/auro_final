// Generated by gencpp from file kortex_driver/DistortionCoefficients.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_DISTORTIONCOEFFICIENTS_H
#define KORTEX_DRIVER_MESSAGE_DISTORTIONCOEFFICIENTS_H


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
struct DistortionCoefficients_
{
  typedef DistortionCoefficients_<ContainerAllocator> Type;

  DistortionCoefficients_()
    : k1(0.0)
    , k2(0.0)
    , k3(0.0)
    , p1(0.0)
    , p2(0.0)  {
    }
  DistortionCoefficients_(const ContainerAllocator& _alloc)
    : k1(0.0)
    , k2(0.0)
    , k3(0.0)
    , p1(0.0)
    , p2(0.0)  {
  (void)_alloc;
    }



   typedef float _k1_type;
  _k1_type k1;

   typedef float _k2_type;
  _k2_type k2;

   typedef float _k3_type;
  _k3_type k3;

   typedef float _p1_type;
  _p1_type p1;

   typedef float _p2_type;
  _p2_type p2;





  typedef boost::shared_ptr< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> const> ConstPtr;

}; // struct DistortionCoefficients_

typedef ::kortex_driver::DistortionCoefficients_<std::allocator<void> > DistortionCoefficients;

typedef boost::shared_ptr< ::kortex_driver::DistortionCoefficients > DistortionCoefficientsPtr;
typedef boost::shared_ptr< ::kortex_driver::DistortionCoefficients const> DistortionCoefficientsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::DistortionCoefficients_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::DistortionCoefficients_<ContainerAllocator1> & lhs, const ::kortex_driver::DistortionCoefficients_<ContainerAllocator2> & rhs)
{
  return lhs.k1 == rhs.k1 &&
    lhs.k2 == rhs.k2 &&
    lhs.k3 == rhs.k3 &&
    lhs.p1 == rhs.p1 &&
    lhs.p2 == rhs.p2;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::DistortionCoefficients_<ContainerAllocator1> & lhs, const ::kortex_driver::DistortionCoefficients_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3d597195629c570d527b87022489fa04";
  }

  static const char* value(const ::kortex_driver::DistortionCoefficients_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3d597195629c570dULL;
  static const uint64_t static_value2 = 0x527b87022489fa04ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/DistortionCoefficients";
  }

  static const char* value(const ::kortex_driver::DistortionCoefficients_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 k1\n"
"float32 k2\n"
"float32 k3\n"
"float32 p1\n"
"float32 p2\n"
;
  }

  static const char* value(const ::kortex_driver::DistortionCoefficients_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.k1);
      stream.next(m.k2);
      stream.next(m.k3);
      stream.next(m.p1);
      stream.next(m.p2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DistortionCoefficients_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::DistortionCoefficients_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::DistortionCoefficients_<ContainerAllocator>& v)
  {
    s << indent << "k1: ";
    Printer<float>::stream(s, indent + "  ", v.k1);
    s << indent << "k2: ";
    Printer<float>::stream(s, indent + "  ", v.k2);
    s << indent << "k3: ";
    Printer<float>::stream(s, indent + "  ", v.k3);
    s << indent << "p1: ";
    Printer<float>::stream(s, indent + "  ", v.p1);
    s << indent << "p2: ";
    Printer<float>::stream(s, indent + "  ", v.p2);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_DISTORTIONCOEFFICIENTS_H
