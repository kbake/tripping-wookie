#pragma once
class Brick
{
public:
	Brick();
	~Brick();

	void Update(double);
	void Render();

private:
	sf::RectangleShape _brick;
};

