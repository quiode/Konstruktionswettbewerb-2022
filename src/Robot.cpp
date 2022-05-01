#include "Robot.h"

#include "Maehdrescher.h"
#include "AFMotor.h"

Robot::Robot(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number, uint8_t motor3Num = motor3Number, uint8_t motor4Num = motor4Number) : maehdrescher{motor1Num, motor2Num}, motor3{motor3Num}, motor4{motor4Num}
{
}

void Robot::drive(uint8_t speed, uint8_t direction)
{
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);

    motor3.run(direction);
    motor4.run(direction);
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