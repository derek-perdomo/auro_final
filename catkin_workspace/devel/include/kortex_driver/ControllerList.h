// Generated by gencpp from file kortex_driver/ControllerList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CONTROLLERLIST_H
#define KORTEX_DRIVER_MESSAGE_CONTROLLERLIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/ControllerHandle.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ControllerList_
{
  typedef ControllerList_<ContainerAllocator> Type;

  ControllerList_()
    : handles()  {
    }
  ControllerList_(const ContainerAllocator& _alloc)
    : handles(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::ControllerHandle_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::ControllerHandle_<ContainerAllocator> >> _handles_type;
  _handles_type handles;





  typedef boost::shared_ptr< ::kortex_driver::ControllerList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ControllerList_<ContainerAllocator> const> ConstPtr;

}; // struct ControllerList_

typedef ::kortex_driver::ControllerList_<std::allocator<void> > ControllerList;

typedef boost::shared_ptr< ::kortex_driver::ControllerList > ControllerListPtr;
typedef boost::shared_ptr< ::kortex_driver::ControllerList const> ControllerListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ControllerList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ControllerList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ControllerList_<ContainerAllocator1> & lhs, const ::kortex_driver::ControllerList_<ContainerAllocator2> & rhs)
{
  return lhs.handles == rhs.handles;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ControllerList_<ContainerAllocator1> & lhs, const ::kortex_driver::ControllerList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ControllerList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ControllerList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ControllerList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ControllerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "952a49d983a336790fc984bb01df940e";
  }

  static const char* value(const ::kortex_driver::ControllerList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x952a49d983a33679ULL;
  static const uint64_t static_value2 = 0x0fc984bb01df940eULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ControllerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ControllerList";
  }

  static const char* value(const ::kortex_driver::ControllerList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ControllerList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"ControllerHandle[] handles\n"
"================================================================================\n"
"MSG: kortex_driver/ControllerHandle\n"
"\n"
"uint32 type\n"
"uint32 controller_identifier\n"
;
  }

  static const char* value(const ::kortex_driver::ControllerList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ControllerList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.handles);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControllerList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ControllerList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ControllerList_<ContainerAllocator>& v)
  {
    s << indent << "handles[]" << std::endl;
    for (size_t i = 0; i < v.handles.size(); ++i)
    {
      s << indent << "  handles[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ControllerHandle_<ContainerAllocator> >::stream(s, indent + "    ", v.handles[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CONTROLLERLIST_H