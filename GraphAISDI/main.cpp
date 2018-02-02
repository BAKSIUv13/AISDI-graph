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
    ShowBridges::show(MakeGraph::makeGraphFromStdIn());
	return 0;
}
