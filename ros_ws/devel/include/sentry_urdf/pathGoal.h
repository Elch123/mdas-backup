// Generated by gencpp from file sentry_urdf/pathGoal.msg
// DO NOT EDIT!


#ifndef SENTRY_URDF_MESSAGE_PATHGOAL_H
#define SENTRY_URDF_MESSAGE_PATHGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/Path.h>

namespace sentry_urdf
{
template <class ContainerAllocator>
struct pathGoal_
{
  typedef pathGoal_<ContainerAllocator> Type;

  pathGoal_()
    : path()  {
    }
  pathGoal_(const ContainerAllocator& _alloc)
    : path(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::Path_<ContainerAllocator>  _path_type;
  _path_type path;




  typedef boost::shared_ptr< ::sentry_urdf::pathGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sentry_urdf::pathGoal_<ContainerAllocator> const> ConstPtr;

}; // struct pathGoal_

typedef ::sentry_urdf::pathGoal_<std::allocator<void> > pathGoal;

typedef boost::shared_ptr< ::sentry_urdf::pathGoal > pathGoalPtr;
typedef boost::shared_ptr< ::sentry_urdf::pathGoal const> pathGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sentry_urdf::pathGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sentry_urdf::pathGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sentry_urdf

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'roscpp': ['/opt/ros/indigo/share/roscpp/cmake/../msg'], 'sentry_urdf': ['/home/mdas/ros_ws/devel/share/sentry_urdf/msg'], 'actionlib': ['/opt/ros/indigo/share/actionlib/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sentry_urdf::pathGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sentry_urdf::pathGoal_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sentry_urdf::pathGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sentry_urdf::pathGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sentry_urdf::pathGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sentry_urdf::pathGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sentry_urdf::pathGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "58d6f138c7de7ef47c75d4b7e5df5472";
  }

  static const char* value(const ::sentry_urdf::pathGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x58d6f138c7de7ef4ULL;
  static const uint64_t static_value2 = 0x7c75d4b7e5df5472ULL;
};

template<class ContainerAllocator>
struct DataType< ::sentry_urdf::pathGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sentry_urdf/pathGoal";
  }

  static const char* value(const ::sentry_urdf::pathGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sentry_urdf::pathGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
#the lines with the hash signs are merely comments\n\
#goal, result and feedback are defined by this fixed order, and separated by 3 hyphens\n\
nav_msgs/Path path\n\
\n\
================================================================================\n\
MSG: nav_msgs/Path\n\
#An array of poses that represents a Path for a robot to follow\n\
Header header\n\
geometry_msgs/PoseStamped[] poses\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::sentry_urdf::pathGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sentry_urdf::pathGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.path);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pathGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sentry_urdf::pathGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sentry_urdf::pathGoal_<ContainerAllocator>& v)
  {
    s << indent << "path: ";
    s << std::endl;
    Printer< ::nav_msgs::Path_<ContainerAllocator> >::stream(s, indent + "  ", v.path);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENTRY_URDF_MESSAGE_PATHGOAL_H
