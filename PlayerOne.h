#pragma once
#include "MovementEntity.h"

class PlayerOne:public MovementEntity
{
public:
	PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, float velocity, int lives);
	virtual ~PlayerOne();

	// Inherited via Animation
	virtual void update() override;
};