#include <Arduino.h>

#include "FastLED.h"

#define NUM_LEDS 1
CRGB leds[NUM_LEDS];

void setup(void) {
    FastLED.addLeds<NEOPIXEL, 10>(leds, NUM_LEDS);
}

void loop(void) {

    leds[0] = CRGB::Red;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Green;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Blue;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Yellow;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Cyan;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Gold;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

    leds[0] = CRGB::Purple;
    FastLED.show();
    delay(1000);

    leds[0] = CRGB::Black;
    FastLED.show();
    delay(300);

}
