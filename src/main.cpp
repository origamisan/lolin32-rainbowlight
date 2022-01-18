#include <Arduino.h>
#include <FastLED.h>
#include "constants.h"
#include "network_credentials.h"


// Define the array of leds
CRGB leds[NUM_STRIPS][NUM_LEDS];
void setup()
{
  FastLED.addLeds<WS2812B, DATA_PIN_1, GRB>(leds[0], NUM_LEDS); // GRB ordering is typical
  FastLED.addLeds<WS2812B, DATA_PIN_2, GRB>(leds[1], NUM_LEDS); // GRB ordering is typical
  FastLED.addLeds<WS2812B, DATA_PIN_3, GRB>(leds[2], NUM_LEDS); // GRB ordering is typical
  FastLED.addLeds<WS2812B, DATA_PIN_4, GRB>(leds[3], NUM_LEDS); // GRB ordering is typical
  FastLED.addLeds<WS2812B, DATA_PIN_5, GRB>(leds[4], NUM_LEDS); // GRB ordering is typical
  FastLED.addLeds<WS2812B, DATA_PIN_6, GRB>(leds[5], NUM_LEDS); // GRB ordering is typical
  FastLED.setBrightness(10);
}

void loop()
{
  fill_solid(leds[0],NUM_LEDS,CRGB(255,0,0));
  fill_solid(leds[1],NUM_LEDS,CRGB(255, 100, 22));
  fill_solid(leds[2],NUM_LEDS,CRGB(255, 255, 65));
  fill_solid(leds[3],NUM_LEDS,CRGB(0, 128, 24));
  fill_solid(leds[4],NUM_LEDS,CRGB(0, 0, 249));
  fill_solid(leds[5],NUM_LEDS,CRGB(134, 0, 125));
  FastLED.show();
}