// Generated by gencpp from file kortex_driver/PartNumberRevision.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_PARTNUMBERREVISION_H
#define KORTEX_DRIVER_MESSAGE_PARTNUMBERREVISION_H


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
struct PartNumberRevision_
{
  typedef PartNumberRevision_<ContainerAllocator> Type;

  PartNumberRevision_()
    : part_number_revision()  {
    }
  PartNumberRevision_(const ContainerAllocator& _alloc)
    : part_number_revision(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _part_number_revision_type;
  _part_number_revision_type part_number_revision;





  typedef boost::shared_ptr< ::kortex_driver::PartNumberRevision_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::PartNumberRevision_<ContainerAllocator> const> ConstPtr;

}; // struct PartNumberRevision_

typedef ::kortex_driver::PartNumberRevision_<std::allocator<void> > PartNumberRevision;

typedef boost::shared_ptr< ::kortex_driver::PartNumberRevision > PartNumberRevisionPtr;
typedef boost::shared_ptr< ::kortex_driver::PartNumberRevision const> PartNumberRevisionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::PartNumberRevision_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::PartNumberRevision_<ContainerAllocator1> & lhs, const ::kortex_driver::PartNumberRevision_<ContainerAllocator2> & rhs)
{
  return lhs.part_number_revision == rhs.part_number_revision;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::PartNumberRevision_<ContainerAllocator1> & lhs, const ::kortex_driver::PartNumberRevision_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::PartNumberRevision_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::PartNumberRevision_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::PartNumberRevision_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4621433c3d6219edd88cd50a0ae9aa72";
  }

  static const char* value(const ::kortex_driver::PartNumberRevision_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4621433c3d6219edULL;
  static const uint64_t static_value2 = 0xd88cd50a0ae9aa72ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/PartNumberRevision";
  }

  static const char* value(const ::kortex_driver::PartNumberRevision_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string part_number_revision\n"
;
  }

  static const char* value(const ::kortex_driver::PartNumberRevision_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.part_number_revision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PartNumberRevision_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::PartNumberRevision_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::PartNumberRevision_<ContainerAllocator>& v)
  {
    s << indent << "part_number_revision: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.part_number_revision);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_PARTNUMBERREVISION_H
