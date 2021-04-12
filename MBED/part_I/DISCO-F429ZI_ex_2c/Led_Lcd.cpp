#include "Led_Lcd.h"

const char *Text[] = {"0", "1", "2", "3"};

#define BUTTON_COUNT    4
#define BUTTON_LENGTH   80
#define BUTTON_WIDTH    80

LedLcd::LedLcd(unsigned char ucColumn)
{
    LCD_DISCO_F429ZI::LCD_DISCO_F429ZI();
    BSP_LCD_SetFont(&Font24);
    privateLcd.Clear(LCD_COLOR_BLACK);
    privateLcd.SetBackColor(LCD_COLOR_RED);
    
    uLedColumn = ucColumn;
}

void LedLcd::On(unsigned char ucLedIndex)
{   
    for(uint8_t uIndex=0; uIndex<BUTTON_COUNT; uIndex++)
    {
        if(ucLedIndex == uIndex)
        {
            privateLcd.SetTextColor(LCD_COLOR_GREEN);
        }
        else
        {
            privateLcd.SetTextColor(LCD_COLOR_BLUE);
        }
        privateLcd.FillRect(1+BUTTON_WIDTH*uLedColumn, BUTTON_LENGTH*uIndex+1, BUTTON_WIDTH-2, BUTTON_LENGTH-2);
        
        privateLcd.SetTextColor(LCD_COLOR_GREEN);
        privateLcd.DrawRect(BUTTON_WIDTH*uLedColumn, uIndex*BUTTON_LENGTH, BUTTON_WIDTH, BUTTON_LENGTH);
        
        privateLcd.SetTextColor(LCD_COLOR_WHITE);
        privateLcd.DisplayStringAt( BUTTON_WIDTH*uLedColumn, uIndex*BUTTON_LENGTH, (uint8_t *) Text[uIndex], LEFT_MODE);
    }
}