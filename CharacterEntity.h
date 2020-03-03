#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class CharacterEntity:public sf::Drawable
{
private:
	sf::Sprite sprite;
	sf::Texture texture;
	std::string fileName;

	int lives;
	int frameWidth;
	int frameHeight;
	float velocity;
	float speed;

	//hitbox
	//hitboxTest

public:
	CharacterEntity(float speed, int frameWidth, int frameHeight, std::string fileName, int lives=300);
	virtual ~CharacterEntity();

	sf::FloatRect getGlobal();
	//hurtbox floatrect
	//hurtboxTest floatrect

	int getLives();
	void increaseLives(int increase);
	void decreaseLives(int decrease);
	void setPosition(float xPos, float yPos);

	virtual void update() = 0;

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
};
