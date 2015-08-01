#pragma once

/*
  The idea here is to have this handle creating/updating/rendering and providing access to
  all game entities in a way that hides their implementation from outside classes
*/
class GameEntityManager
{
public:
  GameEntityManager();
  ~GameEntityManager();

  const int AddBall();
  const int AddBrick();
  const int AddPaddle();

  void UpdateEntities(const double);
  void RenderEntities(sf::RenderWindow&);

private:
  std::vector<GameEntity*> _gameEntities;
};
