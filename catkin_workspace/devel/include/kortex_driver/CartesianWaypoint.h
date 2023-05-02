// Generated by gencpp from file kortex_driver/CartesianWaypoint.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CARTESIANWAYPOINT_H
#define KORTEX_DRIVER_MESSAGE_CARTESIANWAYPOINT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Pose.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct CartesianWaypoint_
{
  typedef CartesianWaypoint_<ContainerAllocator> Type;

  CartesianWaypoint_()
    : pose()
    , reference_frame(0)
    , maximum_linear_velocity(0.0)
    , maximum_angular_velocity(0.0)
    , blending_radius(0.0)  {
    }
  CartesianWaypoint_(const ContainerAllocator& _alloc)
    : pose(_alloc)
    , reference_frame(0)
    , maximum_linear_velocity(0.0)
    , maximum_angular_velocity(0.0)
    , blending_radius(0.0)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::Pose_<ContainerAllocator>  _pose_type;
  _pose_type pose;

   typedef uint32_t _reference_frame_type;
  _reference_frame_type reference_frame;

   typedef float _maximum_linear_velocity_type;
  _maximum_linear_velocity_type maximum_linear_velocity;

   typedef float _maximum_angular_velocity_type;
  _maximum_angular_velocity_type maximum_angular_velocity;

   typedef float _blending_radius_type;
  _blending_radius_type blending_radius;





  typedef boost::shared_ptr< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> const> ConstPtr;

}; // struct CartesianWaypoint_

typedef ::kortex_driver::CartesianWaypoint_<std::allocator<void> > CartesianWaypoint;

typedef boost::shared_ptr< ::kortex_driver::CartesianWaypoint > CartesianWaypointPtr;
typedef boost::shared_ptr< ::kortex_driver::CartesianWaypoint const> CartesianWaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CartesianWaypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::CartesianWaypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::CartesianWaypoint_<ContainerAllocator2> & rhs)
{
  return lhs.pose == rhs.pose &&
    lhs.reference_frame == rhs.reference_frame &&
    lhs.maximum_linear_velocity == rhs.maximum_linear_velocity &&
    lhs.maximum_angular_velocity == rhs.maximum_angular_velocity &&
    lhs.blending_radius == rhs.blending_radius;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::CartesianWaypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::CartesianWaypoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "057d3bd32497f1e96612efc0fb6ef690";
  }

  static const char* value(const ::kortex_driver::CartesianWaypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x057d3bd32497f1e9ULL;
  static const uint64_t static_value2 = 0x6612efc0fb6ef690ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CartesianWaypoint";
  }

  static const char* value(const ::kortex_driver::CartesianWaypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
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

  static const char* value(const ::kortex_driver::CartesianWaypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.reference_frame);
      stream.next(m.maximum_linear_velocity);
      stream.next(m.maximum_angular_velocity);
      stream.next(m.blending_radius);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CartesianWaypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CartesianWaypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::CartesianWaypoint_<ContainerAllocator>& v)
  {
    s << indent << "pose: ";
    s << std::endl;
    Printer< ::kortex_driver::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose);
    s << indent << "reference_frame: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.reference_frame);
    s << indent << "maximum_linear_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.maximum_linear_velocity);
    s << indent << "maximum_angular_velocity: ";
    Printer<float>::stream(s, indent + "  ", v.maximum_angular_velocity);
    s << indent << "blending_radius: ";
    Printer<float>::stream(s, indent + "  ", v.blending_radius);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CARTESIANWAYPOINT_H
