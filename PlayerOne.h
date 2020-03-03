#pragma once
#include "CharacterEntity.h"

class PlayerOne:public CharacterEntity
{
public:
	PlayerOne(float speed, int frameWidth, int frameHeight, std::string fileName, int lives);
	virtual ~PlayerOne();

	// Inherited via CharacterEntity
	virtual void update() override;
};