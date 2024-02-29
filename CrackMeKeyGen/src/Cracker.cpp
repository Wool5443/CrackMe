#include <stdio.h>
#include "Cracker.hpp"

ErrorCode Crack(sf::RectangleShape& button, const char* filePath)
{
    printf("CRACK WAS PRESSSED!!!\n\n");

    if (button.getFillColor() == sf::Color::Red)
        button.setFillColor(sf::Color::Blue);
    else
        button.setFillColor(sf::Color::Red);

    return EVERYTHING_FINE;
}
