// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from signal_msg:msg/SignalCustom.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__BUILDER_HPP_
#define SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "signal_msg/msg/detail/signal_custom__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace signal_msg
{

namespace msg
{

namespace builder
{

class Init_SignalCustom_time
{
public:
  explicit Init_SignalCustom_time(::signal_msg::msg::SignalCustom & msg)
  : msg_(msg)
  {}
  ::signal_msg::msg::SignalCustom time(::signal_msg::msg::SignalCustom::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

class Init_SignalCustom_phase
{
public:
  explicit Init_SignalCustom_phase(::signal_msg::msg::SignalCustom & msg)
  : msg_(msg)
  {}
  Init_SignalCustom_time phase(::signal_msg::msg::SignalCustom::_phase_type arg)
  {
    msg_.phase = std::move(arg);
    return Init_SignalCustom_time(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

class Init_SignalCustom_offset
{
public:
  explicit Init_SignalCustom_offset(::signal_msg::msg::SignalCustom & msg)
  : msg_(msg)
  {}
  Init_SignalCustom_phase offset(::signal_msg::msg::SignalCustom::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_SignalCustom_phase(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

class Init_SignalCustom_frequency
{
public:
  explicit Init_SignalCustom_frequency(::signal_msg::msg::SignalCustom & msg)
  : msg_(msg)
  {}
  Init_SignalCustom_offset frequency(::signal_msg::msg::SignalCustom::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_SignalCustom_offset(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

class Init_SignalCustom_amplitude
{
public:
  explicit Init_SignalCustom_amplitude(::signal_msg::msg::SignalCustom & msg)
  : msg_(msg)
  {}
  Init_SignalCustom_frequency amplitude(::signal_msg::msg::SignalCustom::_amplitude_type arg)
  {
    msg_.amplitude = std::move(arg);
    return Init_SignalCustom_frequency(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

class Init_SignalCustom_signaltype
{
public:
  Init_SignalCustom_signaltype()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalCustom_amplitude signaltype(::signal_msg::msg::SignalCustom::_signaltype_type arg)
  {
    msg_.signaltype = std::move(arg);
    return Init_SignalCustom_amplitude(msg_);
  }

private:
  ::signal_msg::msg::SignalCustom msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::signal_msg::msg::SignalCustom>()
{
  return signal_msg::msg::builder::Init_SignalCustom_signaltype();
}

}  // namespace signal_msg

#endif  // SIGNAL_MSG__MSG__DETAIL__SIGNAL_CUSTOM__BUILDER_HPP_
