int potPin = A5;
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
  servoAngle = map(potVal, 0, 1023, 180, 0);
  // servoAngle = ((-0.175953) * potVal) + 180; 
  myservo.write(servoAngle);
}
