/*
  Polaris Library - Turn LED Off

  Demonstrates how to turn off an LED using the Polaris library.

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
  led.begin();  // Initialize the LED
  led.off();    // Turn LED off
}

void loop() {
  // Nothing to do here
}