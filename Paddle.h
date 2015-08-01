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
	sf::RectangleShape _paddle;
	float _velocity;
};

