#include<DHT.h>
#define DHTPIN 2
#define DHTTYPE DHT11

DHT dht(DHTPIN,DHTTYPE);

void setup()
{
  Serial.begin(9600);
  dht.begin();
}

void loop()
{
  float temp=dht.readTemperature();
  float hum=dht.readHumidity();

  Serial.print("Temparature: ");
  Serial.print(temp);
  Serial.println("°C");
  
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.println("%");
  Serial.println();

  delay(2000);

}