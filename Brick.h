#pragma once

/*
  Should encompass all that it means to be a brick...and to break
*/
class Brick : public GameEntity
{
public:
	Brick();
  Brick(sf::Vector2f&);
	~Brick();

	void Update(const double);

private:
  virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
  {
    target.draw(_brick);
  }

	sf::RectangleShape _brick;
};

