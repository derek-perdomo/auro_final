// Generated by gencpp from file kortex_driver/SensorIdentifier.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_SENSORIDENTIFIER_H
#define KORTEX_DRIVER_MESSAGE_SENSORIDENTIFIER_H


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
struct SensorIdentifier_
{
  typedef SensorIdentifier_<ContainerAllocator> Type;

  SensorIdentifier_()
    : sensor(0)  {
    }
  SensorIdentifier_(const ContainerAllocator& _alloc)
    : sensor(0)  {
  (void)_alloc;
    }



   typedef uint32_t _sensor_type;
  _sensor_type sensor;





  typedef boost::shared_ptr< ::kortex_driver::SensorIdentifier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::SensorIdentifier_<ContainerAllocator> const> ConstPtr;

}; // struct SensorIdentifier_

typedef ::kortex_driver::SensorIdentifier_<std::allocator<void> > SensorIdentifier;

typedef boost::shared_ptr< ::kortex_driver::SensorIdentifier > SensorIdentifierPtr;
typedef boost::shared_ptr< ::kortex_driver::SensorIdentifier const> SensorIdentifierConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::SensorIdentifier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::SensorIdentifier_<ContainerAllocator1> & lhs, const ::kortex_driver::SensorIdentifier_<ContainerAllocator2> & rhs)
{
  return lhs.sensor == rhs.sensor;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::SensorIdentifier_<ContainerAllocator1> & lhs, const ::kortex_driver::SensorIdentifier_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::SensorIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::SensorIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::SensorIdentifier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b9fe73419757e1a59473fcd91b011ce9";
  }

  static const char* value(const ::kortex_driver::SensorIdentifier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb9fe73419757e1a5ULL;
  static const uint64_t static_value2 = 0x9473fcd91b011ce9ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/SensorIdentifier";
  }

  static const char* value(const ::kortex_driver::SensorIdentifier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 sensor\n"
;
  }

  static const char* value(const ::kortex_driver::SensorIdentifier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sensor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SensorIdentifier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::SensorIdentifier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::SensorIdentifier_<ContainerAllocator>& v)
  {
    s << indent << "sensor: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.sensor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_SENSORIDENTIFIER_H
