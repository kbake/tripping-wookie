#include "stdafx.h"
#include "Paddle.h"


Paddle::Paddle()
{
}

Paddle::Paddle(sf::Vector2f& size)
{
  _paddle.setSize(size);
}

Paddle::~Paddle()
{
}

void Paddle::Update(const double delta)
{
	// update the paddle accordingly
}