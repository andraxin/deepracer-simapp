// Generated by gencpp from file deepracer_msgs/GetVisualNamesResponse.msg
// DO NOT EDIT!


#ifndef DEEPRACER_MSGS_MESSAGE_GETVISUALNAMESRESPONSE_H
#define DEEPRACER_MSGS_MESSAGE_GETVISUALNAMESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace deepracer_msgs
{
template <class ContainerAllocator>
struct GetVisualNamesResponse_
{
  typedef GetVisualNamesResponse_<ContainerAllocator> Type;

  GetVisualNamesResponse_()
    : visual_names()
    , link_names()
    , success(false)
    , status_message()  {
    }
  GetVisualNamesResponse_(const ContainerAllocator& _alloc)
    : visual_names(_alloc)
    , link_names(_alloc)
    , success(false)
    , status_message(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _visual_names_type;
  _visual_names_type visual_names;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _link_names_type;
  _link_names_type link_names;

   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _status_message_type;
  _status_message_type status_message;





  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetVisualNamesResponse_

typedef ::deepracer_msgs::GetVisualNamesResponse_<std::allocator<void> > GetVisualNamesResponse;

typedef boost::shared_ptr< ::deepracer_msgs::GetVisualNamesResponse > GetVisualNamesResponsePtr;
typedef boost::shared_ptr< ::deepracer_msgs::GetVisualNamesResponse const> GetVisualNamesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator2> & rhs)
{
  return lhs.visual_names == rhs.visual_names &&
    lhs.link_names == rhs.link_names &&
    lhs.success == rhs.success &&
    lhs.status_message == rhs.status_message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator1> & lhs, const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace deepracer_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5323124d2ba84ce93d67d5fcce472b3";
  }

  static const char* value(const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5323124d2ba84ceULL;
  static const uint64_t static_value2 = 0x93d67d5fcce472b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "deepracer_msgs/GetVisualNamesResponse";
  }

  static const char* value(const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] visual_names\n"
"string[] link_names\n"
"bool success\n"
"string status_message\n"
;
  }

  static const char* value(const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.visual_names);
      stream.next(m.link_names);
      stream.next(m.success);
      stream.next(m.status_message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetVisualNamesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::deepracer_msgs::GetVisualNamesResponse_<ContainerAllocator>& v)
  {
    s << indent << "visual_names[]" << std::endl;
    for (size_t i = 0; i < v.visual_names.size(); ++i)
    {
      s << indent << "  visual_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.visual_names[i]);
    }
    s << indent << "link_names[]" << std::endl;
    for (size_t i = 0; i < v.link_names.size(); ++i)
    {
      s << indent << "  link_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_names[i]);
    }
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "status_message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.status_message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DEEPRACER_MSGS_MESSAGE_GETVISUALNAMESRESPONSE_H
