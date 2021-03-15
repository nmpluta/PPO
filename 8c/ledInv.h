#ifndef LEDINV_H
#define LEDINV_H

#include "led.h"

class LedInv : public Led
{
	public:
		void On(unsigned char ucLedIndex);
};

#endif /* LEDINV_H */
