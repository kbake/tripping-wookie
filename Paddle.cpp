#include "stdafx.h"
#include "Paddle.h"


Paddle::Paddle()
{
  _paddle.setSize(sf::Vector2f(20, 10));
}


Paddle::~Paddle()
{
}

void Paddle::Update(const double delta)
{
	// update the paddle accordingly
}

void Paddle::Render()
{
	// draw the paddle accordingly
}