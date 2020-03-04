#pragma once
#include <SFML/Graphics.hpp>
#include <string>

class CharacterEntity:public sf::Drawable
{
private:
	sf::Sprite sprite;
	sf::Texture texture;
	std::string fileName;

	int windowWidth;
	int windowHeight;
	int startLives;
	int lives;
	float speed;

	//hitbox
	//hitboxTest

protected:
	const static int RIGHT = -1;
	const static int DOWN = 1;
	const static int LEFT = 1;
	const static int UP = -1;
	const static int NONE = 0;

public:
	CharacterEntity(int windowWidth, int windowHeight, float speed, std::string fileName, int lives=300);
	virtual ~CharacterEntity();

	sf::FloatRect getGlobal();
	//hurtbox floatrect
	//hurtboxTest floatrect

	void setSpritePosition(float xPos, float yPos);
	void moveSpritePosition(float xOffset, float yOffset);

	int getLives();
	void increaseLives(int increase);
	void decreaseLives(int decrease);
	void setPosition(float xPos, float yPos);

	virtual void update() = 0;

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
};
