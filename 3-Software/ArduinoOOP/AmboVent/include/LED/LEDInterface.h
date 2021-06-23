#ifndef LEDINTERFACE_H
#define LEDINTERFACE_H

namespace LED
{
  class LEDInterface
  {
    public:
      virtual void Set(const bool state) = 0;
      virtual bool Get() const = 0;
      virtual ~LEDInterface() = default;
  };
}

#endif
