/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef KEYBOARD_TS_H
#define KEYBOARD_TS_H

#include "TS_DISCO_F429ZI.h"

enum KeyboardState
{
    BUTTON_0,
    BUTTON_1,
    BUTTON_2,
    BUTTON_3,
    RELASED
};

class KeyboardTs
{
    private:
        TS_DISCO_F429ZI MyTs;
        TS_StateTypeDef TS_State;
        
    public:
        enum KeyboardState eRead(void);
        KeyboardTs(void);
};













#endif /* KEYBOARD_TS_H */