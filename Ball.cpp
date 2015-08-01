#include "stdafx.h"
#include "Ball.h"


Ball::Ball()
{
}

Ball::Ball(float radius)
{
  _ball.setRadius(radius);
}

Ball::~Ball()
{
}

void Ball::Update(const double delta)
{
	// update the ball (checking to see if it hit anything and moving accordingly)
}