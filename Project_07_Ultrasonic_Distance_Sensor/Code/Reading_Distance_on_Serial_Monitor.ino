void setup() {
  Serial.begin(9600);
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

  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println(" cm");
  
  delay(2500);
}
