#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;
	ball.setSize(sf::Vector2f(40, 40));
	ball.setFillColor(sf::Color::Red);
	ball.setPosition(sf::Vector2f(500, 0));
	// initialise game objects

}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	ball.setInput(input);
}

// Update game objects
void Level::update(float dt)
{
	sf::Vector2u screen = window->getSize();
	ball.update(dt, screen);
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(ball);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}