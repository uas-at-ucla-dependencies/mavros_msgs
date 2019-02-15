// Generated by gencpp from file mavros_msgs/VehicleInfoGetRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_VEHICLEINFOGETREQUEST_H
#define MAVROS_MSGS_MESSAGE_VEHICLEINFOGETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mavros_msgs
{
template <class ContainerAllocator>
struct VehicleInfoGetRequest_
{
  typedef VehicleInfoGetRequest_<ContainerAllocator> Type;

  VehicleInfoGetRequest_()
    : sysid(0)
    , compid(0)
    , get_all(false)  {
    }
  VehicleInfoGetRequest_(const ContainerAllocator& _alloc)
    : sysid(0)
    , compid(0)
    , get_all(false)  {
  (void)_alloc;
    }



   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef uint8_t _get_all_type;
  _get_all_type get_all;



  enum {
    GET_MY_SYSID = 0u,
    GET_MY_COMPID = 0u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleInfoGetRequest_

typedef ::mavros_msgs::VehicleInfoGetRequest_<std::allocator<void> > VehicleInfoGetRequest;

typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetRequest > VehicleInfoGetRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::VehicleInfoGetRequest const> VehicleInfoGetRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/lunar/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/lunar/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/uas/ros/mavros/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/lunar/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/lunar/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c1911e97179d4b379a979e2ab8e01e5c";
  }

  static const char* value(const ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc1911e97179d4b37ULL;
  static const uint64_t static_value2 = 0x9a979e2ab8e01e5cULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/VehicleInfoGetRequest";
  }

  static const char* value(const ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
\n\
\n\
uint8 GET_MY_SYSID = 0\n\
uint8 GET_MY_COMPID = 0\n\
\n\
uint8 sysid\n\
uint8 compid\n\
bool get_all\n\
";
  }

  static const char* value(const ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.get_all);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleInfoGetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::VehicleInfoGetRequest_<ContainerAllocator>& v)
  {
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "get_all: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.get_all);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_VEHICLEINFOGETREQUEST_H
