#include "Graph.h"

Graph::Graph(const size_t& size)
{
    this->size = size;

    std::vector<bool> column(this->size);
    this->matrix.assign(this->size, column);

}

size_t Graph::getSize() const
{
    return this->size;
}

void Graph::addOneEdge(const unsigned int& vertex, const unsigned int& neighbor)
{
    this->matrix[vertex][neighbor] = true;
}

void Graph::addEdge(const unsigned int& vertexOne, const unsigned int& vertexSecond)
{
    if (vertexOne >= this->size || vertexSecond >= this->size)
    {
        throw std::out_of_range("One of given vertex has too big value >= graph size");
    }

    addOneEdge(vertexOne, vertexSecond);
    addOneEdge(vertexSecond, vertexOne);
}

bool Graph::isEdge(const unsigned int& vertexOne, const unsigned int& vertexSecond) const
{
    return this->matrix[vertexOne][vertexSecond];
}

