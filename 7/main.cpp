#include "led.h"
#include "stepper.h"
#include <stdio.h>

Stepper MyStepper;

void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	
	while(1){
		Delay(500);
		MyStepper.StepLeft();
	}
}
