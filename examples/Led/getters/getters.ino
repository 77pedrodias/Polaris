/*
  Polaris Library - Get LED Status

  Demonstrates how to use getters to check the LED status
  and blink count using the Polaris library.

  The circuit:
  * LED connected to digital pin 13 (built-in LED on many boards)
  * No additional components required

  Example created June 2, 2025 by Pedro Dias.

  This example code is in the public domain.

  https://github.com/77pedrodias/Polaris
*/

#include <Polaris.h>

Led led(13);  // LED connected to pin 13

void setup() {
  led.begin();      // Initialize the LED
  led.startBlink(500);  // Start blinking every 500ms
}

void loop() {
  led.update();  // Update LED state for blinking

  bool isOn = led.isOn();                // Check if LED is on
  bool isBlinking = led.isBlinking();   // Check if LED is blinking
  int blinkCount = led.getBlinkCount(); // Get how many times LED has blinked

  // Use these variables for logic or debugging
}