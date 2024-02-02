﻿/*
  RR_Freenove4WDCar_Battery.cpp - Library for Arduino Battery.
  Created by Roman Rainov, Janaury 29, 2024.
  Released into the private domain.
*/

#include "Arduino.h"
#include "RR_Freenove4WDCar_Battery.h"

RRFreenove4WDCarBattery::RRFreenove4WDCarBattery()
{
}

RRFreenove4WDCarBattery::RRFreenove4WDCarBattery(byte pinBattery)
{
	_pinBattery = pinBattery;
}

float RRFreenove4WDCarBattery::getBatteryVoltage()
{
	pinMode(_pinBattery, INPUT);
	int batteryADC = analogRead(_pinBattery);
	float batteryVoltage = batteryADC / 1023.0 * 5.0 * 4; //V=ADCvalue/1023*5V. 
	return batteryVoltage;
}