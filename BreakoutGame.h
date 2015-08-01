#pragma once
class BreakoutGame
{
public:
	BreakoutGame();
	~BreakoutGame();

	void Start();
	void Update(const double);
  void Render();
	bool IsExiting();

	enum GameState { INITIALIZING, MENU, PLAYING, PAUSED, EXITING };

private:
	void FigureCurrentEvent(const sf::Event* currEvent);

	sf::RenderWindow  _mainWindow;
  GameEntityManager _entityManager;
	GameState         _currentState;
};

