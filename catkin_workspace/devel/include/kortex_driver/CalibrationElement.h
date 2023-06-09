// Generated by gencpp from file kortex_driver/CalibrationElement.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CALIBRATIONELEMENT_H
#define KORTEX_DRIVER_MESSAGE_CALIBRATIONELEMENT_H


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
struct CalibrationElement_
{
  typedef CalibrationElement_<ContainerAllocator> Type;

  CalibrationElement_()
    : calibration_item(0)  {
    }
  CalibrationElement_(const ContainerAllocator& _alloc)
    : calibration_item(0)  {
  (void)_alloc;
    }



   typedef uint32_t _calibration_item_type;
  _calibration_item_type calibration_item;





  typedef boost::shared_ptr< ::kortex_driver::CalibrationElement_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CalibrationElement_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrationElement_

typedef ::kortex_driver::CalibrationElement_<std::allocator<void> > CalibrationElement;

typedef boost::shared_ptr< ::kortex_driver::CalibrationElement > CalibrationElementPtr;
typedef boost::shared_ptr< ::kortex_driver::CalibrationElement const> CalibrationElementConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CalibrationElement_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CalibrationElement_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CalibrationElement_<ContainerAllocator1> & lhs, const ::kortex_driver::CalibrationElement_<ContainerAllocator2> & rhs)
{
  return lhs.calibration_item == rhs.calibration_item;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CalibrationElement_<ContainerAllocator1> & lhs, const ::kortex_driver::CalibrationElement_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationElement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationElement_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationElement_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48b2b6bb8d2654cfbe2379c075bcb6a4";
  }

  static const char* value(const ::kortex_driver::CalibrationElement_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48b2b6bb8d2654cfULL;
  static const uint64_t static_value2 = 0xbe2379c075bcb6a4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CalibrationElement";
  }

  static const char* value(const ::kortex_driver::CalibrationElement_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 calibration_item\n"
;
  }

  static const char* value(const ::kortex_driver::CalibrationElement_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.calibration_item);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrationElement_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CalibrationElement_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CalibrationElement_<ContainerAllocator>& v)
  {
    s << indent << "calibration_item: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.calibration_item);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CALIBRATIONELEMENT_H
