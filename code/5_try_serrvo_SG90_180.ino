#include <Servo.h>

Servo myServo;
int d = 1000;

void setup() {
  myServo.attach(9);
}

void loop() {
  myServo.write(0);
  delay(d);

  myServo.write(90);
  delay(d);

  myServo.write(180);
  delay(d);
}
