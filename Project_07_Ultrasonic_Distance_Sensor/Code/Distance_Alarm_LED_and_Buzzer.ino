ivoid setup() {
  pinMode(13,OUTPUT);//trig
  pinMode(8,INPUT);//echo
  pinMode(11,OUTPUT);//led
  pinMode(2,OUTPUT);//buzzer
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

  if(distance<10.0)
  {
    digitalWrite(11,HIGH);
    digitalWrite(2,LOW);
  }
  else
  {
    digitalWrite(11,LOW);
    digitalWrite(2,HIGH);
  }
  
  delay(50);
}