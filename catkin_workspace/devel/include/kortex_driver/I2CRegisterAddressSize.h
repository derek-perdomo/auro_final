// Generated by gencpp from file kortex_driver/I2CRegisterAddressSize.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_I2CREGISTERADDRESSSIZE_H
#define KORTEX_DRIVER_MESSAGE_I2CREGISTERADDRESSSIZE_H


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
struct I2CRegisterAddressSize_
{
  typedef I2CRegisterAddressSize_<ContainerAllocator> Type;

  I2CRegisterAddressSize_()
    {
    }
  I2CRegisterAddressSize_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }





// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(I2C_REGISTER_ADDRESS_SIZE_UNSPECIFIED)
  #undef I2C_REGISTER_ADDRESS_SIZE_UNSPECIFIED
#endif
#if defined(_WIN32) && defined(I2C_REGISTER_ADDRESS_SIZE_8_BITS)
  #undef I2C_REGISTER_ADDRESS_SIZE_8_BITS
#endif
#if defined(_WIN32) && defined(I2C_REGISTER_ADDRESS_SIZE_16_BITS)
  #undef I2C_REGISTER_ADDRESS_SIZE_16_BITS
#endif

  enum {
    I2C_REGISTER_ADDRESS_SIZE_UNSPECIFIED = 0u,
    I2C_REGISTER_ADDRESS_SIZE_8_BITS = 1u,
    I2C_REGISTER_ADDRESS_SIZE_16_BITS = 2u,
  };


  typedef boost::shared_ptr< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> const> ConstPtr;

}; // struct I2CRegisterAddressSize_

typedef ::kortex_driver::I2CRegisterAddressSize_<std::allocator<void> > I2CRegisterAddressSize;

typedef boost::shared_ptr< ::kortex_driver::I2CRegisterAddressSize > I2CRegisterAddressSizePtr;
typedef boost::shared_ptr< ::kortex_driver::I2CRegisterAddressSize const> I2CRegisterAddressSizeConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
{
  static const char* value()
  {
    return "517dd96a7b250066663891b1fad6bd8a";
  }

  static const char* value(const ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x517dd96a7b250066ULL;
  static const uint64_t static_value2 = 0x663891b1fad6bd8aULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/I2CRegisterAddressSize";
  }

  static const char* value(const ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 I2C_REGISTER_ADDRESS_SIZE_UNSPECIFIED = 0\n"
"\n"
"uint32 I2C_REGISTER_ADDRESS_SIZE_8_BITS = 1\n"
"\n"
"uint32 I2C_REGISTER_ADDRESS_SIZE_16_BITS = 2\n"
;
  }

  static const char* value(const ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct I2CRegisterAddressSize_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::kortex_driver::I2CRegisterAddressSize_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_I2CREGISTERADDRESSSIZE_H
