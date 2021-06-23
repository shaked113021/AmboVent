#include <LED/RegularLED.h>
#include <Arduino.h>


using LED::RegularLED;

RegularLED::RegularLED(const int pin) : m_pin(pin)
{
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
    this->m_state = false;
}

bool RegularLED::Get() const
{
    return m_state;
}

void RegularLED::Set(const bool state)
{
    digitalWrite(this->m_pin, state);
    this->m_state = state;
}
