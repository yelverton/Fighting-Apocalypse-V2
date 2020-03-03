#include "itemsHazardEntity.h"

itemsHazardEntity::itemsHazardEntity(float speed)
	:speed(speed)
{
}

itemsHazardEntity::~itemsHazardEntity()
{
}

float itemsHazardEntity::getSpeed()
{
	return speed;
}
