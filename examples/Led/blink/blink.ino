/*
  Polaris Library - Simple LED Blink

  Demonstrates basic control of an LED using the Polaris library.
  Shows how to turn the LED on and off, and how to blink it
  using the update() method without delay().

  The circuit:
  * LED connected to digital pin 13 (built-in LED on many boards)
  * No additional components required

  Library originally created for simplifying hardware control.
  Example created June 2, 2025 by Pedro Dias.

  This example code is in the public domain.

  https://github.com/77pedrodias/Polaris
*/

#include <Polaris.h>

Led led(13);  // LED connected to pin 13

void setup() {
  led.begin();           // Initialize the LED
  led.startBlink(500);   // Start blinking every 500 milliseconds
}

void loop() {
  led.update();  // Update LED state to handle blinking
}