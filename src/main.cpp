#include <Arduino.h>
#define LED 5
#define LED_MASK (1<<5)
int i = 0;

void led_setup(){
  DDRB |= LED_MASK; 
}

void setup() {
  Serial.begin(9600);
  //pinMode(LED, OUTPUT);
  led_setup();
}

void loop() {
  Serial.println("Blink");
  //i += 100;
  digitalWrite(LED, HIGH);
  delay(1000 - i);
  digitalWrite(LED, LOW);
  delay(1000 - i);
}