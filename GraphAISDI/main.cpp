// GraphAISDI

// Bartlomiej Kulik
// 25.01.2018

#include <iostream>
#include <vector>

#include "Graph.h"
#include "MakeGraph.h"
#include "CheckBridges.h"
#include "ShowBridges.h"

int main()
{
    Graph grafik = MakeGraph::makeGraphFromStdIn();

    std::vector<Edge> toWrite = CheckBridges::bridges(grafik);

    Edge edge;
    for (auto i = toWrite.begin(); i < toWrite.end(); ++i)
    {
        edge = *i;

        std::cout << edge.vertexOne << " " << edge.vertexTwo << "\n";
    }

    std::cout << "\n";
	std::cin.get();
	std::cin.get();

	return 0;
}
