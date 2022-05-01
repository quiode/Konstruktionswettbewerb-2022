#include "Maehdrescher.h"
#include "Robot.h"

#include <Arduino.h>
#include <AFMotor.h>

void setup()
{
  delay(1000);

  Robot robot;

  robot.forward();

  robot.maehdrescher.start();
}

void loop()
{
}
