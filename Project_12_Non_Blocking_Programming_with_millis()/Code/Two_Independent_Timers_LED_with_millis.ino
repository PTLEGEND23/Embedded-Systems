#define LED1 13
#define LED2 12

unsigned long previousTime1=0;
unsigned long previousTime2=0;

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

void loop(){
  unsigned long currentTime=millis();

  if(currentTime-previousTime1>=1000)
  {
    previousTime1=currentTime;
    digitalWrite(LED1,!digitalRead(LED1));
  }
  if(currentTime-previousTime2>=300)
  {
    previousTime2=currentTime;
    digitalWrite(LED2,!digitalRead(LED2));
  }
}