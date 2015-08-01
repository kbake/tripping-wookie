#pragma once

/*
  Should encompass all that makes up a ball
*/
class Ball : public GameEntity
{
public:
	Ball();
	~Ball();

	// update the ball, see if it's hit anything or gone off course, otherwise just keep moving
	void Update(const double);
	// draw the ball
	void Render();

private:
	// the ball itself
	sf::RectangleShape _ball;

	// something to handle how fast the ball moves
	float _velocity;
};

