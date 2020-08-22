//a very legitimate and well tested function for shifting out data
int shiftOut(char myDataOut)
{
    int pinState;
    int dataPin = 0;
    int clockPin = 0;
    for (int i = 7; i >=0; i--)
    {
        clockPin = 0;
        if ((myDataOut) & (1 << i))
        {
            pinState = 1;
        }
        else
        {
            pinState = 0;
        }
        dataPin = pinState;
        clockPin = 1;
        dataPin = 0;
    }
    clockPin = 0;
}
int main()
{
    shiftOut( 0b11010101);
    return 1;
}
