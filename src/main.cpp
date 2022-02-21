#include <Arduino.h>
#define LED 13
int i = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  Serial.println("Blink");
  //i += 100;
  digitalWrite(LED, HIGH);
  delay(1000 - i);
  digitalWrite(LED, LOW);
  delay(1000 - i);
}