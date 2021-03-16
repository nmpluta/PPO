#include "led.h"
#include "stepper.h"

Led MyLed;
Stepper MyStepper;

void Delay(int iTimeInMs)
{
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	MyLed.Init();
	
	while(1)
	{
		Delay(100);
		MyStepper.StepLeft();
	}
}
