#include "Maehdrescher.h"
#include <AFMotor.h>

Maehdrescher::Maehdrescher(uint8_t motor1Num = motorNumber) : motor{motor1Num}
{
    stop();
}

void Maehdrescher::setMotors(uint8_t speed, uint8_t direction)
{
    motor.setSpeed(speed);

    motor.run(direction);
}

void Maehdrescher::forward()
{
    if (isForward)
    {
        return;
    }
    setMotors(255, BACKWARD);
    isForward = true;
}

void Maehdrescher::stop()
{
    setMotors(0, RELEASE);
    isForward = false;
}

void Maehdrescher::backward()
{
    setMotors(255, FORWARD);
    isForward = false;
}