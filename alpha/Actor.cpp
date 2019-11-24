#include "Actor.h"

Actor::Actor() : 
	_attackCooldown(3.0f) {
}

Actor::Actor(sf::CircleShape shape, sf::Sound attackSound) : 
	_shape(shape), 
	_attackSound(attackSound), 
	_attackCooldown(3.0f) {
}

Actor::Actor(sf::Sprite sprite, sf::Sound attackSound) : 
	_sprite(sprite),
	_attackSound(attackSound),
	_attackCooldown(3.0f) {
}

void Actor::init(sf::CircleShape shape, sf::Sound attackSound) {
	_shape = shape;
	_attackSound = attackSound;
}

void Actor::init(sf::Sprite sprite, sf::Sound attackSound) {
}

void Actor::attack() {
	_attackSound.play();
}

void Actor::setSprites(int x, int y) {
	for(int a = 0; a < 4; a++) {
		for(int b = 0; b < 3; b++) {
			_sprites[a+b]
		}
	}

}
