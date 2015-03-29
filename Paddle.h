#pragma once
class Paddle
{
public:
	Paddle();
	~Paddle();

	void Update(double);
	void Render();

private:
	sf::RectangleShape _paddle;

	float _velocity;
};

