#ifndef KEYBOARD_H
#define KEYBOARD_H

enum KeyboardState{
	RELEASED,
	BUTTON_1,
	BUTTON_2,
	BUTTON_3,
	BUTTON_4};

class Keyboard {
    public:
    enum KeyboardState eRead(void);
    Keyboard ();
};
#endif
