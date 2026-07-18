void setup() {
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  int state=digitalRead(2);
  if(state==1)
  {
  digitalWrite(13,HIGH);
  digitalWrite(8,LOW);
  }
  else
  {
  digitalWrite(13,LOW);
  digitalWrite(8,HIGH);
  }
}