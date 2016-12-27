#include <Arduino.h>

#include "FastLED.h"

#define NUM_LEDS 46
#define MAX_VALUE 252

struct Star {
    CHSV color = CHSV(0, 255, 0);
    bool growing = true;
};

Star stars[NUM_LEDS];
CRGB leds[NUM_LEDS];

void setup(void) {

    for (uint8_t i = 0; i < NUM_LEDS; i++) {
        stars[i].color.hue = random8();
        stars[i].color.value = random8(MAX_VALUE);
        stars[i].growing = random8() > 128;
    }

    FastLED.addLeds<NEOPIXEL, 10>(leds, NUM_LEDS);
}

void loop(void) {

    for (uint8_t i = 0; i < NUM_LEDS; i++) {

        Star &star = stars[i];
        CHSV &color = star.color;

        color.value += star.growing ? 3 : -1;

        if (color.value > MAX_VALUE) {
            star.growing = false;
        }

        if (color.value == 0) {
            star.growing = true;
            color.hue = random8();
        }

        leds[i] = color;

    }

    FastLED.show();
    delay(30);

}
