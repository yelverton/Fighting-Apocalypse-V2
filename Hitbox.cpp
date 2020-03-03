#include "Hitbox.h"

Hitbox::Hitbox(const sf::Sprite & sprite)
	:sprite(sprite)
{

}

Hitbox::~Hitbox()
{
}

void Hitbox::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	target.draw(this->rectShape);
}
