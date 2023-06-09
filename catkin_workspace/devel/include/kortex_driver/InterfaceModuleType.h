// Generated by gencpp from file kortex_driver/InterfaceModuleType.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTERFACEMODULETYPE_H
#define KORTEX_DRIVER_MESSAGE_INTERFACEMODULETYPE_H


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
struct InterfaceModuleType_
{
  typedef InterfaceModuleType_<ContainerAllocator> Type;

  InterfaceModuleType_()
    {
    }
  InterfaceModuleType_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(INTERFACE_MODULE_TYPE_UNSPECIFIED)
  #undef INTERFACE_MODULE_TYPE_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(INTERFACE_MODULE_TYPE_NOT_INSTALLED)
  #undef INTERFACE_MODULE_TYPE_NOT_INSTALLED
#endif
#if defined(_WIN32) && defined(INTERFACE_MODULE_TYPE_L53)
  #undef INTERFACE_MODULE_TYPE_L53
#endif
#if defined(_WIN32) && defined(INTERFACE_MODULE_TYPE_L31)
  #undef INTERFACE_MODULE_TYPE_L31
#endif

  enum {
    INTERFACE_MODULE_TYPE_UNSPECIFIED = 0u,
    INTERFACE_MODULE_TYPE_NOT_INSTALLED = 1u,
    INTERFACE_MODULE_TYPE_L53 = 2u,
    INTERFACE_MODULE_TYPE_L31 = 3u,
  };


  typedef boost::shared_ptr< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> const> ConstPtr;

}; // struct InterfaceModuleType_

typedef ::kortex_driver::InterfaceModuleType_<std::allocator<void> > InterfaceModuleType;

typedef boost::shared_ptr< ::kortex_driver::InterfaceModuleType > InterfaceModuleTypePtr;
typedef boost::shared_ptr< ::kortex_driver::InterfaceModuleType const> InterfaceModuleTypeConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::InterfaceModuleType_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f61dc75115f701d8cd0d9b3951030045";
  }

  static const char* value(const ::kortex_driver::InterfaceModuleType_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf61dc75115f701d8ULL;
  static const uint64_t static_value2 = 0xcd0d9b3951030045ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/InterfaceModuleType";
  }

  static const char* value(const ::kortex_driver::InterfaceModuleType_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 INTERFACE_MODULE_TYPE_UNSPECIFIED = 0\n"
"\n"
"uint32 INTERFACE_MODULE_TYPE_NOT_INSTALLED = 1\n"
"\n"
"uint32 INTERFACE_MODULE_TYPE_L53 = 2\n"
"\n"
"uint32 INTERFACE_MODULE_TYPE_L31 = 3\n"
;
  }

  static const char* value(const ::kortex_driver::InterfaceModuleType_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterfaceModuleType_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::InterfaceModuleType_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::InterfaceModuleType_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTERFACEMODULETYPE_H
