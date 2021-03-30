#ifndef LED_H
#define LED_H

class Led
{
	private:
		unsigned char LedCtr;
		void Step(enum Step eStep);
		void On(unsigned char ucLedIndex);
	public:
		void Init(void);
		void StepLeft(void);
		void StepRight(void);
};

#endif /* LED_H */
