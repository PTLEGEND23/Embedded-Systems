void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  int state=digitalRead(2);
  if(state==1)
  digitalWrite(13,HIGH);
  else
  digitalWrite(13,LOW);
}