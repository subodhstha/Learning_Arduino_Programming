#include<Servo.h>
int trig = 9;
int echo = 8;
int motor = 13;

Servo Servo1;

float time_taken, distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  // pinMode(motor, OUTPUT);
  Servo1.attach(motor);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig,HIGH);
  delay(500);
  digitalWrite(trig,LOW);
  time_taken = pulseIn(echo, HIGH);
  distance = 0.017 * time_taken;
  Serial.println(distance);
  if (distance < 10)
  {
    Servo1.write(180);
  }
  else
    Servo1.write(0);
}
