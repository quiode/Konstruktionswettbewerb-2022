#pragma once
#include "Maehdrescher.h"
#include "UltrasonicSensor.h"
#include <AFMotor.h>

#define motor3Number 3
#define motor4Number 4

class Robot
{
public:
    Maehdrescher maehdrescher{};
    UltrasonicSensor ultrasonicSensor{};

private:
    AF_DCMotor motor3{motor3Number};
    AF_DCMotor motor4{motor4Number};

public:
    Robot(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number, uint8_t motor3Num = motor3Number, uint8_t motor4Num = motor4Number, int pingPin = pingPinNumber, int echoPin = echoPinNumber);

    void drive(uint8_t speed, uint8_t direction);

    void stop();

    void backward();

    void forward();

    void turnLeft();

    void turnRight();
};