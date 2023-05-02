// Generated by gencpp from file kortex_driver/InterconnectCyclic_ServiceVersion.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_SERVICEVERSION_H
#define KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_SERVICEVERSION_H


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
struct InterconnectCyclic_ServiceVersion_
{
  typedef InterconnectCyclic_ServiceVersion_<ContainerAllocator> Type;

  InterconnectCyclic_ServiceVersion_()
    {
    }
  InterconnectCyclic_ServiceVersion_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(RESERVED_0)
  #undef RESERVED_0
#endif
#if defined(_WIN32) && defined(CURRENT_VERSION)
  #undef CURRENT_VERSION
#endif

  enum {
    RESERVED_0 = 0u,
    CURRENT_VERSION = 1u,
  };


  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> const> ConstPtr;

}; // struct InterconnectCyclic_ServiceVersion_

typedef ::kortex_driver::InterconnectCyclic_ServiceVersion_<std::allocator<void> > InterconnectCyclic_ServiceVersion;

typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_ServiceVersion > InterconnectCyclic_ServiceVersionPtr;
typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_ServiceVersion const> InterconnectCyclic_ServiceVersionConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8624be8e7830df48d9964b7612fa5b3";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8624be8e7830df4ULL;
  static const uint64_t static_value2 = 0x8d9964b7612fa5b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/InterconnectCyclic_ServiceVersion";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 RESERVED_0 = 0\n"
"\n"
"uint32 CURRENT_VERSION = 1\n"
;
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterconnectCyclic_ServiceVersion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::InterconnectCyclic_ServiceVersion_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_SERVICEVERSION_H
