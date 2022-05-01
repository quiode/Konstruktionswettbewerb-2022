#include "Robot.h"

#include <Arduino.h>
#include <AFMotor.h>

Robot robot;

unsigned long count = 0;

void setup()
{
  delay(7000);

  robot.forward();

  robot.maehdrescher.forward();
}

void loop()
{
  count++;
  const long distance = robot.ultrasonicSensor.getDistance();

  robot.forward();
  robot.maehdrescher.forward();

  // if (distance < 10)
  // {
  //   robot.maehdrescher.stop();
  // }
  // if (distance < 25)
  // {
  //   robot.turnLeft();
  // }
  if (count % 10 == 0)
  {
    robot.turnLeft();
  }

  delay(100);
}