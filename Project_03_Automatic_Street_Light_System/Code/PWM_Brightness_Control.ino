void setup() {
  pinMode(11,OUTPUT);
}

void loop() {
  int value=analogRead(A0);
  if(value<500)
  analogWrite(11,0);
  else if(value<750)
  analogWrite(11,16);
  else
  analogWrite(11,255);
}