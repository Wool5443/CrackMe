#include <vector>
#include "WindowProperties.hpp"
#include "ButtonManager.hpp"
#include "Cracker.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);
    sf::RectangleShape background(sf::Vector2f((float)WINDOW_WIDTH, (float)WINDOW_HEIGHT));

    const char* path = "aboba";


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::Resized:
                    break;
                case sf::Event::MouseButtonPressed:
                    break;
            }
        }
        window.clear();
        window.draw(background);
        window.draw(crackButton);
        window.display();
    }

    return 0;
}