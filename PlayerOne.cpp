#include "PlayerOne.h"



PlayerOne::PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, float velocity, int lives)
	:MovementEntity(frameWidth, frameHeight, windowWidth, windowHeight, speed, fileName, velocity, lives)
{
	
	this->setSpritePosition(100, windowHeight - float(this->getGlobal().height));
}

PlayerOne::~PlayerOne()
{
}

void PlayerOne::update()
{
	//Animation::update();


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		 
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		MovementEntity::walking();
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
