// Generated by gencpp from file kortex_driver/StepResponse.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_STEPRESPONSE_H
#define KORTEX_DRIVER_MESSAGE_STEPRESPONSE_H


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
struct StepResponse_
{
  typedef StepResponse_<ContainerAllocator> Type;

  StepResponse_()
    : loop_selection(0)
    , amplitude(0.0)
    , step_delay(0.0)
    , duration(0.0)  {
    }
  StepResponse_(const ContainerAllocator& _alloc)
    : loop_selection(0)
    , amplitude(0.0)
    , step_delay(0.0)
    , duration(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _loop_selection_type;
  _loop_selection_type loop_selection;

   typedef float _amplitude_type;
  _amplitude_type amplitude;

   typedef float _step_delay_type;
  _step_delay_type step_delay;

   typedef float _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::kortex_driver::StepResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::StepResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StepResponse_

typedef ::kortex_driver::StepResponse_<std::allocator<void> > StepResponse;

typedef boost::shared_ptr< ::kortex_driver::StepResponse > StepResponsePtr;
typedef boost::shared_ptr< ::kortex_driver::StepResponse const> StepResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::StepResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::StepResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::StepResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::StepResponse_<ContainerAllocator2> & rhs)
{
  return lhs.loop_selection == rhs.loop_selection &&
    lhs.amplitude == rhs.amplitude &&
    lhs.step_delay == rhs.step_delay &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::StepResponse_<ContainerAllocator1> & lhs, const ::kortex_driver::StepResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::StepResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::StepResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::StepResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::StepResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::StepResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::StepResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::StepResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e9ae6749b10a5d88fae7f1a1e8639d93";
  }

  static const char* value(const ::kortex_driver::StepResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe9ae6749b10a5d88ULL;
  static const uint64_t static_value2 = 0xfae7f1a1e8639d93ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::StepResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/StepResponse";
  }

  static const char* value(const ::kortex_driver::StepResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::StepResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 loop_selection\n"
"float32 amplitude\n"
"float32 step_delay\n"
"float32 duration\n"
;
  }

  static const char* value(const ::kortex_driver::StepResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::StepResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loop_selection);
      stream.next(m.amplitude);
      stream.next(m.step_delay);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StepResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::StepResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::StepResponse_<ContainerAllocator>& v)
  {
    s << indent << "loop_selection: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.loop_selection);
    s << indent << "amplitude: ";
    Printer<float>::stream(s, indent + "  ", v.amplitude);
    s << indent << "step_delay: ";
    Printer<float>::stream(s, indent + "  ", v.step_delay);
    s << indent << "duration: ";
    Printer<float>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_STEPRESPONSE_H
