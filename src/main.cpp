#include "Robot.h"

#include <Arduino.h>
#include <AFMotor.h>

Robot robot;

void setup()
{
  delay(5000);

  robot.forward();

  robot.maehdrescher.forward();
}

void loop()
{
}
