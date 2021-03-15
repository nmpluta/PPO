#include <LPC21xx.H>
#include "led.h"
#include "stepper.h"

enum Step{LEFT,RIGHT};

Stepper::Stepper(unsigned char ucLedStartIndex)
{
	Stepper::LedCtr = ucLedStartIndex;
	Stepper::MyLed.On(Stepper::LedCtr);
}


void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		Stepper::MyLed.On(Stepper::LedCtr);
	}
	else if(eStep == RIGHT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		Stepper::MyLed.On(Stepper::LedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
