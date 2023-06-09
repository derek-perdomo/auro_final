// Generated by gencpp from file kortex_driver/InterconnectCyclic_Command.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_COMMAND_H
#define KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_COMMAND_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/InterconnectCyclic_MessageId.h>
#include <kortex_driver/InterconnectCyclic_Command_tool_command.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct InterconnectCyclic_Command_
{
  typedef InterconnectCyclic_Command_<ContainerAllocator> Type;

  InterconnectCyclic_Command_()
    : command_id()
    , flags(0)
    , oneof_tool_command()  {
    }
  InterconnectCyclic_Command_(const ContainerAllocator& _alloc)
    : command_id(_alloc)
    , flags(0)
    , oneof_tool_command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::kortex_driver::InterconnectCyclic_MessageId_<ContainerAllocator>  _command_id_type;
  _command_id_type command_id;

   typedef uint32_t _flags_type;
  _flags_type flags;

   typedef  ::kortex_driver::InterconnectCyclic_Command_tool_command_<ContainerAllocator>  _oneof_tool_command_type;
  _oneof_tool_command_type oneof_tool_command;





  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> const> ConstPtr;

}; // struct InterconnectCyclic_Command_

typedef ::kortex_driver::InterconnectCyclic_Command_<std::allocator<void> > InterconnectCyclic_Command;

typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Command > InterconnectCyclic_CommandPtr;
typedef boost::shared_ptr< ::kortex_driver::InterconnectCyclic_Command const> InterconnectCyclic_CommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator2> & rhs)
{
  return lhs.command_id == rhs.command_id &&
    lhs.flags == rhs.flags &&
    lhs.oneof_tool_command == rhs.oneof_tool_command;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator1> & lhs, const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4def369ad2d800b446113efeb710b701";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4def369ad2d800b4ULL;
  static const uint64_t static_value2 = 0x46113efeb710b701ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/InterconnectCyclic_Command";
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"InterconnectCyclic_MessageId command_id\n"
"uint32 flags\n"
"InterconnectCyclic_Command_tool_command oneof_tool_command\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_Command_tool_command\n"
"\n"
"GripperCyclic_Command[] gripper_command\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_Command\n"
"\n"
"GripperCyclic_MessageId command_id\n"
"uint32 flags\n"
"MotorCommand[] motor_cmd\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/MotorCommand\n"
"\n"
"uint32 motor_id\n"
"float32 position\n"
"float32 velocity\n"
"float32 force\n"
;
  }

  static const char* value(const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command_id);
      stream.next(m.flags);
      stream.next(m.oneof_tool_command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InterconnectCyclic_Command_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::InterconnectCyclic_Command_<ContainerAllocator>& v)
  {
    s << indent << "command_id: ";
    s << std::endl;
    Printer< ::kortex_driver::InterconnectCyclic_MessageId_<ContainerAllocator> >::stream(s, indent + "  ", v.command_id);
    s << indent << "flags: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.flags);
    s << indent << "oneof_tool_command: ";
    s << std::endl;
    Printer< ::kortex_driver::InterconnectCyclic_Command_tool_command_<ContainerAllocator> >::stream(s, indent + "  ", v.oneof_tool_command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_INTERCONNECTCYCLIC_COMMAND_H
