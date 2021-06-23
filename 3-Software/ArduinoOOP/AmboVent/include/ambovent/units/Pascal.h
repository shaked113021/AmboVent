#ifndef _H_AMBOVENT_UNITS_PASCAL
#define _H_AMBOVENT_UNITS_PASCAL

namespace ambovent
{
  namespace units
  {
    class Pascal
    {
      public:
        explicit Pascal(const float value);

        operator float() const;
        Pascal operator+(const Pascal& other) const;
        Pascal operator-(const Pascal& other) const;
        Pascal& operator+=(const Pascal& other);
        Pascal& operator-=(const Pascal& other);
      private:
        float m_value;
    };
  }
}
#endif