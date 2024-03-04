#include <math.h>
#include "MySFMLFunctions.hpp"

Vector2fResult vectorDivide(const sf::Vector2f& vec1, const sf::Vector2f& vec2)
{
    MyAssertSoftResult(vec2.x != 0 && vec2.y != 0, sf::Vector2f(NAN, NAN), ERROR_ZERO_DIVISION);
    return { sf::Vector2f(vec1.x / vec2.x, vec1.y / vec2.y), EVERYTHING_FINE };
}
