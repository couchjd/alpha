#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include "Command.h"
#include "MoveCommand.h"
#include "AttackCommand.h"
#include "util.h"

class InputHandler {
public:
	InputHandler();
	Command* handleInput(const float& dt);
	
private:
	Command* buttonLeft;
	Command* buttonRight;
	Command* buttonUp;
	Command* buttonDown;
};

#endif