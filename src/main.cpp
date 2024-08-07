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
  // Turns on/off LED
  if (digitalRead(BUTTON) == HIGH) (on) ? turnOff() : turnOn();
  delay(500);
}

// Turns on LED
void turnOn(){
  digitalWrite(LED, HIGH);
  on = true;
}

// Turns off LED
void turnOff(){
  digitalWrite(LED, LOW);
  on = false;
}