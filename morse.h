/*
 * Play a morse code message on the buzzer
 * 
 * By Arnakazim (http://www.arnaudouvrier.fr)
 */

#define DOT_LENGTH          100
#define TONE_FREQUENCY      550

void morseCode(char message[], int size, int buzzerPin, int ledPin)
{
    for (int i = 0; i < size; i++)
    {
        int duration = 0;
        int pause = 0;
        switch (message[i])
        {
        case '.':
            duration = DOT_LENGTH;
            pause = DOT_LENGTH;
            break;
        case '-':
            duration = 3 * DOT_LENGTH;
            pause = DOT_LENGTH;
            break;
        case ' ':
            pause = 3 * DOT_LENGTH;
            break;
        case '/' :
            pause = DOT_LENGTH;
        default:
            duration = 0;
            pause = 0;
            break;
        }

        if (duration > 0 || pause > 0) {
            if (duration > 0) {
                tone(buzzerPin, TONE_FREQUENCY, duration);
            }
            digitalWrite(ledPin, HIGH);
            delay(duration);
            digitalWrite(ledPin, LOW);
            delay(pause);
        }
    }
}