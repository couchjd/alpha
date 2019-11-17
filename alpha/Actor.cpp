#include "Actor.h"

Actor::Actor() {}
Actor::Actor(sf::CircleShape shape, sf::Sound attackSound) : _shape(shape), _attackSound(attackSound) {}

void Actor::init(sf::CircleShape shape, sf::Sound attackSound) {
	_shape = shape;
	_attackSound = attackSound;
}

void Actor::attack() {
	_attackSound.play();
}