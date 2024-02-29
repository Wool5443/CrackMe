#include "Button.hpp"

Button::Button(sf::Vector2f position, sf::Vector2f size)
{
    this->shape = sf::RectangleShape(size);
    this->shape.setPosition(position);
}

Button::~Button()
{
}

void Button::setPosition(sf::Vector2f position)
{
    this->shape.setPosition(position);
}

void Button::setSize(sf::Vector2f size)
{
    this->shape.setSize(size);
}

void Button::setColor(sf::Color idleColor, sf::Color hoverColor, sf::Color clickColor)
{
    this->idleColor = idleColor;
    this->hoverColor = hoverColor;
    this->clickColor = clickColor;
}

void Button::render(sf::RenderTarget* renderer)
{
}
