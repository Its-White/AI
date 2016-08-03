#include "Graph.h"

int UNIT_LENGTH = 32;

Graph::Graph()
{
}


Graph::~Graph()
{
}

Node * Graph::addNode(Vector2 Position)
{
	
}

void Graph::addConnection()
{
	for (int i = 0; i < node.size(); i++)
	{
		
	}
}

void Graph::FindDijkstra(Node * start, const std::list<Node*>& outPath)
{
}

void Graph::FindNodesInRange(std::vector<Node*>& outNodes, float xPos, float yPos, float radius)
{

}

void Graph::nodeGrid(Vector2 a) //a.x is the width of the screen, a.y is the height
{
	Node temp(a);
	for (int i = 0; i < a.x / UNIT_LENGTH; i++)
	{
		for (int j = 0; j < a.y / UNIT_LENGTH; j++)
		{
			addNode(a);					//adds nodes equal to SCREEN_SIZE
			node.push_back(temp);		//pushes all nodes into a vector
			openList.push_back(temp);	//pushes all nodes into an openList

			// TODO: we want to traverse the nodes towards the cursor position and then add the nodes the enemy
			// has gone to to a closedList
		}
	}
}

