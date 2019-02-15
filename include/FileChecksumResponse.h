// Generated by gencpp from file mavros_msgs/FileChecksumResponse.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_FILECHECKSUMRESPONSE_H
#define MAVROS_MSGS_MESSAGE_FILECHECKSUMRESPONSE_H


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
struct FileChecksumResponse_
{
  typedef FileChecksumResponse_<ContainerAllocator> Type;

  FileChecksumResponse_()
    : crc32(0)
    , success(false)
    , r_errno(0)  {
    }
  FileChecksumResponse_(const ContainerAllocator& _alloc)
    : crc32(0)
    , success(false)
    , r_errno(0)  {
  (void)_alloc;
    }



   typedef uint32_t _crc32_type;
  _crc32_type crc32;

   typedef uint8_t _success_type;
  _success_type success;

   typedef int32_t _r_errno_type;
  _r_errno_type r_errno;





  typedef boost::shared_ptr< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> const> ConstPtr;

}; // struct FileChecksumResponse_

typedef ::mavros_msgs::FileChecksumResponse_<std::allocator<void> > FileChecksumResponse;

typedef boost::shared_ptr< ::mavros_msgs::FileChecksumResponse > FileChecksumResponsePtr;
typedef boost::shared_ptr< ::mavros_msgs::FileChecksumResponse const> FileChecksumResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ecf737b97670b745ca39c7b185cc756";
  }

  static const char* value(const ::mavros_msgs::FileChecksumResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ecf737b97670b74ULL;
  static const uint64_t static_value2 = 0x5ca39c7b185cc756ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/FileChecksumResponse";
  }

  static const char* value(const ::mavros_msgs::FileChecksumResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 crc32\n\
bool success\n\
int32 r_errno\n\
\n\
";
  }

  static const char* value(const ::mavros_msgs::FileChecksumResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.crc32);
      stream.next(m.success);
      stream.next(m.r_errno);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FileChecksumResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::FileChecksumResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::FileChecksumResponse_<ContainerAllocator>& v)
  {
    s << indent << "crc32: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.crc32);
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "r_errno: ";
    Printer<int32_t>::stream(s, indent + "  ", v.r_errno);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_FILECHECKSUMRESPONSE_H
