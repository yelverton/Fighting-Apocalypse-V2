#pragma once
#include <SFML/Graphics.hpp>

class Hurtbox: public sf::Drawable
{
private:
	sf::RectangleShape rectShape;
	const sf::Sprite &sprite;
public:
	Hurtbox(const sf::Sprite &sprite);
	virtual ~Hurtbox();

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;
};