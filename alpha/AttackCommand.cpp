#include "AttackCommand.h"

AttackCommand::AttackCommand(Actor* actor) : _actor(actor) {}
AttackCommand::~AttackCommand() {}

void AttackCommand::execute() {
	_actor->attack();
}