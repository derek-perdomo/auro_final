// Generated by gencpp from file kortex_driver/BaseCyclic_Feedback.msg
// DO NOT EDIT!


#ifndef KORTEX_DRIVER_MESSAGE_BASECYCLIC_FEEDBACK_H
#define KORTEX_DRIVER_MESSAGE_BASECYCLIC_FEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <kortex_driver/BaseFeedback.h>
#include <kortex_driver/ActuatorFeedback.h>
#include <kortex_driver/InterconnectCyclic_Feedback.h>

namespace kortex_driver
{
template <class ContainerAllocator>
struct BaseCyclic_Feedback_
{
  typedef BaseCyclic_Feedback_<ContainerAllocator> Type;

  BaseCyclic_Feedback_()
    : frame_id(0)
    , base()
    , actuators()
    , interconnect()  {
    }
  BaseCyclic_Feedback_(const ContainerAllocator& _alloc)
    : frame_id(0)
    , base(_alloc)
    , actuators(_alloc)
    , interconnect(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _frame_id_type;
  _frame_id_type frame_id;

   typedef  ::kortex_driver::BaseFeedback_<ContainerAllocator>  _base_type;
  _base_type base;

   typedef std::vector< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >> _actuators_type;
  _actuators_type actuators;

   typedef  ::kortex_driver::InterconnectCyclic_Feedback_<ContainerAllocator>  _interconnect_type;
  _interconnect_type interconnect;





  typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> const> ConstPtr;

}; // struct BaseCyclic_Feedback_

typedef ::kortex_driver::BaseCyclic_Feedback_<std::allocator<void> > BaseCyclic_Feedback;

typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_Feedback > BaseCyclic_FeedbackPtr;
typedef boost::shared_ptr< ::kortex_driver::BaseCyclic_Feedback const> BaseCyclic_FeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator1> & lhs, const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator2> & rhs)
{
  return lhs.frame_id == rhs.frame_id &&
    lhs.base == rhs.base &&
    lhs.actuators == rhs.actuators &&
    lhs.interconnect == rhs.interconnect;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator1> & lhs, const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace kortex_driver

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f56809f61aebc2804399d7366b38f65";
  }

  static const char* value(const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f56809f61aebc28ULL;
  static const uint64_t static_value2 = 0x04399d7366b38f65ULL;
};

template<class ContainerAllocator>
struct DataType< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "kortex_driver/BaseCyclic_Feedback";
  }

  static const char* value(const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"uint32 frame_id\n"
"BaseFeedback base\n"
"ActuatorFeedback[] actuators\n"
"InterconnectCyclic_Feedback interconnect\n"
"================================================================================\n"
"MSG: kortex_driver/BaseFeedback\n"
"\n"
"uint32 active_state_connection_identifier\n"
"uint32 active_state\n"
"float32 arm_voltage\n"
"float32 arm_current\n"
"float32 temperature_cpu\n"
"float32 temperature_ambient\n"
"float32 imu_acceleration_x\n"
"float32 imu_acceleration_y\n"
"float32 imu_acceleration_z\n"
"float32 imu_angular_velocity_x\n"
"float32 imu_angular_velocity_y\n"
"float32 imu_angular_velocity_z\n"
"float32 tool_pose_x\n"
"float32 tool_pose_y\n"
"float32 tool_pose_z\n"
"float32 tool_pose_theta_x\n"
"float32 tool_pose_theta_y\n"
"float32 tool_pose_theta_z\n"
"float32 tool_twist_linear_x\n"
"float32 tool_twist_linear_y\n"
"float32 tool_twist_linear_z\n"
"float32 tool_twist_angular_x\n"
"float32 tool_twist_angular_y\n"
"float32 tool_twist_angular_z\n"
"float32 tool_external_wrench_force_x\n"
"float32 tool_external_wrench_force_y\n"
"float32 tool_external_wrench_force_z\n"
"float32 tool_external_wrench_torque_x\n"
"float32 tool_external_wrench_torque_y\n"
"float32 tool_external_wrench_torque_z\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
"float32 commanded_tool_pose_x\n"
"float32 commanded_tool_pose_y\n"
"float32 commanded_tool_pose_z\n"
"float32 commanded_tool_pose_theta_x\n"
"float32 commanded_tool_pose_theta_y\n"
"float32 commanded_tool_pose_theta_z\n"
"================================================================================\n"
"MSG: kortex_driver/ActuatorFeedback\n"
"\n"
"uint32 command_id\n"
"uint32 status_flags\n"
"uint32 jitter_comm\n"
"float32 position\n"
"float32 velocity\n"
"float32 torque\n"
"float32 current_motor\n"
"float32 voltage\n"
"float32 temperature_motor\n"
"float32 temperature_core\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_Feedback\n"
"\n"
"InterconnectCyclic_MessageId feedback_id\n"
"uint32 status_flags\n"
"uint32 jitter_comm\n"
"float32 imu_acceleration_x\n"
"float32 imu_acceleration_y\n"
"float32 imu_acceleration_z\n"
"float32 imu_angular_velocity_x\n"
"float32 imu_angular_velocity_y\n"
"float32 imu_angular_velocity_z\n"
"float32 voltage\n"
"float32 temperature_core\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
"InterconnectCyclic_Feedback_tool_feedback oneof_tool_feedback\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/InterconnectCyclic_Feedback_tool_feedback\n"
"\n"
"GripperCyclic_Feedback[] gripper_feedback\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_Feedback\n"
"\n"
"GripperCyclic_MessageId feedback_id\n"
"uint32 status_flags\n"
"uint32 fault_bank_a\n"
"uint32 fault_bank_b\n"
"uint32 warning_bank_a\n"
"uint32 warning_bank_b\n"
"MotorFeedback[] motor\n"
"================================================================================\n"
"MSG: kortex_driver/GripperCyclic_MessageId\n"
"\n"
"uint32 identifier\n"
"================================================================================\n"
"MSG: kortex_driver/MotorFeedback\n"
"\n"
"uint32 motor_id\n"
"float32 position\n"
"float32 velocity\n"
"float32 current_motor\n"
"float32 voltage\n"
"float32 temperature_motor\n"
;
  }

  static const char* value(const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.frame_id);
      stream.next(m.base);
      stream.next(m.actuators);
      stream.next(m.interconnect);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BaseCyclic_Feedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::kortex_driver::BaseCyclic_Feedback_<ContainerAllocator>& v)
  {
    s << indent << "frame_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.frame_id);
    s << indent << "base: ";
    s << std::endl;
    Printer< ::kortex_driver::BaseFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.base);
    s << indent << "actuators[]" << std::endl;
    for (size_t i = 0; i < v.actuators.size(); ++i)
    {
      s << indent << "  actuators[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::kortex_driver::ActuatorFeedback_<ContainerAllocator> >::stream(s, indent + "    ", v.actuators[i]);
    }
    s << indent << "interconnect: ";
    s << std::endl;
    Printer< ::kortex_driver::InterconnectCyclic_Feedback_<ContainerAllocator> >::stream(s, indent + "  ", v.interconnect);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KORTEX_DRIVER_MESSAGE_BASECYCLIC_FEEDBACK_H
