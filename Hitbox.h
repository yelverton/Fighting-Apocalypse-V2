#pragma once
#include <SFML/Graphics.hpp>

class Hitbox : public sf::Drawable
{
private:
	sf::RectangleShape rectShape;
	const sf::Sprite &sprite;
public:
	Hitbox(const sf::Sprite &sprite);
	virtual ~Hitbox();

	// Inherited via Drawable
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;

};