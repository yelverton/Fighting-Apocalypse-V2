#include "CharacterEntity.h"

CharacterEntity::CharacterEntity(float speed, int frameWidth, int frameHeight, std::string fileName, int lives)
	:speed(speed), fileName(fileName), lives(lives), startLives(lives)
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
	if (startLives > lives)
	{
		lives += increase;
	}
}

void CharacterEntity::decreaseLives(int decrease)
{
	lives -= decrease;
}

void CharacterEntity::setPosition(float xPos, float yPos)
{
	sprite.setPosition(xPos, yPos);
}

void CharacterEntity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(sprite);
}

