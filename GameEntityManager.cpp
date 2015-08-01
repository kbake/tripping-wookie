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

void GameEntityManager::AddBall()
{
  _gameEntities.push_back(new Ball());
}

void GameEntityManager::AddBrick()
{
  _gameEntities.push_back(new Brick());
}

void GameEntityManager::AddPaddle()
{
  _gameEntities.push_back(new Paddle());
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