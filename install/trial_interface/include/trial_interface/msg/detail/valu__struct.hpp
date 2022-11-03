// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trial_interface:msg/Valu.idl
// generated code does not contain a copyright notice

#ifndef TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_HPP_
#define TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__trial_interface__msg__Valu __attribute__((deprecated))
#else
# define DEPRECATED__trial_interface__msg__Valu __declspec(deprecated)
#endif

namespace trial_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Valu_
{
  using Type = Valu_<ContainerAllocator>;

  explicit Valu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valu = 0.0;
    }
  }

  explicit Valu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->valu = 0.0;
    }
  }

  // field types and members
  using _valu_type =
    double;
  _valu_type valu;

  // setters for named parameter idiom
  Type & set__valu(
    const double & _arg)
  {
    this->valu = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trial_interface::msg::Valu_<ContainerAllocator> *;
  using ConstRawPtr =
    const trial_interface::msg::Valu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trial_interface::msg::Valu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trial_interface::msg::Valu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trial_interface::msg::Valu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trial_interface::msg::Valu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trial_interface::msg::Valu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trial_interface::msg::Valu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trial_interface::msg::Valu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trial_interface::msg::Valu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trial_interface__msg__Valu
    std::shared_ptr<trial_interface::msg::Valu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trial_interface__msg__Valu
    std::shared_ptr<trial_interface::msg::Valu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Valu_ & other) const
  {
    if (this->valu != other.valu) {
      return false;
    }
    return true;
  }
  bool operator!=(const Valu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Valu_

// alias to use template instance with default allocator
using Valu =
  trial_interface::msg::Valu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace trial_interface

#endif  // TRIAL_INTERFACE__MSG__DETAIL__VALU__STRUCT_HPP_
