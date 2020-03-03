#pragma once
#include "CharacterEntity.h"

class PlayerOne:public CharacterEntity
{
public:
	PlayerOne(int windowWidth, int windowHeight, float speed, int frameWidth, int frameHeight, std::string fileName, int lives);
	virtual ~PlayerOne();

	// Inherited via CharacterEntity
	virtual void update() override;
};