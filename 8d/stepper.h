#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"
#include "ledInv.h"


class Stepper
{
	private:
		unsigned char LedCtr;
		unsigned char ucInversion;
	
		void Step(enum Step eStep);
	
		Led MyLed;
		LedInv MyLedInv;
	
	public:
		void StepLeft(void);
		void StepRight(void);
		void SetMode(unsigned char ucSetInv);
		


};

#endif /* STEPPER_H */
