#include "Maehdrescher.h"
#include <AFMotor.h>

Maehdrescher::Maehdrescher(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number) : motor1{motor1Num}, motor2{motor2Num}
{
}

void Maehdrescher::setMotors(uint8_t speed, uint8_t direction)
{
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);

    motor1.run(direction);
    motor2.run(direction);
}

void Maehdrescher::forward()
{
    setMotors(255, BACKWARD);
}

void Maehdrescher::stop()
{
    setMotors(0, BRAKE);
}

void Maehdrescher::backward()
{
    setMotors(255, FORWARD);
}