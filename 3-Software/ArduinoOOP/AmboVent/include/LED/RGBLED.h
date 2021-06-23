#ifndef RGBLED_H
#define RGBLED_H

#include "LEDInterface.h"
#include "RGBLEDColor.h"

namespace LED
{
  class RGBLED : public LEDInterface
  {
    public:
      explicit RGBLED(const int pin_r, const int pin_g, const int pin_b);

      void Set(const bool state) final override;
      void SetColor(const RGBLEDColor color);
      RGBLEDColor GetColor() const;
      bool Get() const final override;
    private:
      bool m_state;
      RGBLEDColor m_color;

      int m_pin_r;
      int m_pin_g;
      int m_pin_b;
  };
}
#endif
