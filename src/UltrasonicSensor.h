#pragma once
#include <Arduino.h>

#define pingPinNumber 7
#define echoPinNumber 8

class UltrasonicSensor
{
    const int pingPin{};
    const int echoPin{};

public:
    UltrasonicSensor(int pingPin = pingPinNumber, int echoPin = echoPinNumber);

    long getDistance();

private:
    long microsecondsToCentimeters(long microseconds);
};