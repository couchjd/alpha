#include "InputHandler.h"
#include <iostream>

#define VELOCITY 150.0f

InputHandler::InputHandler(){}

Command* InputHandler::handleInput(const float& dt){
	extern Actor actor;
	Actor* _actor = &actor;
	float x = 0.0f;
	float y = 0.0f;
	
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) x -= VELOCITY;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) x += VELOCITY;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) y -= VELOCITY;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) y += VELOCITY;
	
	if(y != 0.0f || x != 0.0f) return new MoveCommand(x * dt, y * dt, _actor);
	else return nullptr;
}