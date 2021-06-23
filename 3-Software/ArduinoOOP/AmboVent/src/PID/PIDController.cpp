#include <PID/PIDController.h>

using PID::PIDController;

PIDController::PIDController(const float kP, const float kI, const float kD, const float integral_limit = kDefaultLimit) : m_kP(kP), m_kI(kI), m_kD(kD), m_integral_limit(integral_limit)
{
  this->m_minimum_integral_cycles = 0;
  this->Reset();
}

void PIDController::SetIntegralLimit(const float limit)
{
  this->m_integral_limit = limit;
}

void PIDController::SetP(const float kP)
{
  this->m_kP = kP;
}

void PIDController::SetI(const float kI)
{
  this->m_kI = kI;
}

void PIDController::SetD(const float kD)
{
  this->m_kD = kD;
}

void PIDController::SetMinimumIntegralCycles(const int cycles)
{
  this->m_minimum_integral_cycles = cycles;
}

float PIDController::GetSetPoint() const
{
  return this->m_set_point;
}

float PIDController::GetIntegralLimit() const
{
  return this->m_integral_limit;
}

float PIDController::GetP() const
{
  return this->m_kP;
}

float PIDController::GetI() const
{
  return this->m_kI;
}

float PIDController::GetD() const
{
  return this->m_kD;
}

float PIDController::GetMinimumIntegralCycles() const
{
  return this->m_minimum_integral_cycles;
}


void PIDController::Reset()
{
  this->m_cycle = 0;
  this->m_integral = 0;
  this->m_last_error = 0;
}

float PIDController::Calculate(const float proccess_variable)
{
  float error;
  float derivative;
  
  ++this->m_cycle;
  
  // error calculation
  error = this->m_set_point - proccess_variable;
  
  // detivative calculation
  derivative = error - this->m_last_error;
  this->m_last_error = error;

  // integral calculation
  if (this->m_cycle > this->m_minimum_integral_cycles)
  {
    this->m_integral += error;
    if (this->m_integral > this->m_integral_limit)
    {
      this->m_integral = this->m_integral_limit;
    } 
    else if (this->m_integral < -this->m_integral_limit)
    {
      this->m_integral = -this->m_integral_limit;
    }
  }  

  return m_kP * error + m_kI * m_integral * m_kD * derivative;
}
