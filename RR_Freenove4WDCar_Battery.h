/*
  RR_Freenove4WDCar_Battery.h - Library for Arduino Battery.
  Created by Roman Rainov, Janaury 29, 2024.
  Released into the private domain.
*/
#ifndef RR_Freenove4WDCar_Battery_h
#define RR_Freenove4WDCar_Battery_h

#include "Arduino.h"

class RRFreenove4WDCarBattery
{
private:
	byte _pinBattery = A0;

public:
	RRFreenove4WDCarBattery();
	RRFreenove4WDCarBattery(byte pinBattery);
	float getBatteryVoltage();
};

#endif