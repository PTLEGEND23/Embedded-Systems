void setup()
{
  pinMode(13,OUTPUT);
}

void loop()
{
  int value = analogRead(A0);
  if(value > 500)
  {
    digitalWrite(13,HIGH);
  }
  else
  {
    digitalWrite(13,LOW);
  }
}