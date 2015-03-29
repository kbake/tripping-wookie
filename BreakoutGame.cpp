#include "stdafx.h"
#include "BreakoutGame.h"


BreakoutGame::BreakoutGame()
{
}


BreakoutGame::~BreakoutGame()
{
}

void BreakoutGame::Start()
{
	// any initial starting stuff
	sf::RenderWindow window(sf::VideoMode(1000, 600), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while( window.isOpen() )
	{
		sf::Event event;
		while( window.pollEvent(event) )
		{
			if( event.type == sf::Event::Closed )
				window.close();
			if( sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
				_currentState = GameState::EXITING;
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	// the main loop
	//while( !IsExiting() )
	//{
	//	// do stuff
	//}

	// exit
}

void BreakoutGame::Update(double delta)
{
	// update anything
}

bool BreakoutGame::IsExiting()
{
	// check to see if the user wants to exit
	if( _currentState == GameState::EXITING )
		return true;
	return false;
}