#include "stdafx.h"
#include "GameEntityManager.h"
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"


GameEntityManager::GameEntityManager()
{
}


GameEntityManager::~GameEntityManager()
{
  // wipe everything out
  for each (GameEntity* entity in _gameEntities)
  {
    delete entity;
    entity = NULL;
  }

  _gameEntities.clear();
}

const int GameEntityManager::AddBall()
{
  int size = _gameEntities.size();
  _gameEntities.push_back(new Ball());
  return _gameEntities[size]->GetId();
}

const int GameEntityManager::AddBrick()
{
  int size = _gameEntities.size();
  _gameEntities.push_back(new Brick());
  return _gameEntities[size]->GetId();
}

const int GameEntityManager::AddPaddle()
{
  int size = _gameEntities.size();
  _gameEntities.push_back(new Paddle());
  return _gameEntities[size]->GetId();
}

void GameEntityManager::UpdateEntities(const double delta)
{
  for each (GameEntity* entity in _gameEntities)
  {
    entity->Update(delta);
  }
}

void GameEntityManager::RenderEntities(sf::RenderWindow& window)
{
  for each (GameEntity* entity in _gameEntities)
  {
    window.draw(*entity);
  }
}