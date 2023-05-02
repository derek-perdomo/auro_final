// Generated by gencpp from file kortex_driver/Gripper.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GRIPPER_H
#define KORTEX_DRIVER_MESSAGE_GRIPPER_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Finger.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Gripper_
{
  typedef Gripper_<ContainerAllocator> Type;

  Gripper_()
    : finger()  {
    }
  Gripper_(const ContainerAllocator& _alloc)
    : finger(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::Finger_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::Finger_<ContainerAllocator> >> _finger_type;
  _finger_type finger;





  typedef boost::shared_ptr< ::kortex_driver::Gripper_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Gripper_<ContainerAllocator> const> ConstPtr;

}; // struct Gripper_

typedef ::kortex_driver::Gripper_<std::allocator<void> > Gripper;

typedef boost::shared_ptr< ::kortex_driver::Gripper > GripperPtr;
typedef boost::shared_ptr< ::kortex_driver::Gripper const> GripperConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Gripper_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Gripper_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Gripper_<ContainerAllocator1> & lhs, const ::kortex_driver::Gripper_<ContainerAllocator2> & rhs)
{
  return lhs.finger == rhs.finger;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Gripper_<ContainerAllocator1> & lhs, const ::kortex_driver::Gripper_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Gripper_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Gripper_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Gripper_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Gripper_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Gripper_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Gripper_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Gripper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d6de7f2f0e25d1f1553a193c7d388b15";
  }

  static const char* value(const ::kortex_driver::Gripper_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd6de7f2f0e25d1f1ULL;
  static const uint64_t static_value2 = 0x553a193c7d388b15ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Gripper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Gripper";
  }

  static const char* value(const ::kortex_driver::Gripper_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Gripper_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Finger[] finger\n"
"================================================================================\n"
"MSG: kortex_driver/Finger\n"
"\n"
"uint32 finger_identifier\n"
"float32 value\n"
;
  }

  static const char* value(const ::kortex_driver::Gripper_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Gripper_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.finger);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Gripper_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Gripper_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Gripper_<ContainerAllocator>& v)
  {
    s << indent << "finger[]" << std::endl;
    for (size_t i = 0; i < v.finger.size(); ++i)
    {
      s << indent << "  finger[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Finger_<ContainerAllocator> >::stream(s, indent + "    ", v.finger[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GRIPPER_H
