#include "Robot.h"

#include "UltrasonicSensor.h"
#include "Maehdrescher.h"
#include "AFMotor.h"

Robot::Robot(uint8_t motor1Num = motorNumber, uint8_t motorRightNum = motorRightNumber, uint8_t motorLeftNum = motorLeftNumber, int pingPin = pingPinNumber, int echoPin = echoPinNumber) : maehdrescher{motor1Num}, motorRight{motorRightNum}, motorLeft{motorLeftNum}, ultrasonicSensor{pingPin, echoPin}
{
    stop();
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
    if (direction != Robot::Direction::isStop)
    {
        direction = Robot::Direction::isStop;
        drive(0, RELEASE);
    }
}

void Robot::backward()
{
    if (direction != Robot::Direction::isBackward)
    {
        direction = Robot::Direction::isBackward;
        drive(255, BACKWARD);
    }
}

void Robot::forward()
{
    if (direction != Robot::Direction::isForward)
    {
        direction = Robot::Direction::isForward;
        drive(255, FORWARD);
    }
}

void Robot::turnLeft()
{
    // ! Not working
    if (direction != Robot::Direction::isLeft)
    {
        direction = Robot::Direction::isLeft;
        motorRight.setSpeed(235);
        motorLeft.setSpeed(255);

        motorRight.run(FORWARD);
        motorLeft.run(FORWARD);
    }
}

void Robot::turnRight()
{
    // ! Not working
    if (direction != Robot::Direction::isRight)
    {
        direction = Robot::Direction::isRight;
        motorRight.setSpeed(255);
        motorLeft.setSpeed(235);

        motorRight.run(FORWARD);
        motorLeft.run(FORWARD);
    }
}