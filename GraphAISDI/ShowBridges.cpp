#include "ShowBridges.h"

void ShowBridges::show(const Graph& graph)
{

    std::vector<Edge> toWrite = CheckBridges::bridges(graph);

    Edge edge;
    for (auto i = toWrite.begin(); i < toWrite.end(); ++i)
    {
        edge = *i;

        std::cout << edge.vertexOne << " " << edge.vertexTwo << "\n";
    }


}
