#ifndef Graph_defined
#define Graph_defined

#include <iostream>
#include <vector>
#include <stdexcept>

struct Edge
{
    unsigned int vertexOne, vertexTwo;

};

class Graph
{
private:

    size_t size;
    std::vector<std::vector<bool>> matrix; // incident matrix

    void addOneEdge(const unsigned int& vertex, const unsigned int& neighbor);

public:

    Graph(const size_t& size);
    size_t getSize() const;

    void addEdge(const unsigned int& vertexOne, const unsigned int& vertexSecond);
    bool isEdge(const unsigned int& vertexOne, const unsigned int& vertexSecond) const;
};

#endif
