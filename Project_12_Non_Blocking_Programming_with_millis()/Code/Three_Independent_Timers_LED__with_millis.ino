#define LED1 13
#define LED2 12
#define LED3 11

unsigned long previousTime1=0;
unsigned long previousTime2=0;
unsigned long previousTime3=0;

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop(){
  unsigned long currentTime=millis();

  if(currentTime-previousTime1>=1000)
  {
    previousTime1=currentTime;
    digitalWrite(LED1,!digitalRead(LED1));
  }
  if(currentTime-previousTime2>=500)
  {
    previousTime2=currentTime;
    digitalWrite(LED2,!digitalRead(LED2));
  }
  if(currentTime-previousTime3>=200)
  {
    previousTime3=currentTime;
    digitalWrite(LED3,!digitalRead(LED3));
  }
}