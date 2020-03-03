#pragma once

class Animation
{
private:
	int frameWidth;
	int frameHeight;
	float velocity;

public:
	Animation(int frameWidth, int frameHeight, float velocity);
	virtual ~Animation();

	void updateAnimation();
	void changeAnimation(int row, int nrColumn, int frames);

	void lightPunch(int row, int nrColumn, int frames);
	void hardPunch(int row, int nrColumn, int frames);
	void specialAttack(int row, int nrColumn, int frames);
	void Crouth(int row, int nrColumn, int frames);
	void jump(int row, int nrColumn, int frames);
};