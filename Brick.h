#pragma once

/*
  Should encompass all that it means to be a brick...and to break
*/
class Brick : public GameEntity
{
public:
	Brick();
	~Brick();

	void Update(const double);
	void Render();

private:
	sf::RectangleShape _brick;
};

