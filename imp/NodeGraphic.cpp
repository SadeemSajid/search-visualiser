#include "../head/Node.h"
#include "../head/NodeGraphic.h"

NodeGraphic::NodeGraphic(int _id, Vector2f _position) : Node(_id), position(_position), sprite(10.0f), color(0xe5e5e5ff)
{
    sprite.setFillColor(color);
    sprite.setOutlineThickness(1.0f);
    sprite.setOutlineColor(Color::Black);
    sprite.setPosition(position);
}

void NodeGraphic::SetPosition(Vector2f _position)
{
    position = _position;
    sprite.setPosition(position);
}

Vector2f NodeGraphic::GetPosition()
{
    return position;
}

void NodeGraphic::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(sprite);
}

void NodeGraphic::ChangeColor(Color _color)
{
    sprite.setFillColor(_color);
}