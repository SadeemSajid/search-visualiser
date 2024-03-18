#include "head/NodeGraphic.h"

using namespace sf;

int main()
{
    // Target window

    RenderWindow window(VideoMode(900, 600), "Search Visualiser");

    NodeGraphic node(1, Vector2f(100, 100));

    // Lines

    VertexArray divider_0(LinesStrip, 2);
    divider_0[0].position = Vector2f(300, 0);
    divider_0[0].color = Color::Black;
    divider_0[1].position = Vector2f(300, 600);
    divider_0[1].color = Color::Black;

    VertexArray divider_1(LinesStrip, 2);
    divider_1[0].position = Vector2f(600, 0);
    divider_1[0].color = Color::Black;
    divider_1[1].position = Vector2f(600, 600);
    divider_1[1].color = Color::Black;

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            // Close on pressing Escape

            if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
                window.close();
        }

        // Drawing Area

        window.clear(Color::White);

        // Drawing nodes
        window.draw(node);

        // Drawing Lines
        window.draw(divider_0);
        window.draw(divider_1);

        window.display();
    }

    return 0;
}