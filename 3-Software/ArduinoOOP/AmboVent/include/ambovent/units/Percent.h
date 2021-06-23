#ifndef _H_AMBOVENT_UNITS_PERCENT
#define _H_AMBOVENT_UNITS_PERCENT

namespace ambovent
{
  namespace units
  {
    class Percent
    {
      public:
        explicit Percent(float value = 0);
        
        operator float() const;
        Percent operator+(const Percent& other) const;
        Percent operator-(const Percent& other) const;
        Percent& operator+=(const Percent& other);
        Percent& operator-=(const Percent& other);

      private:
        float m_value;
    };
  }
}
#endif