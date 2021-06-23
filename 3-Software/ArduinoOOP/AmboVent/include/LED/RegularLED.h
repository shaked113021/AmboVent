#ifndef _H_LED_REGULAR_LED
#define _H_LED_REGULAR_LED

namespace LED
{
  class RegularLED
  {
    public:
      explicit RegularLED(const int pin);
    private:
      int m_pin;
  };
}
#endif