#include <LED/RGBLED.h>
#include <Arduino.h>

using LED::RGBLED;
using LED::RGBLEDColor;


RGBLED::RGBLED(const int pin_r, const int pin_g, const int pin_b) : m_pin_r(pin_r), m_pin_g(pin_g), m_pin_b(pin_b)
{
    pinMode(pin_r, OUTPUT);
    pinMode(pin_g, OUTPUT);
    pinMode(pin_b, OUTPUT);

    this->m_color = Blue;

    digitalWrite(pin_r, LOW);
    digitalWrite(pin_g, LOW);
    digitalWrite(pin_b, LOW);
    this->m_state = false;
}

void RGBLED::Set(const bool state)
{
    this->m_state = state;

    if (!this->m_state)
    {
      digitalWrite(m_pin_r, LOW);
      digitalWrite(m_pin_g, LOW);
      digitalWrite(m_pin_b, LOW);
    } 
    else
    {
      switch (this->m_color)
      {
        case Yellow:
        {
          digitalWrite(m_pin_r, HIGH);
          digitalWrite(m_pin_g, HIGH);
          digitalWrite(m_pin_b, LOW);
          break;
        }
        case Blue:
        {
          digitalWrite(m_pin_r, LOW);
          digitalWrite(m_pin_g, LOW);
          digitalWrite(m_pin_b, HIGH);
          break;
        }
        default:
        {
          digitalWrite(m_pin_r, HIGH);
          digitalWrite(m_pin_g, HIGH);
          digitalWrite(m_pin_b, HIGH);
          break;
        }
      }
    }
}
void RGBLED::SetColor(const RGBLEDColor color)
{
  this->m_color = color;
}
RGBLEDColor RGBLED::GetColor() const
{
    return this->m_color;
}
bool RGBLED::Get() const
{
  return this->m_state;
}
