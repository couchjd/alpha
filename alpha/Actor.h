#ifndef ACTOR_H
#define ACTOR_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Actor {
public:
	Actor();
	Actor(sf::CircleShape shape, sf::Sound attackSound);
	sf::CircleShape _shape;

	void init(sf::CircleShape shape, sf::Sound attackSound);

	void attack();
	sf::Sound _attackSound;
private:
	float attackCooldown;
};


#endif