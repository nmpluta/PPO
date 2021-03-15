#ifndef KEYBOARD_H
#define KEYBOARD_H

enum KeyboardState
{
	RELASED,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
	BUTTON_4
};


class Keyboard
{
	public:
		Keyboard(void);
		enum KeyboardState eRead(void);
};

#endif
