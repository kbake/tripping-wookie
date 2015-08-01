#pragma once

/*
  Thinking of this as the most basic level of an entity within the game, so something
  that's actually renderable and/or updatible(sp) that needs to be included in the game
*/
class GameEntity
{
public:
  GameEntity();
  virtual ~GameEntity();

  virtual void Update(double) = 0;
  virtual void Render()       = 0;
};

