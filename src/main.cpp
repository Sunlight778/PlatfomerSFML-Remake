//
// Created by Simon on 08/10/2022.
//

#include "iostream"
#include <SFML/Graphics.hpp>

int main()
{
    std::cout << "You should see a window that opens as well as this writing to console..."
              << std::endl;

    // create window and set up
    sf::RenderWindow window(sf::VideoMode(1080, 720), "Adventure fox HD");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        sf::Event event{};

        while(window.pollEvent(event))
        {
            switch (event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }
    }

    return 0;
}