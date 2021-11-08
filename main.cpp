#include <Arduino.h>
#include "GPIO.h"

Gpio Led(7);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
   
   Led.Blink(250);
}