/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef KEYBOARD_TS_LCD_H
#define KEYBOARD_TS_LCD_H

#include "Keyboard_Ts.h"
#include "Led_Lcd.h"

class KeyboardTsLcd
{
    private:
        KeyboardTs *pKeyboard;
        LedLcd *pLed;
    public:
        KeyboardTsLcd(unsigned char _ucColumn);
        enum KeyboardState eRead(void);
};



#endif /* KEYBOARD_TS_LCD_H */