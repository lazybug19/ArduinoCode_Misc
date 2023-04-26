#include <SoftwareSerial.h>
SoftwareSerial bt(1, 0); // RX, TX

void setup() {
  
  Serial.begin(9600);
  bt.begin(9600);  
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
  
  if (bt.available())
    Serial.write(bt.read());
    delay(3000);
  if (Serial.available())
    bt.write(Serial.read());
    delay(3000);

}
