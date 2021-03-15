#include "led.h"
#include <stdio.h>


void Delay(int iTimeInMs){
	int iCycle;
	int iNumberOfCycles = 12000 * iTimeInMs;
	
	for (iCycle = 0; iCycle < iNumberOfCycles; iCycle++) {}
}

int main(void)
{
	LedInit();

	while(1){
		Delay(100);
		LedStepLeft();
	}
}
