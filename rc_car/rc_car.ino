#include<AFMotor.h>
char cm;
char s;
AF_DCMotor m1(1), m2(2), m3(3), m4(4);
char cm;
void setup()
{
  Serial.begin(9600);
}

void front(int speed)
{
  setSpeed(speed);
  m1.run(FORWARD);
  m2.run(FORWARD);
  m3.run(BACKWARD);
  m4.run(FORWARD);
}

void left(int speed)
{
  setSpeed(speed);
  m2.run(FORWARD);
  m1.run(FORWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void right(int speed)
{
  setSpeed(speed);
  m1.run(BACKWARD);
  m2.run(BACKWARD);
  m3.run(BACKWARD);
  m4.run(FORWARD);
}

void frontRight(int speed)
{
  setSpeed(speed);
  m1.run(FORWARD);
  m2.run(FORWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void frontLeft(int speed)
{
  setSpeed(speed);
  m1.run(BACKWARD);
  m2.run(BACKWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void backRight(int speed)
{
  setSpeed(speed);
  m1.run(FORWARD);
  m2.run(FORWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void backLeft(int speed)
{
  setSpeed(speed);
  m1.run(BACKWARD);
  m2.run(BACKWARD);
  m3.run(BACKWARD);
  m4.run(FORWARD);
}
void back(int speed)
{
  setSpeed(speed);
  m1.run(BACKWARD);
  m2.run(BACKWARD);
  m3.run(FORWARD);
  m4.run(BACKWARD);
}

void stop()
{
  m1.run(RELEASE);
  m2.run(RELEASE);
  m3.run(RELEASE);
  m4.run(RELEASE);
}

void setSpeed(int speed)
{
  m1.setSpeed(speed);
  m2.setSpeed(speed);
  m3.setSpeed(speed);
  m4.setSpeed(speed);
}


void loop()
{
  if (Serial.available())
  {
    cm = Serial.read()
    println()
    switch(cm)
    {
      case cm == 'S'
      stop();
      break;
      

    }
  }
}