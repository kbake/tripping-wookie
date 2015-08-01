#include "stdafx.h"
#include "Brick.h"


Brick::Brick()
{
}

Brick::Brick(sf::Vector2f& size)
{
  _brick.setSize(size);
}

Brick::~Brick()
{
}

void Brick::Update(const double delta)
{
  // check to see if it should move or be removed or whatever
}