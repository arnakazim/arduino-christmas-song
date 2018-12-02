/*
	arduino-christmas-song

	Play some Christmas songs on an Arduino. Made for the 2018 NODE's Secret Santa project (https://n-o-d-e.net)

	The circuit:
	* Pin 13: Built-in led
	* Pin 12: Buzzer

	Created 21/11/2018
	By Arnakazim

	https://github.com/arnakazim/arduino-christmas-song/

*/

#include "blink.h"
#include "music.h"
#include "morse.h"

#include "songs/merry_christmas.h"
#include "songs/jingle_bell.h"

#define BUZZER_PIN 12
#define LED_PIN 13 // Built-in led

char morseMessage[] = "-.-.- / -- . .-. .-. -.-- / -.-. .... .-. .. ... - -- .- ... / .- -. -.. / .... .- .--. .--. -.-- / -. . .-- / -.-- . .- .-. / .-.-.";

void setup()
{
    // Setting up the outputs
    pinMode(LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    // Just to know that the Arduino is ready
    blink(LED_PIN, 500, 250);
    blink(LED_PIN, 250, 0);
}

void loop()
{
    // Playing We Wish You A Merry Christmas
    playSong(merryChristmasNotes, merryChristmasDurations, sizeof(merryChristmasNotes) / sizeof(int), merryChristmasTempo, BUZZER_PIN, LED_PIN);
    delay(2000);

    // Playing Jingle Bell
    playSong(jingleBellNotes, jingleBellDurations, sizeof(jingleBellNotes) / sizeof(int), jingleBellTempo, BUZZER_PIN, LED_PIN);
    delay(5000);

    // Play morse message
    morseCode(morseMessage, sizeof(morseMessage) / sizeof(char), BUZZER_PIN, LED_PIN);

    // Prevent looping again
    while(true){}
}
