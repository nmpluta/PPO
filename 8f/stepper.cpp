#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep)
{
	switch(eStep)
	{
		case LEFT:
			LedCtr++;
			LedCtr = LedCtr % 4;
			break;
		case RIGHT:
			LedCtr--;
			LedCtr = LedCtr % 4;
		break;
	}
	pMyLed -> On(LedCtr);
}

void Stepper::StepLeft(void)
{
	Step(LEFT);
}

void Stepper::StepRight(void)
{
	Step(RIGHT);
}

void Stepper::SetLed(Led *pLed)
{
		pMyLed = pLed;
}
