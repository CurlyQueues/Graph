/*************************************
 * Jordan Scandlyn
 * 916435330
 * Jordan.Scandlyn@zazzle.com
 * G++
 *************************************/
#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

using namespace std;

class Vertex
{
private:
    vector<char> edges;
    char label;
public:
    Vertex(char);
    void addEdge(char);
    char getLabel();
    const vector<char>getEdges();
};

#endif