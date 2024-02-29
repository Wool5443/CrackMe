#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "SFML/Graphics.hpp"

class Button
{
private:
    sf::RectangleShape shape;
    sf::Font* font;
    sf::Text text;

    sf::Color idleColor;
    sf::Color hoverColor;
    sf::Color clickColor;

public:
    Button(sf::Vector2f position, sf::Vector2f size);
    ~Button();

    void setColor(sf::Color idleColor, sf::Color hoverColor, sf::Color clickColor);
    void setPosition(sf::Vector2f position);
    void setSize(sf::Vector2f size);

    

    void render(sf::RenderTarget* renderer);
};

#endif
