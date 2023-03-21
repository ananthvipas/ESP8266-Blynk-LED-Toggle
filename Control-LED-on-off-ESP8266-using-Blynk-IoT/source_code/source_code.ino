//This code developed by ananth_vipas
//  https://blynk.io/
//Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "replace Auth token";   // Enter your Blynk auth token here
char ssid[] = "WIFI NAME";                        // Enter your WiFi Name here
char pass[] = "WIFI_PASSWARD";                       // Enter your WiFi password here

int led1Pin = D1;       // Pin for LED bulb 1
int led2Pin = D2;       // Pin for LED bulb 2

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop()
{
  Blynk.run();
}

BLYNK_WRITE(V1) // Virtual pin for LED bulb 1
{
  int value = param.asInt();
  digitalWrite(led1Pin, value);
}

BLYNK_WRITE(V2) // Virtual pin for LED bulb 2
{
  int value = param.asInt();
  digitalWrite(led2Pin, value);
}
