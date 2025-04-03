#include <iostream>
#include <SFML/Graphics.hpp>

//enum directions { down, right, up, left };
int main()
{
   /* int i;
    unsigned int width = 640;
    unsigned int height = 360;
    */
    sf::RenderWindow window(sf::VideoMode({ 2500,1500 }), "SFML works!");
   /* sf::Texture texture;
    if (!texture.loadFromFile("Sprite.hpp"))
    {
        return -1; // Error loading the texture
    }

    sf::Sprite sprite(texture);
    sf::IntRect dir[4];

    for (i = 0; i < 4; ++i)
    {
        dir[i] = sf::IntRect({ {32 * i, 0}, {32, 32} });
    }

    sprite.setTextureRect(dir[down]);
    sprite.setOrigin({ 16,16 });
    sprite.setPosition({ width / 2.0f, height / 2.0f });
    */

    while (window.isOpen())
    { 
       
       while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        
        window.clear();
        //drawing purposes
      //  window.draw(sprite);
        window.display();
    }
}