#include <iostream>
#include <SFML/Graphics.hpp>





int main() {


	unsigned int width = 2000;
	unsigned int height = 1500;
	sf::RenderWindow* window = new sf::RenderWindow(sf::VideoMode({ width,height }), "Chess Puzzle Game");
	window->setFramerateLimit(60);

	sf::Font font("Fonts\\jersey10.ttf");

	sf::Text text1(font); 
	text1.setString("Chess Puzzle Game");
	text1.setCharacterSize(100); 
	text1.setFillColor(sf::Color::Green);
	text1.setPosition({ 650,400 });


	sf::Text text2(font);
	text2.setCharacterSize(60);
	text2.setString("Press Enter To Play");
	text2.setFillColor(sf::Color::Green);
	text2.setPosition({ 750,600 });

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
		window->clear();

		//Drawing 
		window->draw(text1);
		window->draw(text2);

		//Display
		window->display();

	}

	delete window;

	return 0;
}
