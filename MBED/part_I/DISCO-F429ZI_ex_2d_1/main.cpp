#include "mbed.h"
#include "Keyboard_Ts_Lcd.h"

int main()
{
    KeyboardTsLcd Keyboard(1);
    while(1) 
    {
        Keyboard.eRead();
        wait(0.1);
    }
}