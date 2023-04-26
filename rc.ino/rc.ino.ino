#include <SoftwareSerial.h>

float lastReading = 0;
void loop() {
    while ((analogRead(A5)*5/1024. - lastReading) < 0.1) {
      // do nothing
    }
    for (int i = 0; i < 480; i++) {
      float currentReading = analogRead(A5)*5/1024.;
      Serial.println(currentReading);
    }
    while (1) {
      // do nothing
    }
}
