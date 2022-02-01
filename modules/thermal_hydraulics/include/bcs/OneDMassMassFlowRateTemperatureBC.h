#pragma once

#include "OneDIntegratedBC.h"

/**
 * Mass flow rate (m_dot) and temperature (T) BC
 */
class OneDMassMassFlowRateTemperatureBC : public OneDIntegratedBC
{
public:
  OneDMassMassFlowRateTemperatureBC(const InputParameters & parameters);

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();

  const Real & _m_dot;

public:
  static InputParameters validParams();
};