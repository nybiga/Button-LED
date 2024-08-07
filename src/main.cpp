#include <Arduino.h>

#define LED 3
#define BUTTON 2

bool on = false;

void turnOn();
void turnOff();

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  if (digitalRead(BUTTON) == HIGH) (on) ? turnOff() : turnOn();
  delay(500);
}

void turnOn(){
  digitalWrite(LED, HIGH);
  on = true;
}

void turnOff(){
  digitalWrite(LED, LOW);
  on = false;
}