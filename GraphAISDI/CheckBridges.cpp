#include "CheckBridges.h"

void CheckBridges::dfs(const Graph& graph, std::vector<bool>& isVisited, unsigned int vertex)
{
    if (isVisited[vertex] == true)
    {
        return;
    }
    else
    {
        isVisited[vertex] = true;

        for (unsigned int i = 0; i < graph.getSize(); ++i)
        {
            if (graph.isEdge(vertex, i))
            {
                dfs(graph, isVisited, i);
            }
        }
    }
}

bool CheckBridges::isBridge(const Graph& graph, const unsigned int& x, const unsigned int& y)
{


    std::vector<bool> isVisited(graph.getSize(), false);
    isVisited[x] = true;
    isVisited[y] = true;

    unsigned int z = 0;

    while (isVisited[z] == true)
    {
        ++z;
    }

    dfs(graph, isVisited, z); // DFS run

    for(unsigned int i = 0; i < graph.getSize() ; ++i)
    {
        if(!isVisited[i])
        {
            return true;
        }
    }

    return false;



}

std::vector<Edge> CheckBridges::bridges(const Graph& graph)
{



    std::vector<Edge> bridges;
    Edge bridge;

    if (graph.getSize() < 3)
    {
        return bridges;
    }

    for (unsigned int i = 0; i < graph.getSize() - 1; ++i)
    {

        for (unsigned int j = i + 1; j < graph.getSize(); ++j)
        {
            if(graph.isEdge(i, j))
            {
                // since ther OK

                if (isBridge(graph, i, j))
                {
                    bridge.vertexOne = i;
                    bridge.vertexTwo = j;

                    bridges.push_back(bridge);
                }
            }


        }

    }

    return bridges;
}
