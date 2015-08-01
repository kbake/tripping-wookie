#pragma once

/*
  Should encompass all that makes up a ball
*/
class Ball : public GameEntity
{
public:
	Ball();
  Ball(float);
	~Ball();

	// update the ball, see if it's hit anything or gone off course, otherwise just keep moving
	void Update(const double);

private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
  {
    target.draw(_ball);
  }

	// the ball itself
	sf::CircleShape _ball;

	// something to handle how fast the ball moves
	float _velocity;
};

