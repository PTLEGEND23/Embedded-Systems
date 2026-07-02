int mode=0;
int previousState=1;
int currentState;

void setup()
{
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}
void loop()
{
  currentState=digitalRead(2);
  if(previousState == 1 && currentState == 0)
  {
    mode++;
    mode=mode%3;
    delay(50);
  }
  if(mode==0)
    {
      digitalWrite(13,LOW);
    }
    else if(mode==1)
    {
    digitalWrite(13,HIGH);
    }
    else
    {
      digitalWrite(13,HIGH);
      delay(100);
      digitalWrite(13,LOW);
      delay(100);
    }
  previousState=currentState;
}