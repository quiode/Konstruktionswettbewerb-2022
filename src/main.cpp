#include <Arduino.h>
#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void setup()
{
  // put your setup code here, to run once:
  motor1.setSpeed(100);
  motor2.setSpeed(100);

  motor1.run(RELEASE);
  motor2.run(RELEASE);
}

void loop()
{
  // put your main code here, to run repeatedly:
  uint8_t i;

  // Motor spinning clockwise
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  // Speed up
  for (i = 0; i < 255; i++)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  // Speed down
  for (i = 255; i != 0; i--)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  // Motor spinning anti-clockwise
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);

  // Speed up
  for (i = 0; i < 255; i++)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  // Speed down
  for (i = 255; i != 0; i--)
  {
    motor1.setSpeed(i);
    motor2.setSpeed(i);
    delay(10);
  }

  // Now turn off motor
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  delay(10000);
}