// Generated by gencpp from file kortex_driver/KinematicLimitsList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_KINEMATICLIMITSLIST_H
#define KORTEX_DRIVER_MESSAGE_KINEMATICLIMITSLIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/KinematicLimits.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct KinematicLimitsList_
{
  typedef KinematicLimitsList_<ContainerAllocator> Type;

  KinematicLimitsList_()
    : kinematic_limits_list()  {
    }
  KinematicLimitsList_(const ContainerAllocator& _alloc)
    : kinematic_limits_list(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::KinematicLimits_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::KinematicLimits_<ContainerAllocator> >> _kinematic_limits_list_type;
  _kinematic_limits_list_type kinematic_limits_list;





  typedef boost::shared_ptr< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> const> ConstPtr;

}; // struct KinematicLimitsList_

typedef ::kortex_driver::KinematicLimitsList_<std::allocator<void> > KinematicLimitsList;

typedef boost::shared_ptr< ::kortex_driver::KinematicLimitsList > KinematicLimitsListPtr;
typedef boost::shared_ptr< ::kortex_driver::KinematicLimitsList const> KinematicLimitsListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::KinematicLimitsList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::KinematicLimitsList_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicLimitsList_<ContainerAllocator2> & rhs)
{
  return lhs.kinematic_limits_list == rhs.kinematic_limits_list;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::KinematicLimitsList_<ContainerAllocator1> & lhs, const ::kortex_driver::KinematicLimitsList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85620e63d1ea4e2fbf21a5cb16cb2964";
  }

  static const char* value(const ::kortex_driver::KinematicLimitsList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85620e63d1ea4e2fULL;
  static const uint64_t static_value2 = 0xbf21a5cb16cb2964ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/KinematicLimitsList";
  }

  static const char* value(const ::kortex_driver::KinematicLimitsList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"KinematicLimits[] kinematic_limits_list\n"
"================================================================================\n"
"MSG: kortex_driver/KinematicLimits\n"
"\n"
"uint32 control_mode\n"
"float32 twist_linear\n"
"float32 twist_angular\n"
"float32[] joint_speed_limits\n"
"float32[] joint_acceleration_limits\n"
;
  }

  static const char* value(const ::kortex_driver::KinematicLimitsList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kinematic_limits_list);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KinematicLimitsList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::KinematicLimitsList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::KinematicLimitsList_<ContainerAllocator>& v)
  {
    s << indent << "kinematic_limits_list[]" << std::endl;
    for (size_t i = 0; i < v.kinematic_limits_list.size(); ++i)
    {
      s << indent << "  kinematic_limits_list[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::KinematicLimits_<ContainerAllocator> >::stream(s, indent + "    ", v.kinematic_limits_list[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_KINEMATICLIMITSLIST_H
