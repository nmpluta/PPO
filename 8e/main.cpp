#include "stepper.h"
#include "keyboard.h"
#include "ledInv.h"

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	Keyboard MyKeyboard;
	Stepper MyStepper;
	
	Led MyLed;
	LedInv MyLedInv;
	
	enum KeyboardState eCurrentState = MyKeyboard.eRead();
	switch(eCurrentState)
	{
		case BUTTON_4:
			MyStepper.SetLed(&MyLedInv);
		break;
		default:
			MyStepper.SetLed(&MyLed);
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
