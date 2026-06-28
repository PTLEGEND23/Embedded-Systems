void setup()
{
  pinMode(2, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  int state = digitalRead(2);

  Serial.println(state);

  delay(100);
}
