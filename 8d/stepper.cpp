#include <LPC21xx.H>
#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		
		if(ucInversion == 1)
		{
			MyLedInv.On(LedCtr);
		}
		else
		{
			MyLed.On(LedCtr);
		}
	}
	
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		
		if(ucInversion == 1)
		{
			MyLedInv.On(LedCtr);
		}
		else
		{
			MyLed.On(LedCtr);
		}
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}

void Stepper::SetMode(unsigned char ucSetInv)
{
		ucInversion = ucSetInv;
}
