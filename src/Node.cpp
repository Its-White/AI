#include "Node.h"

Node::Node()
{
	pos.x = 0;
	pos.y = 0;
	gScore = 0;
	parent = nullptr;
}

Node::Node(Vector2 a_pos)
{
	pos.x = a_pos.x;
	pos.y = a_pos.y;

	gScore = 0;
	parent = nullptr;
}

Node::Node(Vector2 a_pos, float a_gScore, Node * a_parent)
{
	pos.x = a_pos.x;
	pos.y = a_pos.y;

	gScore = a_gScore;

	parent = a_parent;
}

Node::~Node()
{
}

Vector2 Node::getNodePos()
{
	return pos;
}

