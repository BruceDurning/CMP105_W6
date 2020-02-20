#include "Ball.h"

Ball::Ball() {

}

Ball::~Ball()
{
}

void Ball::update(float dt, sf::Vector2u screen) {
	sf::Vector2f pos = stepVelocity * dt + 0.5f* gravity * dt * dt;
	stepVelocity += gravity * dt;
	setPosition(getPosition() + pos);

	if (getPosition().y >= screen.y-40) {
		setPosition(getPosition().x, screen.y-40);
		stepVelocity =(-stepVelocity) /1.2f;
	}
	else if (getPosition().y <= 0) {
		setPosition(getPosition().x, 0);
		stepVelocity = (-stepVelocity) / 1.2f;
	}
}
//ramsey