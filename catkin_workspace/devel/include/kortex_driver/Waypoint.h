// Generated by gencpp from file kortex_driver/Waypoint.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WAYPOINT_H
#define KORTEX_DRIVER_MESSAGE_WAYPOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Waypoint_type_of_waypoint.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct Waypoint_
{
  typedef Waypoint_<ContainerAllocator> Type;

  Waypoint_()
    : name()
    , oneof_type_of_waypoint()  {
    }
  Waypoint_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , oneof_type_of_waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _name_type;
  _name_type name;

   typedef  ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator>  _oneof_type_of_waypoint_type;
  _oneof_type_of_waypoint_type oneof_type_of_waypoint;





  typedef boost::shared_ptr< ::kortex_driver::Waypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Waypoint_<ContainerAllocator> const> ConstPtr;

}; // struct Waypoint_

typedef ::kortex_driver::Waypoint_<std::allocator<void> > Waypoint;

typedef boost::shared_ptr< ::kortex_driver::Waypoint > WaypointPtr;
typedef boost::shared_ptr< ::kortex_driver::Waypoint const> WaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Waypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Waypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::Waypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::Waypoint_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.oneof_type_of_waypoint == rhs.oneof_type_of_waypoint;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::Waypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::Waypoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Waypoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Waypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Waypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Waypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Waypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "936edf0520133d6221befe691467b5ce";
  }

  static const char* value(const ::kortex_driver::Waypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x936edf0520133d62ULL;
  static const uint64_t static_value2 = 0x21befe691467b5ceULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Waypoint";
  }

  static const char* value(const ::kortex_driver::Waypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Waypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string name\n"
"Waypoint_type_of_waypoint oneof_type_of_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/Waypoint_type_of_waypoint\n"
"\n"
"AngularWaypoint[] angular_waypoint\n"
"CartesianWaypoint[] cartesian_waypoint\n"
"================================================================================\n"
"MSG: kortex_driver/AngularWaypoint\n"
"\n"
"float32[] angles\n"
"float32[] maximum_velocities\n"
"float32 duration\n"
"================================================================================\n"
"MSG: kortex_driver/CartesianWaypoint\n"
"\n"
"Pose pose\n"
"uint32 reference_frame\n"
"float32 maximum_linear_velocity\n"
"float32 maximum_angular_velocity\n"
"float32 blending_radius\n"
"================================================================================\n"
"MSG: kortex_driver/Pose\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"float32 theta_x\n"
"float32 theta_y\n"
"float32 theta_z\n"
;
  }

  static const char* value(const ::kortex_driver::Waypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Waypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.oneof_type_of_waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Waypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Waypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::Waypoint_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.name);
    s << indent << "oneof_type_of_waypoint: ";
    s << std::endl;
    Printer< ::kortex_driver::Waypoint_type_of_waypoint_<ContainerAllocator> >::stream(s, indent + "  ", v.oneof_type_of_waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WAYPOINT_H
