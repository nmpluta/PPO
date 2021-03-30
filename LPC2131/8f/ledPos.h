#ifndef LEDPOS_H
#define LEDPOS_H

#include "led.h"

class LedPos : public Led
{
	public:
		virtual void On(unsigned char ucLedIndex);
		
};

#endif /* LEDPOS_H */
