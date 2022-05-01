#include "Maehdrescher.h"
#include <AFMotor.h>

Maehdrescher::Maehdrescher(uint8_t motor1Num = motorNumber) : motor{motor1Num}
{
}

void Maehdrescher::setMotors(uint8_t speed, uint8_t direction)
{
    motor.setSpeed(speed);

    motor.run(direction);
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