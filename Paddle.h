#pragma once

/*
  Defines what makes a paddle tick
*/
class Paddle : public GameEntity
{
public:
	Paddle();
	~Paddle();

	void Update(const double);
	void Render();

private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
    target.draw(_paddle);
  }

	sf::RectangleShape _paddle;
	float _velocity;
};

