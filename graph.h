/*************************************
 * Jordan Scandlyn
 * 916435330
 * Jordan.Scandlyn@zazzle.com
 * G++
 *************************************/
#ifndef GRAPH_H
#define GRAPH_H

#include <vector>

#include "vertex.h"

using namespace std;

class Graph {
private:
    vector<Vertex> vertices;
public:
    void addEdge(char, char);
    int vertexCount();
    bool vertexExists(char);
    bool pathExists(char, char);
};

#endif