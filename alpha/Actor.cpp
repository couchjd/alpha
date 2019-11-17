#include "Actor.h"

Actor::Actor() {
	attackCooldown = 3.0f;
}
Actor::Actor(sf::CircleShape shape, sf::Sound attackSound) : _shape(shape), _attackSound(attackSound) {
	attackCooldown = 3.0f;
}

void Actor::init(sf::CircleShape shape, sf::Sound attackSound) {
	_shape = shape;
	_attackSound = attackSound;
}

void Actor::attack() {
	_attackSound.play();
}