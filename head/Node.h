#pragma once

class Node
{
    int id;
    bool explored;
    bool visited;

public:
    Node(int _id);

    bool isExplored();
    bool isVisited();

    void visit();
    void explore();
};