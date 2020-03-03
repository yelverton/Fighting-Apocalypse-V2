#include "CharacterEntity.h"

CharacterEntity::CharacterEntity(float speed, int frameWidth, int frameHeight, float velocity, std::string fileName, int lives)
	:speed(speed), frameWidth(frameWidth), frameHeight(frameHeight), velocity(velocity), fileName(fileName), lives(lives)
{
	texture.loadFromFile("../Images/" + fileName + ".png");
	sprite.setTexture(texture);
}

CharacterEntity::~CharacterEntity()
{
}

sf::FloatRect CharacterEntity::getGlobal()
{
	return sprite.getGlobalBounds();
}

int CharacterEntity::getLives()
{
	return lives;
}

void CharacterEntity::increaseLives(int increase)
{
	lives -= increase;
}

void CharacterEntity::decreaseLives(int decrease)
{
	lives -= decrease;
}

void CharacterEntity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(sprite);
}

