#include <ESP8266WiFi.h>




#define WIFI_SSID "oppo"
#define WIFI_PASSWORD "rahulabc"

void setup() 
{
  SPI.begin();      
  Serial.println();
  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting...");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(200);
  }
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.println();
}
void loop()
{}



/*#include <WiFi101.h>
#include <SerialESP8266wifi.h>
#include <SPI.h>

#define WIFI_SSID "lazybug"
#define WIFI_PASSWORD "8249422424"

void setup() 
{
  SPI.begin();      
  Serial.begin(115200);
  Serial.println();
  Serial.print("Connecting...");
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(200);
  }
  Serial.println("");
  Serial.println("WiFi connected.");
}
void loop()
{}*/
