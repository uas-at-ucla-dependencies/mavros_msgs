// Generated by gencpp from file geographic_msgs/GeoPoint.msg
// DO NOT EDIT!


#ifndef GEOGRAPHIC_MSGS_MESSAGE_GEOPOINT_H
#define GEOGRAPHIC_MSGS_MESSAGE_GEOPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace geographic_msgs
{
template <class ContainerAllocator>
struct GeoPoint_
{
  typedef GeoPoint_<ContainerAllocator> Type;

  GeoPoint_()
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
    }
  GeoPoint_(const ContainerAllocator& _alloc)
    : latitude(0.0)
    , longitude(0.0)
    , altitude(0.0)  {
  (void)_alloc;
    }



   typedef double _latitude_type;
  _latitude_type latitude;

   typedef double _longitude_type;
  _longitude_type longitude;

   typedef double _altitude_type;
  _altitude_type altitude;





  typedef boost::shared_ptr< ::geographic_msgs::GeoPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geographic_msgs::GeoPoint_<ContainerAllocator> const> ConstPtr;

}; // struct GeoPoint_

typedef ::geographic_msgs::GeoPoint_<std::allocator<void> > GeoPoint;

typedef boost::shared_ptr< ::geographic_msgs::GeoPoint > GeoPointPtr;
typedef boost::shared_ptr< ::geographic_msgs::GeoPoint const> GeoPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geographic_msgs::GeoPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace geographic_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/comran/Code/ros_lunar_amd64/install_isolated/share/std_msgs/cmake/../msg'], 'geographic_msgs': ['/home/comran/Code/ros_lunar_amd64/src/geographic_info/geographic_msgs/msg'], 'geometry_msgs': ['/home/comran/Code/ros_lunar_amd64/install_isolated/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/home/comran/Code/ros_lunar_amd64/install_isolated/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geographic_msgs::GeoPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geographic_msgs::GeoPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geographic_msgs::GeoPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c48027a852aeff972be80478ff38e81a";
  }

  static const char* value(const ::geographic_msgs::GeoPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc48027a852aeff97ULL;
  static const uint64_t static_value2 = 0x2be80478ff38e81aULL;
};

template<class ContainerAllocator>
struct DataType< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geographic_msgs/GeoPoint";
  }

  static const char* value(const ::geographic_msgs::GeoPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Geographic point, using the WGS 84 reference ellipsoid.\n\
\n\
# Latitude [degrees]. Positive is north of equator; negative is south\n\
# (-90 <= latitude <= +90).\n\
float64 latitude\n\
\n\
# Longitude [degrees]. Positive is east of prime meridian; negative is\n\
# west (-180 <= longitude <= +180). At the poles, latitude is -90 or\n\
# +90, and longitude is irrelevant, but must be in range.\n\
float64 longitude\n\
\n\
# Altitude [m]. Positive is above the WGS 84 ellipsoid (NaN if unspecified).\n\
float64 altitude\n\
";
  }

  static const char* value(const ::geographic_msgs::GeoPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.latitude);
      stream.next(m.longitude);
      stream.next(m.altitude);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GeoPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geographic_msgs::GeoPoint_<ContainerAllocator>& v)
  {
    s << indent << "latitude: ";
    Printer<double>::stream(s, indent + "  ", v.latitude);
    s << indent << "longitude: ";
    Printer<double>::stream(s, indent + "  ", v.longitude);
    s << indent << "altitude: ";
    Printer<double>::stream(s, indent + "  ", v.altitude);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOGRAPHIC_MSGS_MESSAGE_GEOPOINT_H
