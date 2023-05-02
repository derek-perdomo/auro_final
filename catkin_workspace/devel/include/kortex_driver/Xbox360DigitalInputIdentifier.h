// Generated by gencpp from file kortex_driver/Xbox360DigitalInputIdentifier.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_XBOX360DIGITALINPUTIDENTIFIER_H
#define KORTEX_DRIVER_MESSAGE_XBOX360DIGITALINPUTIDENTIFIER_H


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
struct Xbox360DigitalInputIdentifier_
{
  typedef Xbox360DigitalInputIdentifier_<ContainerAllocator> Type;

  Xbox360DigitalInputIdentifier_()
    {
    }
  Xbox360DigitalInputIdentifier_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNSPECIFIED_XBOX360_DIGITAL)
  #undef UNSPECIFIED_XBOX360_DIGITAL
#endif
#if defined(_WIN32) && defined(XBOX360_PAD_UP)
  #undef XBOX360_PAD_UP
#endif
#if defined(_WIN32) && defined(XBOX360_PAD_DOWN)
  #undef XBOX360_PAD_DOWN
#endif
#if defined(_WIN32) && defined(XBOX360_PAD_LEFT)
  #undef XBOX360_PAD_LEFT
#endif
#if defined(_WIN32) && defined(XBOX360_PAD_RIGHT)
  #undef XBOX360_PAD_RIGHT
#endif
#if defined(_WIN32) && defined(XBOX360_FILE_BUTTON_START)
  #undef XBOX360_FILE_BUTTON_START
#endif
#if defined(_WIN32) && defined(XBOX360_DOCUMENT_BUTTON_BACK)
  #undef XBOX360_DOCUMENT_BUTTON_BACK
#endif
#if defined(_WIN32) && defined(XBOX360_LEFT_THUMB_BUTTON)
  #undef XBOX360_LEFT_THUMB_BUTTON
#endif
#if defined(_WIN32) && defined(XBOX360_RIGHT_THUMB_BUTTON)
  #undef XBOX360_RIGHT_THUMB_BUTTON
#endif
#if defined(_WIN32) && defined(XBOX360_LEFT_SHOULDER)
  #undef XBOX360_LEFT_SHOULDER
#endif
#if defined(_WIN32) && defined(XBOX360_RIGHT_SHOULDER)
  #undef XBOX360_RIGHT_SHOULDER
#endif
#if defined(_WIN32) && defined(XBOX360_BUTTON_A)
  #undef XBOX360_BUTTON_A
#endif
#if defined(_WIN32) && defined(XBOX360_BUTTON_B)
  #undef XBOX360_BUTTON_B
#endif
#if defined(_WIN32) && defined(XBOX360_BUTTON_X)
  #undef XBOX360_BUTTON_X
#endif
#if defined(_WIN32) && defined(XBOX360_BUTTON_Y)
  #undef XBOX360_BUTTON_Y
#endif

  enum {
    UNSPECIFIED_XBOX360_DIGITAL = 0u,
    XBOX360_PAD_UP = 1u,
    XBOX360_PAD_DOWN = 2u,
    XBOX360_PAD_LEFT = 3u,
    XBOX360_PAD_RIGHT = 4u,
    XBOX360_FILE_BUTTON_START = 5u,
    XBOX360_DOCUMENT_BUTTON_BACK = 6u,
    XBOX360_LEFT_THUMB_BUTTON = 7u,
    XBOX360_RIGHT_THUMB_BUTTON = 8u,
    XBOX360_LEFT_SHOULDER = 9u,
    XBOX360_RIGHT_SHOULDER = 10u,
    XBOX360_BUTTON_A = 13u,
    XBOX360_BUTTON_B = 14u,
    XBOX360_BUTTON_X = 15u,
    XBOX360_BUTTON_Y = 16u,
  };


  typedef boost::shared_ptr< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> const> ConstPtr;

}; // struct Xbox360DigitalInputIdentifier_

typedef ::kortex_driver::Xbox360DigitalInputIdentifier_<std::allocator<void> > Xbox360DigitalInputIdentifier;

typedef boost::shared_ptr< ::kortex_driver::Xbox360DigitalInputIdentifier > Xbox360DigitalInputIdentifierPtr;
typedef boost::shared_ptr< ::kortex_driver::Xbox360DigitalInputIdentifier const> Xbox360DigitalInputIdentifierConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b1197219b8c5e86e78fa24aefadcb86e";
  }

  static const char* value(const ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb1197219b8c5e86eULL;
  static const uint64_t static_value2 = 0x78fa24aefadcb86eULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/Xbox360DigitalInputIdentifier";
  }

  static const char* value(const ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 UNSPECIFIED_XBOX360_DIGITAL = 0\n"
"\n"
"uint32 XBOX360_PAD_UP = 1\n"
"\n"
"uint32 XBOX360_PAD_DOWN = 2\n"
"\n"
"uint32 XBOX360_PAD_LEFT = 3\n"
"\n"
"uint32 XBOX360_PAD_RIGHT = 4\n"
"\n"
"uint32 XBOX360_FILE_BUTTON_START = 5\n"
"\n"
"uint32 XBOX360_DOCUMENT_BUTTON_BACK = 6\n"
"\n"
"uint32 XBOX360_LEFT_THUMB_BUTTON = 7\n"
"\n"
"uint32 XBOX360_RIGHT_THUMB_BUTTON = 8\n"
"\n"
"uint32 XBOX360_LEFT_SHOULDER = 9\n"
"\n"
"uint32 XBOX360_RIGHT_SHOULDER = 10\n"
"\n"
"uint32 XBOX360_BUTTON_A = 13\n"
"\n"
"uint32 XBOX360_BUTTON_B = 14\n"
"\n"
"uint32 XBOX360_BUTTON_X = 15\n"
"\n"
"uint32 XBOX360_BUTTON_Y = 16\n"
;
  }

  static const char* value(const ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Xbox360DigitalInputIdentifier_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::Xbox360DigitalInputIdentifier_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_XBOX360DIGITALINPUTIDENTIFIER_H
