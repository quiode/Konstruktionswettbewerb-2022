#include "UltrasonicSensor.h"
#include <Arduino.h>

UltrasonicSensor::UltrasonicSensor(int pingPin = pingPinNumber, int echoPin = echoPinNumber) : pingPin{pingPin}, echoPin{echoPin} {};

long UltrasonicSensor::getDistance()
{
    // var definitions
    long duration, cm;

    // send 10us pulse to trigger
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(pingPin, LOW);
    pinMode(echoPin, INPUT);
    duration = pulseIn(echoPin, HIGH);

    // convert the time into a distance
    return microsecondsToCentimeters(duration);
}

long UltrasonicSensor::microsecondsToCentimeters(long microseconds)
{
    return microseconds / 29 / 2;
}