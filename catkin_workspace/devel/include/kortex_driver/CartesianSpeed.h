// Generated by gencpp from file kortex_driver/CartesianSpeed.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CARTESIANSPEED_H
#define KORTEX_DRIVER_MESSAGE_CARTESIANSPEED_H


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
struct CartesianSpeed_
{
  typedef CartesianSpeed_<ContainerAllocator> Type;

  CartesianSpeed_()
    : translation(0.0)
    , orientation(0.0)  {
    }
  CartesianSpeed_(const ContainerAllocator& _alloc)
    : translation(0.0)
    , orientation(0.0)  {
  (void)_alloc;
    }



   typedef float _translation_type;
  _translation_type translation;

   typedef float _orientation_type;
  _orientation_type orientation;





  typedef boost::shared_ptr< ::kortex_driver::CartesianSpeed_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CartesianSpeed_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianSpeed_

typedef ::kortex_driver::CartesianSpeed_<std::allocator<void> > CartesianSpeed;

typedef boost::shared_ptr< ::kortex_driver::CartesianSpeed > CartesianSpeedPtr;
typedef boost::shared_ptr< ::kortex_driver::CartesianSpeed const> CartesianSpeedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CartesianSpeed_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CartesianSpeed_<ContainerAllocator1> & lhs, const ::kortex_driver::CartesianSpeed_<ContainerAllocator2> & rhs)
{
  return lhs.translation == rhs.translation &&
    lhs.orientation == rhs.orientation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CartesianSpeed_<ContainerAllocator1> & lhs, const ::kortex_driver::CartesianSpeed_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CartesianSpeed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CartesianSpeed_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CartesianSpeed_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0fa17c7fbcac20ea2a06fae93c7ef126";
  }

  static const char* value(const ::kortex_driver::CartesianSpeed_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0fa17c7fbcac20eaULL;
  static const uint64_t static_value2 = 0x2a06fae93c7ef126ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CartesianSpeed";
  }

  static const char* value(const ::kortex_driver::CartesianSpeed_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 translation\n"
"float32 orientation\n"
;
  }

  static const char* value(const ::kortex_driver::CartesianSpeed_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.translation);
      stream.next(m.orientation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianSpeed_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CartesianSpeed_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CartesianSpeed_<ContainerAllocator>& v)
  {
    s << indent << "translation: ";
    Printer<float>::stream(s, indent + "  ", v.translation);
    s << indent << "orientation: ";
    Printer<float>::stream(s, indent + "  ", v.orientation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CARTESIANSPEED_H
