#include <ambovent/units/Percent.h>

using ambovent::units::Percent;

Percent::Percent(float value = 0) : m_value(value)
{
}

Percent::operator float() const
{
  return this->m_value;
}

Percent Percent::operator+(const Percent& other) const
{
  return Percent(this->m_value + other.m_value);
}

Percent Percent::operator-(const Percent& other) const
{
  return Percent(this->m_value - other.m_value);
}

Percent& Percent::operator+=(const Percent& other)
{
  this->m_value += other.m_value;

  return *this;
}

Percent& Percent::operator-=(const Percent& other)
{
  this-> m_value -= other.m_value;

  return *this;
}