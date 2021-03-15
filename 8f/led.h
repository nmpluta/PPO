#ifndef LED_H
#define LED_H


class Led
{
	public:
		Led(void);
		virtual void On(unsigned char ucLedIndex) = 0;
		
};

#endif /* LED_H */
