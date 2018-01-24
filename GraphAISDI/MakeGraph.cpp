#include "MakeGraph.h"

Graph MakeGraph::makeGraphFromStdIn()
{
    size_t graphSize;
    std::cin >> graphSize;

    if (graphSize == 0)
    {
        throw std::logic_error("graphSize is NULL");
    }

    Graph graph(graphSize);
    unsigned int vertexOne, vertexTwo;

    while ((std::cin >> vertexOne) && (std::cin >> vertexTwo))
    {
        graph.addEdge(vertexOne, vertexTwo);
    }

    return graph;
}
