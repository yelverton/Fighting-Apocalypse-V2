#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class CharacterEntity:public sf::Drawable
{
private:
	sf::Sprite sprite;
	sf::Texture texture;
	std::string fileName;
	sf::IntRect intRect;

	int frameWidth;
	int frameHeight;

	int windowWidth;
	int windowHeight;
	int row;

	
	int column;
	float speed;

	//hitbox
	//hitboxTest



public:
	CharacterEntity(int windowWidth, int windowHeight, float speed, std::string fileName, int frameWidth, int frameHeight);
	virtual ~CharacterEntity();

	sf::FloatRect getGlobal();
	//hurtbox floatrect
	//hurtboxTest floatrect
	sf::Texture getTexture();
	sf::IntRect getIntRect();
	void setSpriteIntRect(int nrRow, int nrColumn);

	void setSpritePosition(float xPos, float yPos);
	void moveSpritePosition(float xOffset, float yOffset);

	


	virtual void update() = 0;

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
};
