#include <SoftwareSerial.h>
SoftwareSerial bt(1, 0); // RX, TX

void setup() {
  
  Serial.begin(115200);
  bt.begin(115200);  
  Serial.println("Connecting");
  while(!bt.available())
  {
    Serial.println(".");
    delay(3000);
  }
  Serial.println();
  Serial.print("Connected!");
}

void loop() {
  
  //if (bt.available())
    //Serial.write(bt.read());
  if (Serial.available())
    bt.write(Serial.read());
    delay(3000);

}
