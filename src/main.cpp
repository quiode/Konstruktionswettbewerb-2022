#include "Robot.h"

#include <Arduino.h>
#include <AFMotor.h>

Robot robot;

void setup()
{
  robot.forward();

  robot.maehdrescher.forward();
}

void loop()
{
  // ! NOT WORKING !
  // const long distance = robot.ultrasonicSensor.getDistance();

  // robot.forward();
  // robot.maehdrescher.forward();

  // if (distance < 10)
  // {
  //   robot.maehdrescher.stop();
  // }
  // if (distance < 48)
  // {
  //   robot.turnLeft();
  // }

  // delay(1000);
}