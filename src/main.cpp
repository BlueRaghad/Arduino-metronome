#include <Arduino.h>

int potinPin = A0;
int buzzPin = 8;

void setup() {
pinMode(buzzPin, OUTPUT);
}

void loop() {
  int potinValue = analogRead(potinPin);
  int bpm = map(potinValue, 0, 1023, 40, 200);
  int interval = 60000 / bpm;

  tone(buzzPin, 1000, 20);
  delay(interval);
}