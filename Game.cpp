#include "Game.h"

void Game::handleEvents()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			window.close();
		}

		if (event.type == sf::Event::KeyPressed)
		{

		}
		if (event.type == sf::Event::KeyReleased)
		{
			switch (event.key.code)
			{
			
			

			default:
				break;
			}
		}
	}
}

void Game::update()
{

	
	elapsedTimeSinceLastUpdate += clock.restart();
	while (elapsedTimeSinceLastUpdate > timePerFrame)
	{
		
		elapsedTimeSinceLastUpdate -= timePerFrame;
		
		playerOnePtr->update();
		
		

	}
}

void Game::render()
{
	window.clear();
	
	window.draw(*playerOnePtr);

	window.display();
}

Game::Game()
	:window(sf::VideoMode(WIDTH,HEIGHT),"Fighting Apocalypse"),
	timePerFrame(sf::seconds(1.0f/60.0f)),
	elapsedTimeSinceLastUpdate(sf::Time::Zero)
{
	//this->dt = 0;
	playerOnePtr = new PlayerOne(WIDTH, HEIGHT, 3.0f, 70, 80, "ken", 300);
	playerOnePtr->setPosition(100, 100);
	
	window.setKeyRepeatEnabled(false);
}


void Game::run()
{
	while (window.isOpen())
	{
		handleEvents();
		update();
		render();
	}
}

Game::~Game()
{
	/*delete this->playerOnePtr;*/
	
	/*delete this->characterVector;*/
}
