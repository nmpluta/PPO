/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef LED_LCD_H
#define LED_LCD_H

//#include "mbed.h"
#include "LCD_DISCO_F429ZI.h"

class LedLcd
{
    private:
        LCD_DISCO_F429ZI privateLcd;
        uint8_t uLedColumn;
    
    public:
        void On(unsigned char ucLedIndex);
        LedLcd(unsigned char ucColumn);
};

#endif /* LED_LCD_H */
