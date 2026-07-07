#include<DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
  pinMode(13,OUTPUT);
}

void loop()
{
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();

  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("°C");
  
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println("%");
  Serial.println();

  if(temp>=34.5)
  digitalWrite(13,HIGH);
  else
  digitalWrite(13,LOW);
  delay(5000);

}