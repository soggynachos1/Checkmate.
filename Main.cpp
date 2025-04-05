#include <iostream>
#include <SFML/Graphics.hpp>


int main() {

	
	unsigned int width = 2000;
	unsigned int height = 1500;
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ width,height }), "Chess Puzzle Game");
	
	while (window->isOpen()) 
	{
		while (const std::optional event = window->pollEvent())
		{
			if (event->is<sf::Event::Closed>())
			{
				window->close();
			}
			else if (const auto* keyPressed = event->getIf<sf::Event::KeyPressed>())
			{
				if (keyPressed->scancode == sf::Keyboard::Scancode::Escape)
				{
					window->close();
				}
			}
		}
		//Render
		window->clear(sf::Color(0xFF8800FF));

		//Drawing 

		window->display();

	}

	delete window;

	return 0;
}
