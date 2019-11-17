#ifndef MOVE_COMMAND_H
#define MOVE_COMMAND_H

#include "Command.h"
#include "Actor.h"

class MoveCommand : public Command {
public:
	MoveCommand(float x, float y, Actor* actor);
	~MoveCommand();
	virtual void execute();
	
private:
	Actor* _actor;
	float _x;
	float _y;
};

#endif