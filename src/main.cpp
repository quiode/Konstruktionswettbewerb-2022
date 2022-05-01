#include <Arduino.h>
#include <AFMotor.h>

AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);

void maehdrescher(uint8_t speed = 255, uint8_t direction = FORWARD)
{
  motor1.setSpeed(speed);
  motor2.setSpeed(speed);

  motor1.run(direction);
  motor2.run(direction);
}

void drive(uint8_t speed = 255, uint8_t direction = FORWARD)
{
  motor3.setSpeed(speed);
  motor4.setSpeed(speed);

  motor3.run(direction);
  motor4.run(direction);
}

void setup()
{
  delay(1000);

  maehdrescher();

  drive();
}

void loop()
{
}
