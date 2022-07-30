#include <Arduino.h>

// testovaci projekt, na kterem se ucim pracovat s platform IO a git hubem
// rozblika vestavenou diodu na Arduino Nano 168
// a soucasne aktivuje seriovy monitor a bude vypisovat stav LED

#define  LED  13            // vestavena LED

void setup() {
  pinMode(LED,OUTPUT);
  digitalWrite(LED,LOW);
  Serial.begin(9600);
}

void loop() {
  delay(800);              // blikani LED stale dokola
  digitalWrite(LED,HIGH);
  Serial.println("stav LED: ON");
  delay(800);
  digitalWrite(LED,LOW);
  Serial.println("stav LED: OFF");
}