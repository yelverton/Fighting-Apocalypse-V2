#pragma once

class Animation
{
private:
	int frameWidth;
	int frameHeight;

public:
	Animation(int frameWidth, int frameHeight);
	virtual ~Animation();

	void updateAnimation();
	void changeAnimation(int row, int nrColumn, int frames);

	void lightPunch(int row, int nrColumn, int frames);
	void hardPunch(int row, int nrColumn, int frames);
	void specialAttack(int row, int nrColumn, int frames);
	void Crouth(int row, int nrColumn, int frames);
	void jump(int row, int nrColumn, int frames);
};