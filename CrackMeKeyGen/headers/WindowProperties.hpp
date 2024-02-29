#ifndef WINDOW_PROPERTIES_HPP
#define WINDOW_PROPERTIES_HPP

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"

static const uint32_t  WINDOW_WIDTH     = 400;
static const uint32_t  WINDOW_HEIGHT    = 600;
static const char*     WINDOW_TITLE     = "KeyGen";
static const sf::Color BACKGROUND_COLOR = sf::Color::White;

static const int BUTTONS_NUMBER = 1;

static const sf::Vector2f CRACK_BUTTON_SIZE  = sf::Vector2f(200.0f, 100.0f);
static const sf::Vector2f CRACK_BUTTON_POS   = sf::Vector2f(100.0f, 450.0f);
static const sf::Color    CRACK_BUTTON_COLOR = sf::Color::Red;

#endif
