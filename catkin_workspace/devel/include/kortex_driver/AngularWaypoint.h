// Generated by gencpp from file kortex_driver/AngularWaypoint.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ANGULARWAYPOINT_H
#define KORTEX_DRIVER_MESSAGE_ANGULARWAYPOINT_H


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
struct AngularWaypoint_
{
  typedef AngularWaypoint_<ContainerAllocator> Type;

  AngularWaypoint_()
    : angles()
    , maximum_velocities()
    , duration(0.0)  {
    }
  AngularWaypoint_(const ContainerAllocator& _alloc)
    : angles(_alloc)
    , maximum_velocities(_alloc)
    , duration(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _angles_type;
  _angles_type angles;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _maximum_velocities_type;
  _maximum_velocities_type maximum_velocities;

   typedef float _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::kortex_driver::AngularWaypoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::AngularWaypoint_<ContainerAllocator> const> ConstPtr;

}; // struct AngularWaypoint_

typedef ::kortex_driver::AngularWaypoint_<std::allocator<void> > AngularWaypoint;

typedef boost::shared_ptr< ::kortex_driver::AngularWaypoint > AngularWaypointPtr;
typedef boost::shared_ptr< ::kortex_driver::AngularWaypoint const> AngularWaypointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::AngularWaypoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::AngularWaypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::AngularWaypoint_<ContainerAllocator2> & rhs)
{
  return lhs.angles == rhs.angles &&
    lhs.maximum_velocities == rhs.maximum_velocities &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::AngularWaypoint_<ContainerAllocator1> & lhs, const ::kortex_driver::AngularWaypoint_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::AngularWaypoint_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::AngularWaypoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::AngularWaypoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c2389f0b849f9b353e58e97764b9bfc7";
  }

  static const char* value(const ::kortex_driver::AngularWaypoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc2389f0b849f9b35ULL;
  static const uint64_t static_value2 = 0x3e58e97764b9bfc7ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/AngularWaypoint";
  }

  static const char* value(const ::kortex_driver::AngularWaypoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32[] angles\n"
"float32[] maximum_velocities\n"
"float32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::AngularWaypoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.angles);
      stream.next(m.maximum_velocities);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AngularWaypoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::AngularWaypoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::AngularWaypoint_<ContainerAllocator>& v)
  {
    s << indent << "angles[]" << std::endl;
    for (size_t i = 0; i < v.angles.size(); ++i)
    {
      s << indent << "  angles[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.angles[i]);
    }
    s << indent << "maximum_velocities[]" << std::endl;
    for (size_t i = 0; i < v.maximum_velocities.size(); ++i)
    {
      s << indent << "  maximum_velocities[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.maximum_velocities[i]);
    }
    s << indent << "duration: ";
    Printer<float>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ANGULARWAYPOINT_H
