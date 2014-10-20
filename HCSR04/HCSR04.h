/*
  L298.h - Library for utilizing the L298 H-bridge.
  Created September 5th, 2014.
  Naoki Yokoyama
*/

#ifndef HCSR04_h
#define HCSR04_h

#include "Arduino.h"

class HCSR04 {
  public:
  HCSR04();
  void assignPin(int TrigEchoPin);
  int readVal();

  private:
  int trigEchoPin; 
};

#endif

