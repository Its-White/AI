#pragma once
#include <vector>
#include <list>
#include "Node.h"
#include "Path.h"

class Graph
{
public:
	Graph();
	~Graph();

	Node* addNode(Vector2 Position);

	void addConnection();
	void FindDijkstra(Node *start, const std::list<Node *> &outPath);
	void FindNodesInRange(std::vector<Node*> &outNodes, float xPos, float yPos, float radius);
	void nodeGrid(Vector2 a);

protected:
	std::list<Node> openList;
	std::list<Node> closedList;
	std::vector<Node>node;

	Node* endNode;
};