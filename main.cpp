#include <SFML/Graphics.hpp>
#include "head/NodeGraphic.h"

using namespace sf;

int main()
{
    // Target window

    RenderWindow window(VideoMode(800, 600), "Search Visualiser");

    NodeGraphic node(1, Vector2f(100, 100));

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        // Drawing Area

        window.clear();
        window.draw(node);
        window.display();
    }

    return 0;
}