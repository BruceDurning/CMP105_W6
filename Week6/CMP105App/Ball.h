#pragma once
#include "Framework/GameObject.h"


class Ball : public GameObject {
public:
	Ball();
	~Ball();
	void update(float dt, sf::Vector2u screen);
	
protected:
	sf::Vector2f stepVelocity = sf::Vector2f(30, 500);
	sf::Vector2f gravity = sf::Vector2f (0, 9.8);
};