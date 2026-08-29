#define LED1 13
#define LED2 12

unsigned long previousTime1=0;
unsigned long previousTime2=0;
unsigned long previousTime3=0;

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    while(1);
  }
}

int i=1;

void loop(){
  unsigned long currentTime=millis();

  if(currentTime-previousTime1>=500)
  {
    previousTime1=currentTime;
    digitalWrite(LED1,!digitalRead(LED1));
  }
  
  if(currentTime-previousTime2>=1500)
  {
    previousTime2=currentTime;
    digitalWrite(LED2,!digitalRead(LED2));
  }

  if(currentTime-previousTime3>=1000)
  {
    previousTime3=currentTime;
    display.clearDisplay();
    display.setTextColor(SSD1306_WHITE);
    display.setTextSize(1);
    display.setCursor(0, 0);
    display.println("Time Elapsed");
    display.setTextSize(2);
    display.setCursor(0, 20);
    display.println(i);
    display.setTextSize(2);
    display.setCursor(30, 20);
    display.println("s");
    display.display();
    i++;
  }
}