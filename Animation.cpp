#include "Animation.h"

Animation::Animation(int frameWidth, int frameHeight, int windowWidth, int windowHeight, float speed, std::string fileName, int lives)
	:frameWidth(frameWidth), frameHeight(frameHeight), CharacterEntity(windowWidth, windowHeight, speed, fileName, lives)
{
}

Animation::~Animation()
{
}

void Animation::updateAnimation()
{
}

void Animation::changeAnimation(int row, int nrColumn, int frames)
{
	
}

void Animation::lightPunch(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void Animation::hardPunch(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void Animation::specialAttack(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void Animation::Crouth(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void Animation::jump(int row, int nrColumn, int frames)
{
	changeAnimation(row, nrColumn, frames);
}

void Animation::update()
{
	bool moving = false;
	


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		moveSpritePosition(UP, NONE);
	}
}
