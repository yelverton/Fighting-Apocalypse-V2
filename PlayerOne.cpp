#include "PlayerOne.h"

PlayerOne::PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, int lives)
	:Animation(frameWidth, frameHeight, windowWidth, windowHeight, speed, fileName, lives)
{
}

PlayerOne::~PlayerOne()
{
}

void PlayerOne::update()
{
	Animation(update());


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		 
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moveSpritePosition(RIGHT, NONE);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		moveSpritePosition(LEFT, NONE);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{

	}
}
