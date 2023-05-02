// Generated by gencpp from file kortex_driver/CalibrationItem.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_CALIBRATIONITEM_H
#define KORTEX_DRIVER_MESSAGE_CALIBRATIONITEM_H


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
struct CalibrationItem_
{
  typedef CalibrationItem_<ContainerAllocator> Type;

  CalibrationItem_()
    {
    }
  CalibrationItem_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_CALIBRATION_ITEM)
  #undef UNSPECIFIED_CALIBRATION_ITEM
#endif
#if defined(_WIN32) && defined(COGGING)
  #undef COGGING
#endif
#if defined(_WIN32) && defined(MAGNETIC)
  #undef MAGNETIC
#endif
#if defined(_WIN32) && defined(MOTOR)
  #undef MOTOR
#endif
#if defined(_WIN32) && defined(POSITION_RANGE)
  #undef POSITION_RANGE
#endif

  enum {
    UNSPECIFIED_CALIBRATION_ITEM = 0u,
    COGGING = 1u,
    MAGNETIC = 2u,
    MOTOR = 3u,
    POSITION_RANGE = 4u,
  };


  typedef boost::shared_ptr< ::kortex_driver::CalibrationItem_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::CalibrationItem_<ContainerAllocator> const> ConstPtr;

}; // struct CalibrationItem_

typedef ::kortex_driver::CalibrationItem_<std::allocator<void> > CalibrationItem;

typedef boost::shared_ptr< ::kortex_driver::CalibrationItem > CalibrationItemPtr;
typedef boost::shared_ptr< ::kortex_driver::CalibrationItem const> CalibrationItemConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::CalibrationItem_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::CalibrationItem_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::CalibrationItem_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::CalibrationItem_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::CalibrationItem_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "004ebe034d74d471c7b919bf63c0f51a";
  }

  static const char* value(const ::kortex_driver::CalibrationItem_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x004ebe034d74d471ULL;
  static const uint64_t static_value2 = 0xc7b919bf63c0f51aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/CalibrationItem";
  }

  static const char* value(const ::kortex_driver::CalibrationItem_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_CALIBRATION_ITEM = 0\n"
"\n"
"uint32 COGGING = 1\n"
"\n"
"uint32 MAGNETIC = 2\n"
"\n"
"uint32 MOTOR = 3\n"
"\n"
"uint32 POSITION_RANGE = 4\n"
;
  }

  static const char* value(const ::kortex_driver::CalibrationItem_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalibrationItem_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::CalibrationItem_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::CalibrationItem_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_CALIBRATIONITEM_H
