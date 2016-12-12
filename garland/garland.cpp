#include <Arduino.h>

#include "FastLED.h"

#define NUM_LEDS 1
CRGB leds[NUM_LEDS];

void setup(void) {
    FastLED.addLeds<NEOPIXEL, 10>(leds, NUM_LEDS);
}

void loop(void) {

    for (int i = 0; i < 255; i++) {
        leds[0] = CHSV(i, 255, 128);
        FastLED.show();
        delay(10);
    }

}
