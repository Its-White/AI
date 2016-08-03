#pragma once
#include"Node.h"

class Path
{
public:
	Path();
	Path(Node* a_connection);
	Path(Node* a_connection, float a_cost);
	~Path();

private:
	float cost;
	Node *connection;

	std::vector<Vector2*> distance;

};