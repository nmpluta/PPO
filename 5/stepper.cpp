#include <LPC21xx.H>
#include "led.h"
#include "stepper.h"

enum Step{LEFT,RIGHT};


void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		Stepper::LedCtr--;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		Stepper::On(Stepper::LedCtr);
	}
	else if(eStep == RIGHT){
		Stepper::LedCtr++;
		Stepper::LedCtr = Stepper::LedCtr % 4;
		Stepper::On(Stepper::LedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}

void Stepper::StepRight(void){
	Step(RIGHT);
}
