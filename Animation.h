#pragma once
#include "CharacterEntity.h"

class Animation: public CharacterEntity
{
private:
	sf::IntRect intRect;
	int frameWidth;
	int frameHeight;

public:
	Animation(int frameWidth, int frameHeight, int windowWidth, int windowHeight, float speed, std::string fileName, int lives = 300);
	virtual ~Animation();

	void updateAnimation();
	void changeAnimation(int row, int nrColumn, int frames);

	void lightPunch(int row, int nrColumn, int frames);
	void hardPunch(int row, int nrColumn, int frames);
	void specialAttack(int row, int nrColumn, int frames);
	void Crouth(int row, int nrColumn, int frames);
	void jump(int row, int nrColumn, int frames);

	// Inherited via CharacterEntity
	virtual void update() override;
};