/*
  L298.h - Library for utilizing the L298 H-bridge.
  Created September 5th, 2014.
  Naoki Yokoyama
*/

#ifndef L298_h
#define L298_h

#include "Arduino.h"

class L298 {
  public:
  L298();
  void assignPins(int EnablePin, int Input1Pin, int Input2Pin);
  void move(int power);
  void brake();

  private:
  int enablePin, input1Pin, input2Pin; 
};

#endif

