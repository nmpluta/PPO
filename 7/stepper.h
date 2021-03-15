#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper
{
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
	
	public:
		Stepper (unsigned char ucLedStartIndex=0);
		void StepLeft(void);
		void StepRight(void);
		
		Led MyLed;

};

#endif /* STEPPER_H */
