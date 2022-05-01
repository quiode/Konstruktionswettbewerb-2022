#pragma once
#include <AFMotor.h>

#define motor1Number 1
#define motor2Number 2

class Maehdrescher
{
private:
    AF_DCMotor motor1{motor1Number};
    AF_DCMotor motor2{motor2Number};

public:
    Maehdrescher(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number);

    void setMotors(uint8_t speed, uint8_t direction);

    void start();

    void stop();

    void backward();
};