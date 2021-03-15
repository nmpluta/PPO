#include <stdio.h>
#include "led.h"
#include "stepper.h"
#include "keyboard.h"


void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Keyboard MyKeyboard;
	Stepper MyStepper;
	
	enum KeyboardState eCurrentState = MyKeyboard.eRead();
	if(eCurrentState == BUTTON_4)
	{
		MyStepper.SetMode(1);
	}
	else
	{
		MyStepper.SetMode(0); 
	}
	
	
	while(1){
		eCurrentState = MyKeyboard.eRead();
		if(eCurrentState == BUTTON_1)
		{
			MyStepper.StepLeft();
		}
		else if(eCurrentState == BUTTON_2)
		{
			MyStepper.StepRight();
		}
		Delay(500);
	}
}