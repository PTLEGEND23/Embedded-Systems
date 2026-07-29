#include<Servo.h>
Servo myServo;

void setup() {
  myServo.attach(9);
  myServo.write(0);
  pinMode(13,OUTPUT);
  pinMode(8,INPUT);
}

void loop() {
  long duration;
  float distance;

  digitalWrite(13,LOW);
  delayMicroseconds(2);
  digitalWrite(13,HIGH);
  delayMicroseconds(10);
  digitalWrite(13,LOW);

  duration=pulseIn(8,HIGH);
  distance=0.0343*duration/2;

  if(distance<8)
  myServo.write(90);
  else if(distance>12) 
  myServo.write(0);

  delay(2000);
}