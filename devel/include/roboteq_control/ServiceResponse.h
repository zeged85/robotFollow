// Generated by gencpp from file roboteq_control/ServiceResponse.msg
// DO NOT EDIT!


#ifndef ROBOTEQ_CONTROL_MESSAGE_SERVICERESPONSE_H
#define ROBOTEQ_CONTROL_MESSAGE_SERVICERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace roboteq_control
{
template <class ContainerAllocator>
struct ServiceResponse_
{
  typedef ServiceResponse_<ContainerAllocator> Type;

  ServiceResponse_()
    : information()  {
    }
  ServiceResponse_(const ContainerAllocator& _alloc)
    : information(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _information_type;
  _information_type information;





  typedef boost::shared_ptr< ::roboteq_control::ServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::roboteq_control::ServiceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ServiceResponse_

typedef ::roboteq_control::ServiceResponse_<std::allocator<void> > ServiceResponse;

typedef boost::shared_ptr< ::roboteq_control::ServiceResponse > ServiceResponsePtr;
typedef boost::shared_ptr< ::roboteq_control::ServiceResponse const> ServiceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::roboteq_control::ServiceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::roboteq_control::ServiceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace roboteq_control

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'roboteq_control': ['/home/zeged/catkin_ws/src/armadillo2/armadillo2_utils/roboteq_control/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::roboteq_control::ServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::roboteq_control::ServiceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::roboteq_control::ServiceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8f643f4492d5df4a7264b4dfdbe3626f";
  }

  static const char* value(const ::roboteq_control::ServiceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8f643f4492d5df4aULL;
  static const uint64_t static_value2 = 0x7264b4dfdbe3626fULL;
};

template<class ContainerAllocator>
struct DataType< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "roboteq_control/ServiceResponse";
  }

  static const char* value(const ::roboteq_control::ServiceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string information\n\
\n\
";
  }

  static const char* value(const ::roboteq_control::ServiceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.information);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ServiceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::roboteq_control::ServiceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::roboteq_control::ServiceResponse_<ContainerAllocator>& v)
  {
    s << indent << "information: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.information);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTEQ_CONTROL_MESSAGE_SERVICERESPONSE_H
