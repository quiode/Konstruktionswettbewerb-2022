#include <Arduino.h>
#include <AFMotor.h>

AF_DCMotor motor1(3);
AF_DCMotor motor2(4);

void setup()
{
  delay(1000);

  // put your setup code here, to run once:
  motor1.setSpeed(255);
  motor2.setSpeed(255);

  motor1.run(FORWARD);
  motor2.run(FORWARD);
}

void loop()
{
}