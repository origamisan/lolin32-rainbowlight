#include <Arduino.h>
#include <FastLED.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

#define NUM_LEDS 27
#define NUM_STRIPS 6
#define MARQUEE_LENGTH 38
#define FPS 5

#define DATA_PIN_1 D1
#define DATA_PIN_2 D2
#define DATA_PIN_3 D3
#define DATA_PIN_4 D4
#define DATA_PIN_5 D5
#define DATA_PIN_6 D6

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