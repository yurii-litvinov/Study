#include <iostream>

using namespace std;

struct Graph
{
	int ** array;
	int vertexNumber;
};

Graph* createGraph(int vertex)
{
	Graph *graph = new Graph;
	graph->array = new int*[vertex];
	for (int i = 0; i < vertex; ++i)
	{
		graph->array[i] = new int[vertex];
	}
	for (int i = 0; i < vertex; ++i)
	{
		for (int j = 0; j < vertex; ++j)
		{
			graph->array[i][j] = 0;
		}
	}
	graph->vertexNumber = vertex;
	return graph;
}

void setWeight(Graph* graph, int vertex1, int vertex2, int weight)
{
	graph->array[vertex1][vertex2] = weight;
	graph->array[vertex2][vertex1] = weight;
}

int getWeight(Graph* graph, int vertex1, int vertex2)
{
	return graph->array[vertex1][vertex2];
}

bool hasEdge(Graph* graph, int vertex1, int vertex2)
{
	return graph->array[vertex1][vertex2] != 0;
}

int getVertexNumber(Graph* graph);

void deleteGraph(Graph* graph);