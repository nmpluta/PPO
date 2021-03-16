#include "stepper.h"

enum Step{LEFT,RIGHT};

Stepper::Stepper(unsigned char ucLedStartIndex)
{
	LedCtr = ucLedStartIndex;
	MyLed.On(LedCtr);
}


void Stepper::Step(enum Step eStep)
{
	switch(eStep)
	{
		case LEFT:
			LedCtr++;
			LedCtr = LedCtr % 4;
			MyLed.On(LedCtr);
			break;
		case RIGHT:
			LedCtr--;
			LedCtr = LedCtr % 4;
			MyLed.On(LedCtr);
			break;
		default:
			break;
	}
}

void Stepper::StepLeft(void)
{
	Step(LEFT);
}

void Stepper::StepRight(void)
{
	Step(RIGHT);
}
