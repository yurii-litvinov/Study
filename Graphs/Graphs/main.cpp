#include <iostream>
#include <fstream>
#include "graph.h"

using namespace std;
 
void printMatrix(Graph* graph)
{
	for (int i = 0; i < getVertexNumber(graph); ++i)
	{
		for (int j = 0; j < getVertexNumber(graph); ++j)
		{
			cout << getWeight(graph, i, j) << " ";
		}
		cout << endl;
	}
}

void pathFinder(Graph* graph)
{
	for (int k = 0; k < getVertexNumber(graph); ++k)
	{
		for (int i = 0; i < getVertexNumber(graph); ++i)
		{
			for (int j = 0; j < getVertexNumber(graph); ++j)
			{
				if (!hasEdge(graph, i, k) 
					|| !hasEdge(graph, k, j) 
					|| i == j)
				{
					continue;
				}
				int const weight = getWeight(graph, i, k) 
					+ getWeight(graph, k, j);
				if (getWeight(graph, i, j) > weight
					|| !hasEdge(graph, i, j))
				{
					setWeight(graph, i, j, weight);
				}
			}
		}
	}
}

int main()
{
	const int size = 5;
	Graph* graph = createGraph(size);
	ifstream file("input.txt", ios::in);
	if (!file.is_open())
	{
		cout << "file not found" << endl;
		return 1;
	}
	while (!file.eof())
	{
		for (int i = 0; i < size; ++i)
			for (int j = 0; j < size; ++j)
			{
				int x = 0;
				file >> x;
				setWeight(graph, i, j, x);
			}
	}
	printMatrix(graph);
	pathFinder(graph);
	cout << endl;
	printMatrix(graph);
	return 0;
}