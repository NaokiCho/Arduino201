/*
  HCSR04.cpp - Library for utilizing the HCSR04 ultrasonic sonar.
  Created October 10th, 2014.
  Naoki Yokoyama
*/

#include "HCSR04.h"
#include "HCSR04.h"

HCSR04::HCSR04() {}

void HCSR04::assignPin(int TrigEchoPin) {
  trigEchoPin = TrigEchoPin;
}

int HCSR04::readVal(){
	// establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration;

  // The PING))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigEchoPin, OUTPUT);
  digitalWrite(trigEchoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigEchoPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigEchoPin, LOW);

  // The same pin is used to read the signal from the PING))): a HIGH
  // pulse whose duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(trigEchoPin, INPUT);
  duration = pulseIn(trigEchoPin, HIGH, 3480);
  delay(80);
  if(duration==0) 
    return 60;
  return duration / 29 / 2;
}