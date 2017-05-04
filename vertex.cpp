/*************************************
 * Jordan Scandlyn
 * 916435330
 * Jordan.Scandlyn@zazzle.com
 * G++
 *************************************/
#include "vertex.h"

Vertex::Vertex(char c)
{
    label = c;
}

void Vertex::addEdge(char c)
{
    edges.push_back(c);
}

char Vertex::getLabel()
{
    return label;
}
const vector<char> Vertex::getEdges()
{
    return this->edges;
}