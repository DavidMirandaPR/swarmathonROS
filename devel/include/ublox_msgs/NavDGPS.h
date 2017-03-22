// Generated by gencpp from file ublox_msgs/NavDGPS.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_NAVDGPS_H
#define UBLOX_MSGS_MESSAGE_NAVDGPS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <ublox_msgs/NavDGPS_SV.h>

namespace ublox_msgs
{
template <class ContainerAllocator>
struct NavDGPS_
{
  typedef NavDGPS_<ContainerAllocator> Type;

  NavDGPS_()
    : iTOW(0)
    , age(0)
    , baseId(0)
    , baseHealth(0)
    , numCh(0)
    , status(0)
    , reserved1(0)
    , sv()  {
    }
  NavDGPS_(const ContainerAllocator& _alloc)
    : iTOW(0)
    , age(0)
    , baseId(0)
    , baseHealth(0)
    , numCh(0)
    , status(0)
    , reserved1(0)
    , sv(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _iTOW_type;
  _iTOW_type iTOW;

   typedef int32_t _age_type;
  _age_type age;

   typedef int16_t _baseId_type;
  _baseId_type baseId;

   typedef int16_t _baseHealth_type;
  _baseHealth_type baseHealth;

   typedef int8_t _numCh_type;
  _numCh_type numCh;

   typedef uint8_t _status_type;
  _status_type status;

   typedef uint16_t _reserved1_type;
  _reserved1_type reserved1;

   typedef std::vector< ::ublox_msgs::NavDGPS_SV_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::ublox_msgs::NavDGPS_SV_<ContainerAllocator> >::other >  _sv_type;
  _sv_type sv;


    enum { CLASS_ID = 1u };
     enum { MESSAGE_ID = 31u };
     enum { DGPS_CORRECTION_NONE = 0u };
     enum { DGPS_CORRECTION_PR_PRR = 1u };
 

  typedef boost::shared_ptr< ::ublox_msgs::NavDGPS_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::NavDGPS_<ContainerAllocator> const> ConstPtr;

}; // struct NavDGPS_

typedef ::ublox_msgs::NavDGPS_<std::allocator<void> > NavDGPS;

typedef boost::shared_ptr< ::ublox_msgs::NavDGPS > NavDGPSPtr;
typedef boost::shared_ptr< ::ublox_msgs::NavDGPS const> NavDGPSConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::NavDGPS_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::NavDGPS_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/interamericana/rover_workspace/src/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::NavDGPS_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::NavDGPS_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::NavDGPS_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b0aba8454084620f2a8eb7ff6445368c";
  }

  static const char* value(const ::ublox_msgs::NavDGPS_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb0aba8454084620fULL;
  static const uint64_t static_value2 = 0x2a8eb7ff6445368cULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/NavDGPS";
  }

  static const char* value(const ::ublox_msgs::NavDGPS_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# NAV-DGPS (0x01 0x31)\n\
# DGPS Data Used for NAV\n\
#\n\
# This message outputs the Correction data as it has been applied to the current NAV\n\
# Solution. See also the notes on the RTCM protocol.\n\
#\n\
\n\
uint8 CLASS_ID = 1\n\
uint8 MESSAGE_ID = 31\n\
\n\
uint32 iTOW             # GPS Millisecond time of week [ms]\n\
\n\
int32 age               # Age of newest correction data [ms]\n\
int16 baseId            # DGPS Base Station ID\n\
int16 baseHealth        # DGPS Base Station Health Status\n\
int8 numCh              # Number of channels for which correction data is following\n\
\n\
uint8 status            # DGPS Correction Type Status\n\
uint8 DGPS_CORRECTION_NONE = 0\n\
uint8 DGPS_CORRECTION_PR_PRR = 1\n\
\n\
uint16 reserved1        # Reserved\n\
\n\
NavDGPS_SV[] sv\n\
\n\
================================================================================\n\
MSG: ublox_msgs/NavDGPS_SV\n\
# see message NavDGPS\n\
\n\
uint8 svid              # Satellite ID\n\
\n\
uint8 flags             # Bitmask / Channel Number\n\
uint8 CHANNEL1 = 1\n\
uint8 CHANNEL2 = 2\n\
uint8 CHANNEL3 = 3\n\
uint8 CHANNEL4 = 4\n\
uint8 CHANNEL5 = 5\n\
uint8 CHANNEL6 = 6\n\
uint8 CHANNEL7 = 7\n\
uint8 CHANNEL8 = 8\n\
uint8 DGPS = 16\n\
\n\
uint16 ageC             # Age of latest correction data [ms]\n\
float32 prc             # Pseudo Range Correction [m]\n\
float32 prrc            # Pseudo Range Rate Correction [m/s]\n\
\n\
";
  }

  static const char* value(const ::ublox_msgs::NavDGPS_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.iTOW);
      stream.next(m.age);
      stream.next(m.baseId);
      stream.next(m.baseHealth);
      stream.next(m.numCh);
      stream.next(m.status);
      stream.next(m.reserved1);
      stream.next(m.sv);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct NavDGPS_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::NavDGPS_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::NavDGPS_<ContainerAllocator>& v)
  {
    s << indent << "iTOW: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.iTOW);
    s << indent << "age: ";
    Printer<int32_t>::stream(s, indent + "  ", v.age);
    s << indent << "baseId: ";
    Printer<int16_t>::stream(s, indent + "  ", v.baseId);
    s << indent << "baseHealth: ";
    Printer<int16_t>::stream(s, indent + "  ", v.baseHealth);
    s << indent << "numCh: ";
    Printer<int8_t>::stream(s, indent + "  ", v.numCh);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "reserved1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.reserved1);
    s << indent << "sv[]" << std::endl;
    for (size_t i = 0; i < v.sv.size(); ++i)
    {
      s << indent << "  sv[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::ublox_msgs::NavDGPS_SV_<ContainerAllocator> >::stream(s, indent + "    ", v.sv[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_NAVDGPS_H
