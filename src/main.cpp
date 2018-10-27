#include <Arduino.h>

int LED_SONOFF = 13;
int BLINK_DURATION = 1000;

void setup() {
    pinMode(LED_SONOFF, OUTPUT);
}

void loop() {
    digitalWrite(LED_SONOFF, LOW); // LOW will turn on the LED
    delay(BLINK_DURATION);
    digitalWrite(LED_SONOFF, HIGH); // HIGH will turn off the LED
    delay(BLINK_DURATION);
}