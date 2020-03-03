#pragma once

class itemsHazardEntity
{
private:
	float speed;

public:
	itemsHazardEntity(float speed);
	virtual ~itemsHazardEntity();

	float getSpeed();
	virtual void update() = 0;
};