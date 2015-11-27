#pragma once

struct Graph;

Graph* createGraph(int vertex);

void setWeight(Graph* graph, int vertex1, int vertex2, int weight);

int getWeight(Graph* graph, int vertex1, int vertex2);

bool hasEdge(Graph* graph, int vertex1, int vertex2);

int getVertexNumber(Graph* graph);

void deleteGraph(Graph* graph);