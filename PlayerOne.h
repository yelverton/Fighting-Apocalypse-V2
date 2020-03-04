#pragma once
#include "Animation.h"

class PlayerOne:public Animation
{
public:
	PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, int lives);
	virtual ~PlayerOne();

	// Inherited via Animation
	virtual void update() override;
};