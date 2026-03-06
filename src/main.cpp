#include <Arduino.h>

int potinPin = A0;
int buzzPin = 8;

void setup() {
pinMode(buzzPin, OUTPUT);
}

void loop() {
  int potinValue = analogRead(potinPin); // this is to read the potintiometer value 
  int bpm = map(potinValue, 0, 1023, 40, 200); //here maping the the potintiometer values as a bpm
  int interval = 60000 / bpm; //the time between each beat :) 

  tone(buzzPin, 1000, 20); //1000 is the frequency, 20 is the duration 
  delay(interval);
}