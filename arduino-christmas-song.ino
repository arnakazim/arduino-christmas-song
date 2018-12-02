#include "blink.h"
#include "music.h"

#include "songs/merry_christmas.h"
#include "songs/jingle_bell.h"

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
    delay(2000);
    playSong(jingleBellNotes, jingleBellDurations, sizeof(jingleBellNotes) / sizeof(int), jingleBellTempo, BUZZER_PIN, LED_PIN);

    delay(30000);
}

void playSong(int notes[], int durations[], int size, int tempo, int buzzerPin, int ledPin)
{

    int noteDuration = 60000 / tempo; // BPM duration in miliseconds
    int pause = tempo / 3;

    for (int note = 0; note < size; note++)
    {
        int duration = (noteDuration * 4 / durations[note]) - pause;

        digitalWrite(ledPin, HIGH);
        tone(buzzerPin, notes[note], duration);
        delay(duration);
        digitalWrite(ledPin, LOW);
        delay(pause);
    }
}
