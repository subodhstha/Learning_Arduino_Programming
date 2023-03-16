// #define POTPIN A3  // Change it to the pin you are connecting to (It must be a pin with PWM enabled)
// #define LEDPIN 3
#include <Servo.h>

Servo myservo;

void setup() {
  // pinMode(POTPIN, INPUT);
  // pinMode(LEDPIN, OUTPUT);
  myservo.attach(9);
}


void loop() {
  // int val = analogRead(POTPIN);
  // int ledval = map(val, 0, 1023, 0, 255);
  // analogWrite(LEDPIN, ledval);
  myservo.write(180);
}
