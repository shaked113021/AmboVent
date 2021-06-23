#include <ambovent/units/Pascal.h>

using ambovent::units::Pascal;

Pascal::Pascal(const float value) : m_value(value)
{

}

Pascal::operator float() const
{
  return this->m_value;
}

Pascal Pascal::operator+(const Pascal& other) const
{
  return Pascal(this->m_value + other.m_value);
}

Pascal Pascal::operator-(const Pascal& other) const
{
  return Pascal(this->m_value - other.m_value);
}
Pascal& Pascal::operator+=(const Pascal& other)
{
  this->m_value += other.m_value;
  
  return *this;
}

Pascal& Pascal::operator-=(const Pascal& other)
{
  this->m_value -= other.m_value;

  return *this;
}