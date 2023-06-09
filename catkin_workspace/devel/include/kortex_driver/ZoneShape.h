// Generated by gencpp from file kortex_driver/ZoneShape.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_ZONESHAPE_H
#define KORTEX_DRIVER_MESSAGE_ZONESHAPE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/Point.h>
#include <kortex_driver/Base_RotationMatrix.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct ZoneShape_
{
  typedef ZoneShape_<ContainerAllocator> Type;

  ZoneShape_()
    : shape_type(0)
    , origin()
    , orientation()
    , dimensions()
    , envelope_thickness(0.0)  {
    }
  ZoneShape_(const ContainerAllocator& _alloc)
    : shape_type(0)
    , origin(_alloc)
    , orientation(_alloc)
    , dimensions(_alloc)
    , envelope_thickness(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _shape_type_type;
  _shape_type_type shape_type;

   typedef  ::kortex_driver::Point_<ContainerAllocator>  _origin_type;
  _origin_type origin;

   typedef  ::kortex_driver::Base_RotationMatrix_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _dimensions_type;
  _dimensions_type dimensions;

   typedef float _envelope_thickness_type;
  _envelope_thickness_type envelope_thickness;





  typedef boost::shared_ptr< ::kortex_driver::ZoneShape_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::ZoneShape_<ContainerAllocator> const> ConstPtr;

}; // struct ZoneShape_

typedef ::kortex_driver::ZoneShape_<std::allocator<void> > ZoneShape;

typedef boost::shared_ptr< ::kortex_driver::ZoneShape > ZoneShapePtr;
typedef boost::shared_ptr< ::kortex_driver::ZoneShape const> ZoneShapeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::ZoneShape_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::ZoneShape_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::ZoneShape_<ContainerAllocator1> & lhs, const ::kortex_driver::ZoneShape_<ContainerAllocator2> & rhs)
{
  return lhs.shape_type == rhs.shape_type &&
    lhs.origin == rhs.origin &&
    lhs.orientation == rhs.orientation &&
    lhs.dimensions == rhs.dimensions &&
    lhs.envelope_thickness == rhs.envelope_thickness;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::ZoneShape_<ContainerAllocator1> & lhs, const ::kortex_driver::ZoneShape_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ZoneShape_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::ZoneShape_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ZoneShape_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::ZoneShape_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ZoneShape_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::ZoneShape_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::ZoneShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8de31189535cb06cb8caf5fc49d6c1b4";
  }

  static const char* value(const ::kortex_driver::ZoneShape_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8de31189535cb06cULL;
  static const uint64_t static_value2 = 0xb8caf5fc49d6c1b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::ZoneShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/ZoneShape";
  }

  static const char* value(const ::kortex_driver::ZoneShape_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::ZoneShape_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 shape_type\n"
"Point origin\n"
"Base_RotationMatrix orientation\n"
"float32[] dimensions\n"
"float32 envelope_thickness\n"
"================================================================================\n"
"MSG: kortex_driver/Point\n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrix\n"
"\n"
"Base_RotationMatrixRow row1\n"
"Base_RotationMatrixRow row2\n"
"Base_RotationMatrixRow row3\n"
"================================================================================\n"
"MSG: kortex_driver/Base_RotationMatrixRow\n"
"\n"
"float32 column1\n"
"float32 column2\n"
"float32 column3\n"
;
  }

  static const char* value(const ::kortex_driver::ZoneShape_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::ZoneShape_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.shape_type);
      stream.next(m.origin);
      stream.next(m.orientation);
      stream.next(m.dimensions);
      stream.next(m.envelope_thickness);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ZoneShape_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::ZoneShape_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::ZoneShape_<ContainerAllocator>& v)
  {
    s << indent << "shape_type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.shape_type);
    s << indent << "origin: ";
    s << std::endl;
    Printer< ::kortex_driver::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.origin);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::kortex_driver::Base_RotationMatrix_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "dimensions[]" << std::endl;
    for (size_t i = 0; i < v.dimensions.size(); ++i)
    {
      s << indent << "  dimensions[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.dimensions[i]);
    }
    s << indent << "envelope_thickness: ";
    Printer<float>::stream(s, indent + "  ", v.envelope_thickness);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_ZONESHAPE_H
