#include <Arduino.h>
#include <AFMotor.h>

class Maehdrescher
{
public:
  static const uint8_t motor1Number = 1;
  static const uint8_t motor2Number = 2;

private:
  AF_DCMotor motor1{motor1Number};
  AF_DCMotor motor2{motor2Number};

public:
  Maehdrescher(uint8_t motor1Num = motor1Number, uint8_t motor2Num = motor2Number) : motor1{motor1Num}, motor2{motor2Num}
  {
  }

  void setMotors(uint8_t speed, uint8_t direction)
  {
    motor1.setSpeed(speed);
    motor2.setSpeed(speed);

    motor1.run(direction);
    motor2.run(direction);
  }

  void start()
  {
    setMotors(255, FORWARD);
  }

  void stop()
  {
    setMotors(0, BRAKE);
  }

  void backward()
  {
    setMotors(255, BACKWARD);
  }
};

class Robot
{
public:
  static const uint8_t motor3Number = 3;
  static const uint8_t motor4Number = 4;

  Maehdrescher maehdrescher{};

private:
  AF_DCMotor motor3{motor3Number};
  AF_DCMotor motor4{motor4Number};

public:
  Robot(uint8_t motor1Num = Maehdrescher::motor1Number, uint8_t motor2Num = Maehdrescher::motor2Number, uint8_t motor3Num = motor3Number, uint8_t motor4Num = motor4Number) : maehdrescher{motor1Num, motor2Num}, motor3{motor3Num}, motor4{motor4Num}
  {
  }

  void drive(uint8_t speed, uint8_t direction)
  {
    motor3.setSpeed(speed);
    motor4.setSpeed(speed);

    motor3.run(direction);
    motor4.run(direction);
  }

  void stop()
  {
    drive(0, BRAKE);
  }

  void backward()
  {
    drive(255, BACKWARD);
  }

  void forward()
  {
    drive(255, FORWARD);
  }
};

void setup()
{
  delay(1000);

  Robot robot;

  robot.forward();

  robot.maehdrescher.start();
}

void loop()
{
}
