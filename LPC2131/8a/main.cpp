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
	KeyboardState eCurrentState;
	Keyboard MyKeyboard;
	Stepper MyStepper;
	
	while(1){
		eCurrentState = MyKeyboard.eRead();
		switch(eCurrentState)
		{
			case BUTTON_1:
				MyStepper.StepLeft();
				break;
			case BUTTON_2:
				MyStepper.StepRight();
				break;
			default:
				break;
		}
		Delay(500);
	}
}
