#define LED 13

unsigned long previousTime = 0;

void setup()
{
  pinMode(LED, OUTPUT);
}

void loop()
{
  unsigned long currentTime = millis();

  if(currentTime - previousTime >= 1000)
  {
    previousTime = currentTime;

    digitalWrite(LED, !digitalRead(LED));
  }
}