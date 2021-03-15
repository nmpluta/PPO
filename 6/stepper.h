#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper : protected Led
{
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
	
	public:
		Stepper (unsigned char ucLedStartIndex=0);
		void StepLeft(void);
		void StepRight(void);
	

};

#endif /* STEPPER_H */
