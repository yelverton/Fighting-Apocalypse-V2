#include "Animation.h"

Animation::Animation(int frameWidth, int frameHeight)
	:frameWidth(frameWidth), frameHeight(frameHeight)
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
