int potPin = A7;
int servoPin = 7;
int potVal;
float servoAngle;

#include <Servo.h>

Servo myservo;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  Serial.begin(9600);
  myservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.println(potVal);
  servoAngle = ((-120./340.) * potVal) + 180;
  myservo.write(servoAngle);
}
