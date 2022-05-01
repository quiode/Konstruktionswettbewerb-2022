#pragma once
#include "Maehdrescher.h"
#include "UltrasonicSensor.h"
#include <AFMotor.h>

#define motorRightNumber 3
#define motorLeftNumber 4

class Robot
{
public:
    Maehdrescher maehdrescher{};
    UltrasonicSensor ultrasonicSensor{};

private:
    AF_DCMotor motorRight{motorRightNumber};
    AF_DCMotor motorLeft{motorLeftNumber};

public:
    Robot(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number, uint8_t motor3Num = motorRightNumber, uint8_t motor4Num = motorLeftNumber, int pingPin = pingPinNumber, int echoPin = echoPinNumber);

    void drive(uint8_t speed, uint8_t direction);

    void stop();

    void backward();

    void forward();

    void turnLeft();

    void turnRight();
};