#include<Servo.h>
Servo myServo;
int opengate=0;
int closegate=1;

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
  distance=duration*0.0343/2;

  if(distance<15)
  {
    if(opengate==0)
    {
      for(int i=0;i<=90;i++)
      {
        myServo.write(i);
        delay(15);
      }
      opengate=1;
      closegate=0;
    }
  }
  else
  {
    if(closegate!=1)
    {
      for(int i=90;i>=0;i--)
      {
        myServo.write(i);
        delay(15);
      }
    }
    opengate=0;
    closegate=1;
  }

  delay(1000);
}