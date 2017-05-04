/*************************************
 * Jordan Scandlyn
 * 916435330
 * Jordan.Scandlyn@zazzle.com
 * G++
 *************************************/
#include <queue>
#include <iostream>

#include "graph.h"

void Graph::addEdge(char s, char u)
{
//heyo this is just a comment to show that i can change the file and upload to github
    int cnt = 0;
    if (!vertexExists(s))
        vertices.push_back(s);
    if (!vertexExists(u))
        vertices.push_back(u);

    for (unsigned int i = 0; i < vertices.size() && cnt < 2; i++) {
        if (s == vertices[i].getLabel()) {
            vertices[i].addEdge(u);
            cnt++;
        }
        if (u == vertices[i].getLabel()) {
            vertices[i].addEdge(s);
            cnt++;
        }
    }
}

int Graph::vertexCount()
{
    return vertices.size();
}

bool Graph::vertexExists(char c)
{
    for (unsigned int i = 0; i < vertices.size(); i++) {
        if (vertices[i].getLabel() == c)
            return true;
    }
    return false;
}

bool Graph::pathExists(char s, char u)
{
    vector<bool> marked(vertices.size(), 0);
    queue<vector<char>> list;
    vector<char> tmp;
    
    for (unsigned int i = 0; i < vertices.size(); i++) {
        if (vertices[i].getLabel() == s) {
            list.push(vertices[i].getEdges());
            int j = 0;
            marked[j] = true;
            j++;
            break;
        }
    }
    do {
        tmp = list.front();
        list.pop();

        for (unsigned int i = 0; i < tmp.size(); i++) {
            if (tmp[i] == u)
                return true;
            if (!marked[i]) {
                for (unsigned int i = 0; i < tmp.size(); i++) {
                    for (unsigned int j = 0; j < vertices.size(); j++) {
                        if(vertices[j].getLabel() == tmp[i]) {
                            list.push(vertices[j].getEdges());
                            marked[i] = true;
                        }
                    }
                }
            }
        }
    } while (!list.empty());
    return false;
}
