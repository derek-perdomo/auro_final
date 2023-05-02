// Generated by gencpp from file kortex_driver/Calibration.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CALIBRATION_H
#define KORTEX_DRIVER_MESSAGE_CALIBRATION_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/CalibrationParameter.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Calibration_
{
  typedef Calibration_<ContainerAllocator> Type;

  Calibration_()
    : calibration_item(0)
    , calibration_parameter()  {
    }
  Calibration_(const ContainerAllocator& _alloc)
    : calibration_item(0)
    , calibration_parameter(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _calibration_item_type;
  _calibration_item_type calibration_item;

   typedef std::vector< ::kortex_driver::CalibrationParameter_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::CalibrationParameter_<ContainerAllocator> >> _calibration_parameter_type;
  _calibration_parameter_type calibration_parameter;





  typedef boost::shared_ptr< ::kortex_driver::Calibration_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Calibration_<ContainerAllocator> const> ConstPtr;

}; // struct Calibration_

typedef ::kortex_driver::Calibration_<std::allocator<void> > Calibration;

typedef boost::shared_ptr< ::kortex_driver::Calibration > CalibrationPtr;
typedef boost::shared_ptr< ::kortex_driver::Calibration const> CalibrationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Calibration_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Calibration_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Calibration_<ContainerAllocator1> & lhs, const ::kortex_driver::Calibration_<ContainerAllocator2> & rhs)
{
  return lhs.calibration_item == rhs.calibration_item &&
    lhs.calibration_parameter == rhs.calibration_parameter;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Calibration_<ContainerAllocator1> & lhs, const ::kortex_driver::Calibration_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Calibration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Calibration_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Calibration_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Calibration_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Calibration_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Calibration_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Calibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4e1f62c964640a6b04e3e0de4bfef9f2";
  }

  static const char* value(const ::kortex_driver::Calibration_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4e1f62c964640a6bULL;
  static const uint64_t static_value2 = 0x04e3e0de4bfef9f2ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Calibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Calibration";
  }

  static const char* value(const ::kortex_driver::Calibration_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Calibration_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 calibration_item\n"
"CalibrationParameter[] calibration_parameter\n"
"================================================================================\n"
"MSG: kortex_driver/CalibrationParameter\n"
"\n"
"uint32 calibration_parameter_identifier\n"
"CalibrationParameter_value oneof_value\n"
"================================================================================\n"
"MSG: kortex_driver/CalibrationParameter_value\n"
"\n"
"uint32[] signedIntValue\n"
"uint32[] unsignedIntValue\n"
"uint32[] floatValue\n"
;
  }

  static const char* value(const ::kortex_driver::Calibration_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Calibration_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.calibration_item);
      stream.next(m.calibration_parameter);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Calibration_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Calibration_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Calibration_<ContainerAllocator>& v)
  {
    s << indent << "calibration_item: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.calibration_item);
    s << indent << "calibration_parameter[]" << std::endl;
    for (size_t i = 0; i < v.calibration_parameter.size(); ++i)
    {
      s << indent << "  calibration_parameter[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::CalibrationParameter_<ContainerAllocator> >::stream(s, indent + "    ", v.calibration_parameter[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CALIBRATION_H
