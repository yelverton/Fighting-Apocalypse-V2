#include "CharacterEntity.h"

CharacterEntity::CharacterEntity(int windowWidth, int windowHeight, float speed, std::string fileName, int lives)
	:speed(speed), fileName(fileName), lives(lives), startLives(lives), windowWidth(windowWidth), windowHeight(windowHeight)
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

void CharacterEntity::setSpritePosition(float xPos, float yPos)
{
	sprite.setPosition(xPos, yPos);
}

void CharacterEntity::moveSpritePosition(float xOffset, float yOffset)
{
	if (sprite.getPosition().x < 0.f)
	{
		sprite.setPosition(0.f, sprite.getPosition().y);
	}
	else if (sprite.getPosition().x + sprite.getGlobalBounds().width > windowWidth)
	{
		sprite.setPosition(windowWidth - sprite.getGlobalBounds().width, sprite.getPosition().y);
	}

	sprite.move(xOffset, yOffset);
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

