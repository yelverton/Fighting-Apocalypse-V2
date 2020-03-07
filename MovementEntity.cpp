#include "MovementEntity.h"

MovementEntity::MovementEntity(int frameWidth, int frameHeight, int windowWidth, int windowHeight, float speed, std::string fileName, float velocity, int lives)
	:CharacterEntity(windowWidth, windowHeight, speed, fileName, frameWidth, frameHeight), lives(lives), startLives(lives), timeCounter(0), updateTime(30)
{
	this->intRect = getIntRect();
	spriteWidth = frameWidth;
	spriteHeight = frameHeight;
}

MovementEntity::~MovementEntity()
{
}

void MovementEntity::increaseLives(int increase)
{
	if (startLives > lives)
	{
		lives += increase;
	}
}

void MovementEntity::decreaseLives(int decrease)
{
	lives -= decrease;
}

void MovementEntity::updateAnimation()
{
	
}

void MovementEntity::changeAnimation(int row, int nrColumn, int frames)
{
	this->timeCounter = (this->timeCounter + 1) % frames;

	if (this->timeCounter == 0)
	{
		this->intRect.left = (this->intRect.left + this->intRect.width) % ((int)(nrColumn * spriteWidth));
		//this->timeCounter = 0;
	//	this->texture.getSize().x
	}
}

void MovementEntity::walking(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::lightPunch(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::hardPunch(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::specialAttack(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::Crouth(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::jump(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void MovementEntity::walkingMovement()
{
}

void MovementEntity::lightPunchMovement()
{
}

void MovementEntity::hardPunchMovement()
{
}

void MovementEntity::specialAttackMovement()
{
}

void MovementEntity::CrouthMovement()
{
}

void MovementEntity::jumpMovement()
{
}

void MovementEntity::update()
{
	bool moving = false;
	


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		moveSpritePosition(UP, NONE);
	}
}
