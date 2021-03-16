#include "stepper.h"
#include "keyboard.h"


void Delay(int iTimeInMs)
{
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Keyboard MyKeyboard;
	Stepper MyStepper;
	
	enum KeyboardState eCurrentState = MyKeyboard.eRead();
	switch(eCurrentState)
	{
		case BUTTON_4:
			MyStepper.SetMode(1);
			break;
		default:
			MyStepper.SetMode(0);
			break;
	}
	
	while(1)
	{
		eCurrentState = MyKeyboard.eRead();
		switch(eCurrentState)
		{
			case BUTTON_1:
				MyStepper.StepRight();
				break;
			case BUTTON_2:
				MyStepper.StepLeft();
				break;
			default:
				break;
		}
		Delay(500);
	}
}
