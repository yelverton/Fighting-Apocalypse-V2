#pragma once
#include <SFML/Graphics.hpp>
#include "PlayerOne.h"

class Game
{
public:
	static const int HEIGHT = 600;
	static const int WIDTH = 900;
private:
	sf::Clock clock;
	sf::Time elapsedTimeSinceLastUpdate;
	sf::Time timePerFrame;

	PlayerOne playerOnePtr;

	//HUD* hud;

	sf::RenderWindow window;
	void handleEvents();
	void update();
	void render();
public:
	Game();
	void run();
	virtual ~Game();
};