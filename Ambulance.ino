/*
http://188.166.206.43/385db1421517459ca6dc92390b87a715/update/D2?value=0  : Led On
http://188.166.206.43/385db1421517459ca6dc92390b87a715/update/D2?value=1  : Led Off
http://188.166.206.43/385db1421517459ca6dc92390b87a715/update/D13?value=1 : Fan On
http://188.166.206.43/385db1421517459ca6dc92390b87a715/update/D13?value=0 : Fan OFf
 */

#define BLYNK_PRINT Serial  
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include "DHT.h"
#define DHTPIN D2
#define DHTTYPE DHT11

char auth[] = "385db1421517459ca6dc92390b87a715";
char ssid[] = "Squad";
char pass[] = "12345678";

DHT dht(DHTPIN, DHTTYPE);
WidgetLCD lcd(V1);
int a,b;
void setup()
{
  Blynk.begin(auth, ssid, pass);
  dht.begin();
  pinMode(D4,INPUT);
  pinMode(D5,OUTPUT);
}

void loop()
{
  Blynk.run();
  b=digitalRead(D4);
  float t = dht.readTemperature();
  lcd.clear();
  lcd.print(0,0,"Temp:");
  lcd.print(5,0,t);
  delay(500);
  if(b==0)
  {
    digitalWrite(D5,0);
    lcd.clear();
    lcd.print(0,0,"WAY CLEAR");
    delay(1000);
  }
  else
  {
    digitalWrite(D5,1);
  }

}

