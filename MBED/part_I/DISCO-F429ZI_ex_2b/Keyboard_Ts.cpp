#include "Keyboard_Ts.h"

#define BUTTON_COUNT    4
#define BUTTON_LENGTH   80
#define BUTTON_WIDTH    80

KeyboardTs::KeyboardTs(void)
{
    TS_DISCO_F429ZI::TS_DISCO_F429ZI();
}

KeyboardState KeyboardTs::eRead(void)
{
    MyTs.GetState(&TS_State); 
    
    for(uint8_t uIndex=0; uIndex<BUTTON_COUNT; uIndex++)
    {
        if(TS_State.TouchDetected && TS_State.X < BUTTON_WIDTH && TS_State.Y >= uIndex*BUTTON_LENGTH && TS_State.Y < (uIndex+1)*BUTTON_LENGTH)
        { 
            return (KeyboardState)uIndex;
        }
    }
    return RELASED;
}