#ifndef ATTACK_COMMAND_H
#define ATTACK_COMMAND_H

#include "Command.h"
#include "Actor.h"

class AttackCommand : public Command {
public:
	AttackCommand(Actor* actor);
	~AttackCommand();
	virtual void execute();

private:
	Actor* _actor;
};

#endif // !ATTACK_COMMAND_H
