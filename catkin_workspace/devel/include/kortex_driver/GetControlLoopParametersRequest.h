// Generated by gencpp from file kortex_driver/GetControlLoopParametersRequest.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_GETCONTROLLOOPPARAMETERSREQUEST_H
#define KORTEX_DRIVER_MESSAGE_GETCONTROLLOOPPARAMETERSREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/LoopSelection.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct GetControlLoopParametersRequest_
{
  typedef GetControlLoopParametersRequest_<ContainerAllocator> Type;

  GetControlLoopParametersRequest_()
    : input()  {
    }
  GetControlLoopParametersRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::LoopSelection_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetControlLoopParametersRequest_

typedef ::kortex_driver::GetControlLoopParametersRequest_<std::allocator<void> > GetControlLoopParametersRequest;

typedef boost::shared_ptr< ::kortex_driver::GetControlLoopParametersRequest > GetControlLoopParametersRequestPtr;
typedef boost::shared_ptr< ::kortex_driver::GetControlLoopParametersRequest const> GetControlLoopParametersRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator1> & lhs, const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e225a54eed96dc619f1c0c6f3145d845";
  }

  static const char* value(const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe225a54eed96dc61ULL;
  static const uint64_t static_value2 = 0x9f1c0c6f3145d845ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/GetControlLoopParametersRequest";
  }

  static const char* value(const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "LoopSelection input\n"
"\n"
"================================================================================\n"
"MSG: kortex_driver/LoopSelection\n"
"\n"
"uint32 loop_selection\n"
;
  }

  static const char* value(const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetControlLoopParametersRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::GetControlLoopParametersRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::kortex_driver::LoopSelection_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_GETCONTROLLOOPPARAMETERSREQUEST_H
