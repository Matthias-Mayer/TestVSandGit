#include <Arduino.h>

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Dies ist ein Test vo platform IO");
  delay(2000);
}

// end comment