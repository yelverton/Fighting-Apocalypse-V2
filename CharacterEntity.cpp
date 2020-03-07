#include "CharacterEntity.h"

CharacterEntity::CharacterEntity(int windowWidth, int windowHeight, float speed, std::string fileName, int frameWidth, int frameHeight)
	:speed(speed), fileName(fileName), windowWidth(windowWidth), windowHeight(windowHeight)
{
	texture.loadFromFile("../Images/" + fileName + ".png");
	sprite.setTexture(texture);
	this->intRect = sf::IntRect(0, 0, frameWidth, frameHeight);
	this->sprite.setTextureRect(intRect);
}

CharacterEntity::~CharacterEntity()
{
}

sf::FloatRect CharacterEntity::getGlobal()
{
	return sprite.getGlobalBounds();
}



sf::Texture CharacterEntity::getTexture()
{
	return this->texture;
}

sf::IntRect CharacterEntity::getIntRect()
{
	return this->intRect;
}

void CharacterEntity::setSpriteIntRect(int nrRow, int nrColumn)
{
	this->intRect = sf::IntRect(0, 0, frameWidth * nrRow, frameHeight * nrColumn);
	//this->intRect.left = 0, 0, 0;
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



void CharacterEntity::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(sprite);
}

