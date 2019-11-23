#include <iostream>
#include "InputHandler.h"
#include "util.h"
#include "Synth.h"
#include "Actor.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

sf::CircleShape shape(10.0f);
Actor actor;

int main(){
	extern Actor actor;
	sf::RenderWindow window(sf::VideoMode(800, 600), "TESTING");
	
	sf::SoundBuffer soundBuffer;
    sf::Sound demoSound;
    
    // LASER
    Synth::sEnvelope envelope = { 0.0001, 0.0, 0.0, 0.3, 1.0, 1.0 };
    Synth::sTone tone = { Synth::OSC_SAW_DIG, 900.0, 500.0, 0.8 };
    Synth::generate(&soundBuffer, envelope, tone, 20000, 44100);
    demoSound.setBuffer(soundBuffer);
	
	shape.setFillColor(sf::Color::Green);
	
	actor.init(shape, demoSound);

	InputHandler* ih = new InputHandler();
	sf::Clock clock;
	float test = 0.0f;
	while(window.isOpen()){
		float dt = clock.restart().asSeconds();

		sf::Event event;
		while(window.pollEvent(event)){
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		Command* command = ih->handleInput(dt);
		
		if(command){
			command->execute();
			free(command);
		}
		window.clear();
		window.draw(actor._shape);
		window.display();
	}
	
	return 0;
}