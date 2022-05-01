#pragma once
#include <AFMotor.h>

#define motorNumber 2

class Maehdrescher
{
private:
    AF_DCMotor motor{motorNumber};

public:
    Maehdrescher(uint8_t motorNum = motorNumber);

    void setMotors(uint8_t speed, uint8_t direction);

    void forward();

    void stop();

    void backward();
};