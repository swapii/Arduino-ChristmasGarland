#include <Arduino.h>

#include "FastLED.h"

#define NUM_LEDS 1

struct Star {
    CHSV color = CHSV(0, 255, 0);
    bool growing = true;
};

Star stars[NUM_LEDS];
CRGB leds[NUM_LEDS];

void setup(void) {
    stars[0] = Star();
    FastLED.addLeds<NEOPIXEL, 10>(leds, NUM_LEDS);
}

void loop(void) {

    int i = 0;

    Star &star = stars[i];
    CHSV &color = star.color;

    color.value += star.growing ? 3 : -1;

    if (color.value > 100) {
        star.growing = false;
    }

    if (color.value == 0) {
        star.growing = true;
        color.hue = random8(255);
    }

    leds[i] = color;

    FastLED.show();
    delay(30);

}
