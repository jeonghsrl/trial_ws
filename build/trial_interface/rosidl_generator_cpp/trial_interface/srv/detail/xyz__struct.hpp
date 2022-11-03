// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trial_interface:srv/XYZ.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_HPP_
#define TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__trial_interface__srv__XYZ_Request __attribute__((deprecated))
#else
# define DEPRECATED__trial_interface__srv__XYZ_Request __declspec(deprecated)
#endif

namespace trial_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct XYZ_Request_
{
  using Type = XYZ_Request_<ContainerAllocator>;

  explicit XYZ_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->z = 0ll;
    }
  }

  explicit XYZ_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ll;
      this->y = 0ll;
      this->z = 0ll;
    }
  }

  // field types and members
  using _x_type =
    int64_t;
  _x_type x;
  using _y_type =
    int64_t;
  _y_type y;
  using _z_type =
    int64_t;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const int64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const int64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const int64_t & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trial_interface::srv::XYZ_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trial_interface::srv::XYZ_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trial_interface::srv::XYZ_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trial_interface::srv::XYZ_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trial_interface__srv__XYZ_Request
    std::shared_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trial_interface__srv__XYZ_Request
    std::shared_ptr<trial_interface::srv::XYZ_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XYZ_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const XYZ_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XYZ_Request_

// alias to use template instance with default allocator
using XYZ_Request =
  trial_interface::srv::XYZ_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trial_interface


#ifndef _WIN32
# define DEPRECATED__trial_interface__srv__XYZ_Response __attribute__((deprecated))
#else
# define DEPRECATED__trial_interface__srv__XYZ_Response __declspec(deprecated)
#endif

namespace trial_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct XYZ_Response_
{
  using Type = XYZ_Response_<ContainerAllocator>;

  explicit XYZ_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sqsum = 0ll;
    }
  }

  explicit XYZ_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sqsum = 0ll;
    }
  }

  // field types and members
  using _sqsum_type =
    int64_t;
  _sqsum_type sqsum;

  // setters for named parameter idiom
  Type & set__sqsum(
    const int64_t & _arg)
  {
    this->sqsum = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trial_interface::srv::XYZ_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trial_interface::srv::XYZ_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trial_interface::srv::XYZ_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trial_interface::srv::XYZ_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trial_interface__srv__XYZ_Response
    std::shared_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trial_interface__srv__XYZ_Response
    std::shared_ptr<trial_interface::srv::XYZ_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const XYZ_Response_ & other) const
  {
    if (this->sqsum != other.sqsum) {
      return false;
    }
    return true;
  }
  bool operator!=(const XYZ_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct XYZ_Response_

// alias to use template instance with default allocator
using XYZ_Response =
  trial_interface::srv::XYZ_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trial_interface

namespace trial_interface
{

namespace srv
{

struct XYZ
{
  using Request = trial_interface::srv::XYZ_Request;
  using Response = trial_interface::srv::XYZ_Response;
};

}  // namespace srv

}  // namespace trial_interface

#endif  // TRIAL_INTERFACE__SRV__DETAIL__XYZ__STRUCT_HPP_
