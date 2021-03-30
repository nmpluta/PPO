#ifndef LED_H
#define LED_H

enum LedState {STEP_LEFT, STEP_RIGHT, LED_STOP};

void LedStepLeft(void);
void LedStepRight(void);
void LedInit(void);

#endif /* LED_H */
