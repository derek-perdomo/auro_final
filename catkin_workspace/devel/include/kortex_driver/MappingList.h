// Generated by gencpp from file kortex_driver/MappingList.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_MAPPINGLIST_H
#define KORTEX_DRIVER_MESSAGE_MAPPINGLIST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Mapping.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct MappingList_
{
  typedef MappingList_<ContainerAllocator> Type;

  MappingList_()
    : mappings()  {
    }
  MappingList_(const ContainerAllocator& _alloc)
    : mappings(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::kortex_driver::Mapping_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::Mapping_<ContainerAllocator> >> _mappings_type;
  _mappings_type mappings;





  typedef boost::shared_ptr< ::kortex_driver::MappingList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::MappingList_<ContainerAllocator> const> ConstPtr;

}; // struct MappingList_

typedef ::kortex_driver::MappingList_<std::allocator<void> > MappingList;

typedef boost::shared_ptr< ::kortex_driver::MappingList > MappingListPtr;
typedef boost::shared_ptr< ::kortex_driver::MappingList const> MappingListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::MappingList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::MappingList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::MappingList_<ContainerAllocator1> & lhs, const ::kortex_driver::MappingList_<ContainerAllocator2> & rhs)
{
  return lhs.mappings == rhs.mappings;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::MappingList_<ContainerAllocator1> & lhs, const ::kortex_driver::MappingList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MappingList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::MappingList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MappingList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::MappingList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MappingList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::MappingList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::MappingList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb960bc69e45bc26dd9e7ed2dbaeeaaf";
  }

  static const char* value(const ::kortex_driver::MappingList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb960bc69e45bc26ULL;
  static const uint64_t static_value2 = 0xdd9e7ed2dbaeeaafULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::MappingList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/MappingList";
  }

  static const char* value(const ::kortex_driver::MappingList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::MappingList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"Mapping[] mappings\n"
"================================================================================\n"
"MSG: kortex_driver/Mapping\n"
"\n"
"MappingHandle handle\n"
"string name\n"
"uint32 controller_identifier\n"
"MapGroupHandle active_map_group_handle\n"
"MapGroupHandle[] map_group_handles\n"
"MapHandle active_map_handle\n"
"MapHandle[] map_handles\n"
"string application_data\n"
"================================================================================\n"
"MSG: kortex_driver/MappingHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapGroupHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
"================================================================================\n"
"MSG: kortex_driver/MapHandle\n"
"\n"
"uint32 identifier\n"
"uint32 permission\n"
;
  }

  static const char* value(const ::kortex_driver::MappingList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::MappingList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mappings);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MappingList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::MappingList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::MappingList_<ContainerAllocator>& v)
  {
    s << indent << "mappings[]" << std::endl;
    for (size_t i = 0; i < v.mappings.size(); ++i)
    {
      s << indent << "  mappings[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::Mapping_<ContainerAllocator> >::stream(s, indent + "    ", v.mappings[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_MAPPINGLIST_H
