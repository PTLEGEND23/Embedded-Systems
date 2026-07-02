bool ledState = false;
int previousState = 1;
int currentState;

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop()
{
  currentState = digitalRead(2);
  if(previousState == 1 && currentState == 0)
  {
    ledState = !ledState;
  }
  if(ledState == true)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  previousState = currentState;
}