#include "PlayerOne.h"

PlayerOne::PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, int lives)
	:CharacterEntity(windowWidth, windowHeight, 3.0f, frameWidth, frameHeight, fileName)
{
}

PlayerOne::~PlayerOne()
{
}

void PlayerOne::update()
{
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
