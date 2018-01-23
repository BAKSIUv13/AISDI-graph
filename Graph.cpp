#include "Graph.h"

Graph::Graph()
{
	this->verticesTable = nullptr;
	this->size = 0;
}

Graph::Graph(const size_t & graphSize)
{
	this->verticesTable = new std::vector<unsigned int>[graphSize];
	this->size = graphSize;
}

Graph::~Graph()
{
	delete[] this->verticesTable;
}

bool Graph::isEmpty() const
{
	return this->size == false;
}

void Graph::addEdge(const unsigned int & sourceVertex, const unsigned int & neighborVertex)
{
	if (isEmpty() == true)
	{
		throw std::exception("Adding edge to empty graph");
	}

	this->verticesTable[sourceVertex].push_back(neighborVertex);
}

void Graph::addDoubleEdge(const unsigned int & vertexOne, const unsigned int & vertexTwo)
{
	addEdge(vertexOne, vertexTwo);
	addEdge(vertexTwo, vertexOne);
}
