#include <Arduino.h>

#define LED 2 // Pin where LED is connected

void setup() {
    pinMode(LED, OUTPUT); // Set LED pin as output
}

void loop() {
    digitalWrite(LED, HIGH); // Turn LED on
    delay(500);              // Wait for half a second
    digitalWrite(LED, LOW);  // Turn LED off
    delay(500);              // Wait for half a second
}
