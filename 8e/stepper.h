#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"
#include "ledInv.h"


class Stepper
{
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
		Led *pMyLed;
	
	public:
		void StepLeft(void);
		void StepRight(void);
		void SetLed(Led *pLed);
};

#endif /* STEPPER_H */
