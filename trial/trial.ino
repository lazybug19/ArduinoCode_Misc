#include <TelegramBot.h>
#include <ArduinoJson.h>
#include <ESP8266WiFi.h> 
#include <WiFiClientSecure.h> 

const char* ssid = "oppoA54"; 
const char* password = "8249422424"; 
const char BotToken[] = "5300438669:AAFMiu1xCgrhBnGHuAYJFy0vR1a756rNiTI"; 
const char chat_id[] = "5467581701";

WiFiClientSecure net_ssl; 
TelegramBot bot (BotToken, net_ssl); 

void setup() {

  Serial.begin(115200);

  Serial.println("Waiting for WiFi connection");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }
  
  Serial.println("WiFi connected!");
  bot.begin();
}

void loop() {

    message M = bot.getUpdates();
    if (M.text.equals("/start"))
    {
      bot.sendMessage(M.chat_id, "hi"); 
      if ( M.text.equals("hi")) 
        {
          bot.sendMessage(M.chat_id, "hi again");
          delay(3000); 
        }
      else if ( M.text.equals("bye")) 
        {
          bot.sendMessage(M.chat_id, "bye");
          delay(3000); 
        }
    }
}
