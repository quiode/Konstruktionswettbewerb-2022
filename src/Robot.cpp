#include "Robot.h"

#include "UltrasonicSensor.h"
#include "Maehdrescher.h"
#include "AFMotor.h"

Robot::Robot(uint8_t motor1Num = motorNumber, uint8_t motorRightNum = motorRightNumber, uint8_t motorLeftNum = motorLeftNumber, int pingPin = pingPinNumber, int echoPin = echoPinNumber) : maehdrescher{motor1Num}, motorRight{motorRightNum}, motorLeft{motorLeftNum}, ultrasonicSensor{pingPin, echoPin}
{
}

void Robot::drive(uint8_t speed, uint8_t direction)
{
    motorRight.setSpeed(speed);
    motorLeft.setSpeed(speed);

    motorRight.run(direction);
    motorLeft.run(direction);
}

void Robot::stop()
{
    drive(0, BRAKE);
}

void Robot::backward()
{
    drive(255, BACKWARD);
}

void Robot::forward()
{
    drive(255, FORWARD);
}

void Robot::turnLeft()
{
    motorRight.setSpeed(255);
    motorLeft.setSpeed(255);

    motorRight.run(FORWARD);
    motorLeft.run(BACKWARD);
}

void Robot::turnRight()
{
    motorRight.setSpeed(255);
    motorLeft.setSpeed(255);

    motorRight.run(BACKWARD);
    motorLeft.run(FORWARD);
}