void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  int state=digitalRead(2);
  Serial.println(state);
  if(state==0)
  {
    digitalWrite(13,HIGH);//LED ON
    digitalWrite(8,LOW);//BUZZER ON
  }
  else
  {
    digitalWrite(13,LOW);//LED OFF
    digitalWrite(8,HIGH);//BUZZER OFF
  }
  delay(500);
}