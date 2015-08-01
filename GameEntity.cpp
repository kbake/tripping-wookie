#include "stdafx.h"
#include "GameEntity.h"

int GameEntity::id = 0;

GameEntity::GameEntity()
{
  id++;
}


GameEntity::~GameEntity()
{
}

const int GameEntity::GetId() const
{
  return id;
}