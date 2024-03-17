#include "../head/Node.h"
#include "../head/NodeGraphic.h"

NodeGraphic::NodeGraphic(int _id, Vector2f _position) : Node(_id), position(_position), sprite(4.0f)
{
    color = Color::Black;
    sprite.setFillColor(color);
    sprite.setOutlineThickness(2.0f);
    sprite.setPosition(position);
}

void NodeGraphic::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(sprite);
}