#include "../head/Node.h"

Node::Node(int _id) : id(_id), explored(false), visited(false) {}

bool Node::isExplored() { return explored; }
bool Node::isVisited() { return visited; }

void Node::visit() { visited = true; }
void Node::explore() { explored = true; }