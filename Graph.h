#pragma once

#include <vector>
#include <stdexcept>

class Graph
{
private:

	size_t size;
	std::vector<unsigned int>* verticesTable;

public:

	Graph();
	Graph(const size_t & graphSize);
	virtual ~Graph();

	bool isEmpty() const;
	// source vertex ----------> neighborVertex
	void addEdge(const unsigned int & sourceVertex, const unsigned int & neighborVertex); 
	void addDoubleEdge(const unsigned int & vertexOne, const unsigned int & vertexTwo);

};

