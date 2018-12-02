void blink(int pin, int msOn, int msOff = -1)
{
    if (msOff == -1)
    {
        msOff = msOn;
    }
    digitalWrite(pin, HIGH);
    delay(msOn);
    digitalWrite(pin, LOW);
    delay(msOff);
}