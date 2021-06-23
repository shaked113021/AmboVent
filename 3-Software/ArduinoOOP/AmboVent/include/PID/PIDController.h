#ifndef _H_PID_PIDCONTROLLER
#define _H_PID_PIDCONTROLLER

namespace PID
{
  class PIDController
  {
    public:
      PIDController(PIDController&) = delete; // Removed Copy Constructor
      explicit PIDController(const float kP, const float kI, const float kD, const float integral_limit = kDefaultLimit);

      void SetSetPoint();
      void SetIntegralLimit(const float limit);
      void SetP(const float kP);
      void SetI(const float kI);
      void SetD(const float kD);
      void SetMinimumIntegralCycles(const int cycles);
      float GetSetPoint() const;
      float GetIntegralLimit() const;
      float GetP() const;
      float GetI() const;
      float GetD() const;
      float GetMinimumIntegralCycles() const;
      void Reset();
      float Calculate(const float proccess_variable);

      static constexpr float kDefaultLimit = -1.0f;
    private:
      float m_kP;
      float m_kI;
      float m_kD;
      float m_integral_limit;
      float m_set_point;
      float m_last_error;
      float m_integral;
      int m_cycle;
      int m_minimum_integral_cycles;
  };
}
#endif