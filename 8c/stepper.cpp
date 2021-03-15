#include <LPC21xx.H>
#include "stepper.h"

enum Step{LEFT,RIGHT};
extern unsigned char ucInversion;

void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		
		if(ucInversion == 1)
		{
			Stepper::MyLedInv.On(Stepper::LedCtr);
		}
		else
		{
			Stepper::MyLed.On(Stepper::LedCtr);
		}
	}
	
	else if(eStep == RIGHT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		
		if(ucInversion == 1)
		{
			Stepper::MyLedInv.On(Stepper::LedCtr);
		}
		else
		{
			Stepper::MyLed.On(Stepper::LedCtr);
		}
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
