#ifndef MY_SFML_FUNCTIONS_HPP
#define MY_SFML_FUNCTIONS_HPP

#include "SFML/System/Vector2.hpp"
#include "Utils.hpp"

struct Vector2fResult
{
    sf::Vector2f value;
    ErrorCode error;
};

Vector2fResult vectorDivide(const sf::Vector2f& vec1, const sf::Vector2f& vec2);

#endif
