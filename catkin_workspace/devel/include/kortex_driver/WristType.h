// Generated by gencpp from file kortex_driver/WristType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_WRISTTYPE_H
#define KORTEX_DRIVER_MESSAGE_WRISTTYPE_H


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
struct WristType_
{
  typedef WristType_<ContainerAllocator> Type;

  WristType_()
    {
    }
  WristType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(WRIST_TYPE_UNSPECIFIED)
  #undef WRIST_TYPE_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(WRIST_TYPE_NOT_APPLICABLE)
  #undef WRIST_TYPE_NOT_APPLICABLE
#endif
#if defined(_WIN32) && defined(WRIST_TYPE_SPHERICAL)
  #undef WRIST_TYPE_SPHERICAL
#endif
#if defined(_WIN32) && defined(WRIST_TYPE_CURVED)
  #undef WRIST_TYPE_CURVED
#endif

  enum {
    WRIST_TYPE_UNSPECIFIED = 0u,
    WRIST_TYPE_NOT_APPLICABLE = 1u,
    WRIST_TYPE_SPHERICAL = 2u,
    WRIST_TYPE_CURVED = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::WristType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::WristType_<ContainerAllocator> const> ConstPtr;

}; // struct WristType_

typedef ::kortex_driver::WristType_<std::allocator<void> > WristType;

typedef boost::shared_ptr< ::kortex_driver::WristType > WristTypePtr;
typedef boost::shared_ptr< ::kortex_driver::WristType const> WristTypeConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::WristType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::WristType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WristType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::WristType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WristType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::WristType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WristType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::WristType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::WristType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dce76d4e649d6e568f93c37bf10d6238";
  }

  static const char* value(const ::kortex_driver::WristType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdce76d4e649d6e56ULL;
  static const uint64_t static_value2 = 0x8f93c37bf10d6238ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::WristType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/WristType";
  }

  static const char* value(const ::kortex_driver::WristType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::WristType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 WRIST_TYPE_UNSPECIFIED = 0\n"
"\n"
"uint32 WRIST_TYPE_NOT_APPLICABLE = 1\n"
"\n"
"uint32 WRIST_TYPE_SPHERICAL = 2\n"
"\n"
"uint32 WRIST_TYPE_CURVED = 3\n"
;
  }

  static const char* value(const ::kortex_driver::WristType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::WristType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct WristType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::WristType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::WristType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_WRISTTYPE_H
