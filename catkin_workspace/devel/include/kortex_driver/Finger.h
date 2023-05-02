// Generated by gencpp from file kortex_driver/Finger.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_FINGER_H
#define KORTEX_DRIVER_MESSAGE_FINGER_H


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
struct Finger_
{
  typedef Finger_<ContainerAllocator> Type;

  Finger_()
    : finger_identifier(0)
    , value(0.0)  {
    }
  Finger_(const ContainerAllocator& _alloc)
    : finger_identifier(0)
    , value(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _finger_identifier_type;
  _finger_identifier_type finger_identifier;

   typedef float _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::kortex_driver::Finger_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Finger_<ContainerAllocator> const> ConstPtr;

}; // struct Finger_

typedef ::kortex_driver::Finger_<std::allocator<void> > Finger;

typedef boost::shared_ptr< ::kortex_driver::Finger > FingerPtr;
typedef boost::shared_ptr< ::kortex_driver::Finger const> FingerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Finger_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Finger_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Finger_<ContainerAllocator1> & lhs, const ::kortex_driver::Finger_<ContainerAllocator2> & rhs)
{
  return lhs.finger_identifier == rhs.finger_identifier &&
    lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Finger_<ContainerAllocator1> & lhs, const ::kortex_driver::Finger_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Finger_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Finger_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Finger_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Finger_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Finger_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Finger_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Finger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5bf3287ad42d5a92136c7d9cf8d0eada";
  }

  static const char* value(const ::kortex_driver::Finger_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5bf3287ad42d5a92ULL;
  static const uint64_t static_value2 = 0x136c7d9cf8d0eadaULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Finger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Finger";
  }

  static const char* value(const ::kortex_driver::Finger_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Finger_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 finger_identifier\n"
"float32 value\n"
;
  }

  static const char* value(const ::kortex_driver::Finger_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Finger_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finger_identifier);
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Finger_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Finger_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Finger_<ContainerAllocator>& v)
  {
    s << indent << "finger_identifier: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.finger_identifier);
    s << indent << "value: ";
    Printer<float>::stream(s, indent + "  ", v.value);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_FINGER_H
