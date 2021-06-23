#ifndef _H_LED_REGULAR_LED
#define _H_LED_REGULAR_LED

#include "LEDInterface.h"

namespace LED
{
  class RegularLED : public LEDInterface
  {
    public:
      explicit RegularLED(const int pin);

      void Set(const bool state) final override;
      bool Get() const final override;

  private:
      bool m_state;
      int m_pin;
  };
}
#endif
