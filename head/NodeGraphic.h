#pragma once
#include "Node.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class NodeGraphic : public Drawable, public Node
{
    Color color;
    Vector2f position;
    CircleShape sprite;

public:
    NodeGraphic(int _id, Vector2f _position);

private:
    virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const;
};