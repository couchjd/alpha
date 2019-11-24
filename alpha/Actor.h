#ifndef ACTOR_H
#define ACTOR_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Actor {
public:
	Actor();
	Actor(sf::CircleShape shape, sf::Sound attackSound);
	Actor(sf::Sprite sprite, sf::Sound attackSound);

	void init(sf::CircleShape shape, sf::Sound attackSound);
	void init(sf::Sprite sprite, sf::Sound attackSound);
	void attack();
	void setSprites(int x, int y);

	sf::Sound _attackSound;
	sf::CircleShape _shape;
	sf::Sprite _sprite;
	sf::Sprite _sprites[12];
private:
	float _attackCooldown;
};


#endif