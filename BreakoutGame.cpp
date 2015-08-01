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
	_mainWindow.create(sf::VideoMode(1000, 600), "Brick  Break Clone Maybe!");

  // add whatever entities we want
  _entityManager.AddBall();
  _entityManager.AddBrick();
  _entityManager.AddPaddle();

	sf::Clock clock;
	sf::Time  elapsed;

	// the main loop
	while( !IsExiting() )
	{
		elapsed = clock.restart();

		_mainWindow.clear();

    // render everything
    Render();
	
		// update everything
		Update(elapsed.asMilliseconds());

		_mainWindow.display();
	}

	// run any cleanup if need be
}

void BreakoutGame::Render()
{
  // render everything
  _entityManager.RenderEntities(_mainWindow);
}

void BreakoutGame::Update(const double deltaTime)
{
	// update anything
	sf::Event event;

	_mainWindow.pollEvent(event);

	switch( _currentState )
	{
	case INITIALIZING:
		// initialize stuff (load things like audio/images/etc)
		break;
	case MENU:
		// set up the main menu stuff
		break;
	case PLAYING:
		// run the main game loop and do whatever else...stuff
    _entityManager.UpdateEntities(deltaTime);
		break;
	case PAUSED:
		// draw the pause screen
		break;
	}

	// figure any events
	FigureCurrentEvent(&event);
}

bool BreakoutGame::IsExiting()
{
	// check to see if the user wants to exit
	if( _currentState == EXITING )
		return true;
	return false;
}

void BreakoutGame::FigureCurrentEvent(const sf::Event* currEvent)
{
	switch( (*currEvent).type )
  {
  case sf::Event::Closed:
    {
      _currentState = EXITING;
      break;
    }
  case sf::Event::KeyPressed:
    {
      if( sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) )
        _currentState = EXITING;
      break;
    }
  }
}