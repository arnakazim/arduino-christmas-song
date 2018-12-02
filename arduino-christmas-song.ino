#include "blink.h"
#include "pitches.h"
#include "merry_christmas.h"

#define BUZZER_PIN  12
#define LED_PIN     13 // Built-in led

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);


  blink(LED_PIN, 1000, 500);
  blink(LED_PIN, 500, 0);
}

void loop()
{
  
}
