#pragma once

#include "NodalPostprocessor.h"

/**
 * Computes sum of energy flux for a phase over nodes
 */
class NodalEnergyFluxPostprocessor : public NodalPostprocessor
{
public:
  NodalEnergyFluxPostprocessor(const InputParameters & parameters);

  virtual void initialize();
  virtual void execute();
  virtual PostprocessorValue getValue();
  virtual void threadJoin(const UserObject & uo);

protected:
  Real _value;
  const VariableValue & _arhouA;
  const VariableValue & _H;

public:
  static InputParameters validParams();
};