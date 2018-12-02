#include "blink.h"
#include "pitches.h"
#include "merry_christmas.h"

#define BUZZER_PIN 12
#define LED_PIN 13 // Built-in led

void playSong(int notes[], int durations[], int size, int tempo, int buzzerPin, int ledPin);

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    blink(LED_PIN, 500, 250);
    blink(LED_PIN, 250, 0);
}

void loop()
{
    playSong(merryChristmasNotes, merryChristmasDurations, sizeof(merryChristmasNotes) / sizeof(int), merryChristmasTempo, BUZZER_PIN, LED_PIN);

    delay(60000);
}

void playSong(int notes[], int durations[], int size, int tempo, int buzzerPin, int ledPin)
{

    int noteDuration = 60000 / tempo; // BPM duration in miliseconds

    for (int note = 0; note < size; note++)
    {
        // nt duration = noteDuration / 4 * merryChristmasDurations[note];
        int duration = 1000 / durations[note];
        int pause = 1.3 * duration;

        // int totalDuration = durations[note] / 4 * noteDuration;
        // int duration = 0.43 * totalDuration;
        // int pause = totalDuration - duration;

        digitalWrite(ledPin, HIGH);
        tone(buzzerPin, notes[note], duration);
        digitalWrite(ledPin, LOW);
        delay(pause);
    }
}
