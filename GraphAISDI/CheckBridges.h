#ifndef CheckBridges_defined
#define CheckBridges_defined

#include <iostream>
#include <vector>
#include <stdexcept>
#include <queue>

#include "Graph.h"

class CheckBridges
{
private:

    static void dfs(const Graph& graph, std::vector<bool>& isVisited, unsigned int vertex);

public:

    static bool isBridge(const Graph& graph, const unsigned int& vertexOne, const unsigned int& vertexTwo);

    static std::vector<Edge> bridges(const Graph& graph);

};

#endif
