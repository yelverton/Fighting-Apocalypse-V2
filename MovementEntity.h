#pragma once
#include "CharacterEntity.h"

class MovementEntity: public CharacterEntity
{
private:
	int startLives;
	int lives;


	int spriteWidth;
	int spriteHeight;
	float velocity;
	int timeCounter;
	int updateTime;
	sf::IntRect intRect;

protected:
	const static int RIGHT = -1;
	const static int DOWN = 1;
	const static int LEFT = 1;
	const static int UP = -1;
	const static int NONE = 0;

public:
	MovementEntity(int frameWidth, int frameHeight, int windowWidth, int windowHeight, float speed, std::string fileName, float velocity, int lives = 300);
	virtual ~MovementEntity();

	void increaseLives(int increase);
	void decreaseLives(int decrease);

	void updateAnimation();
	void changeAnimation(int row, int nrColumn, int frames);

	void walking(int row, int nrColumn, int frames);
	void lightPunch(int row, int nrColumn, int frames);
	void hardPunch(int row, int nrColumn, int frames);
	void specialAttack(int row, int nrColumn, int frames);
	void Crouth(int row, int nrColumn, int frames);
	void jump(int row, int nrColumn, int frames);

	// Inherited via CharacterEntity
	virtual void update() override;
};