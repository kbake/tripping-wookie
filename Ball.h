#pragma once

class Ball
{
public:
	Ball();
	~Ball();

	// update the ball, see if it's hit anything or gone off course, otherwise just keep moving
	void Update(double);
	// draw the ball
	void Render();

private:
	// the ball itself
	sf::RectangleShape _ball;

	// something to handle how fast the ball moves
	float _velocity;
};

