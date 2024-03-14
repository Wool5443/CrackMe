#include <string>
#include "WindowProperties.hpp"
#include "Cracker.hpp"
#include "MySFMLFunctions.hpp"

const char* PROGRAM_PATH = "res/LOrig.COM";

int main()
{
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE);

    sf::Texture imageTexture;
    MyAssertSoft(imageTexture.loadFromFile(BACKGROUND_IMAGE), ERROR_BAD_FILE);
    Vector2fResult scaleVector = vectorDivide(sf::Vector2f(window.getSize()), sf::Vector2f(imageTexture.getSize()));
    RETURN_ERROR(scaleVector.error);

    sf::Sprite backgroundSprite(imageTexture);
    backgroundSprite.setScale(scaleVector.value);

    sf::Font mainFont;
    MyAssertSoft(mainFont.loadFromFile(MAIN_FONT), ERROR_BAD_FILE);

    sf::Text mainText(CRACK_DESCRIPTOPN, mainFont);
    mainText.setColor(MAIN_TEXT_COLOR);

    sf::SoundBuffer music;
    MyAssertSoft(music.loadFromFile(MUSIC), ERROR_BAD_FILE);

    sf::Sound musicPlayer(music);

    musicPlayer.play();

    bool crackFinished = false;

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
                case sf::Event::KeyPressed:                    
                    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
                    {
                        if (musicPlayer.getStatus() != sf::Sound::Playing)
                            musicPlayer.play();
                        else
                            musicPlayer.pause();
                    }
                    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Enter))
                    {
                        if (crackFinished)
                        {
                            window.close();
                            return 0;
                        }
                        RETURN_ERROR(Crack(PROGRAM_PATH));
                        crackFinished = true;
                    }
                    break;
            }
        }
        window.clear();
        window.draw(backgroundSprite);
        window.draw(mainText);
        window.display();
    }

    return 0;
}
