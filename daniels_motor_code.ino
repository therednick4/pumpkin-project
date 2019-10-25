#include <Servo.h>
Servo myServo;
int const potPin = A0;
int potVal;
int angle;
int maxAngle = 120;
int minAngle = 180 - maxAngle;

void setup() {
myServo.attach(9);
angle = 90;
Serial.begin(9600);
}

void loop() {
  angle = angle + random(int(0, 30));
  angle = angle - random(int(0, 30));
  myServo.write(angle);
  if (angle > maxAngle) {
  angle = 90;
  } if (angle < minAngle) {
  angle = 90;
  }
  delay(random(int(300, 500)));
  Serial.println("Angle: ");
  Serial.println(angle);
}
