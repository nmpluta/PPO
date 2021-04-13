#include "Keyboard_Ts.h"

#define BUTTON_COUNT    4
#define BUTTON_LENGTH   80
#define BUTTON_WIDTH    80

KeyboardTs::KeyboardTs(unsigned char ucColumn)
{
    TS_DISCO_F429ZI::TS_DISCO_F429ZI();
    uKeyboardColumn = ucColumn*BUTTON_WIDTH;
}

enum KeyboardState KeyboardTs::eRead(void)
{
    MyTs.GetState(&TS_State); 
    
    if(TS_State.TouchDetected && TS_State.X >= uKeyboardColumn && TS_State.X < uKeyboardColumn+BUTTON_WIDTH)
    {
        for(uint8_t uIndex=0; uIndex<BUTTON_COUNT; uIndex++)
        {
            if(TS_State.Y >= uIndex*BUTTON_LENGTH && TS_State.Y < (uIndex+1)*BUTTON_LENGTH)
            { 
                if(uIndex == 0)
                    return BUTTON_0;
                else if(uIndex == 1)
                    return BUTTON_1;
                else if(uIndex == 2)
                    return BUTTON_2;
                else if(uIndex == 3)
                    return BUTTON_3;
            }
        }
    }
    return RELASED;
}