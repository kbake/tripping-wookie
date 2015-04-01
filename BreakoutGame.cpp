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
	_mainWindow.create(sf::VideoMode(1000, 600), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	sf::Clock clock;
	sf::Time  elapsed;

	// the main loop
	while( !IsExiting() )
	{
		elapsed = clock.restart();

		_mainWindow.clear();
		_mainWindow.draw(shape);
	
		// update everything
		Update(elapsed.asMilliseconds());

		_mainWindow.display();
	}

	// run any cleanup if need be
}

void BreakoutGame::Update(double deltaTime)
{
	// update anything
	sf::Event event;

	_mainWindow.pollEvent(event);

	switch( _currentState )
	{
	case INITIALIZING:
		// initialize stuff
		break;
	case MENU:
		// set up the main menu stuff
		break;
	case PLAYING:
		// run the main game loop and do whatever else...stuff
		break;
	case PAUSED:
		// draw the pause screen
		break;
	}

	if( event.type == sf::Event::Closed )
	{
		_currentState = EXITING;
	}
	else if( event.type == sf::Event::KeyPressed )
	{
		if( sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
		{
			_currentState = EXITING;
		}
	}
}

bool BreakoutGame::IsExiting()
{
	// check to see if the user wants to exit
	if( _currentState == EXITING )
		return true;
	return false;
}