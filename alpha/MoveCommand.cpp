#include "MoveCommand.h"

MoveCommand::MoveCommand(float x, float y, Actor* actor) : _actor(actor), _x(x), _y(y){}
MoveCommand::~MoveCommand(){ }

void MoveCommand::execute(){
	_actor->_shape.move(_x, _y);
}