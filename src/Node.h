#pragma once
#include "Vector2.h"
#include <vector>
#include <gl/GL.h>

class Node
{
public:
	Node();
	Node(Vector2 a_pos);
	Node(Vector2 a_pos, float a_gScore, Node *a_parent);
	~Node();
	
	Vector2 getNodePos();
	struct rect {
		float x, y, w, h;
	};

	rect box = { pos.x, pos.y, 32, 32 };

	//We should name the nodes so that we can find them later
protected:
	Vector2 pos;

	float gScore;
	Node *parent;

	std::vector<std::vector<int>> adj; //adjacency matrix
};

Node* GetNodeFromAABB(std::vector<Node*> map, Vector2 n_pos) {
	for (int i = 0; i < map.size(); i++) {
		if (n_pos.x > map[i]->box.x && n_pos.x < map[i]->box.w && n_pos.y > map[i]->box.h && n_pos.x < map[i]->box.y) {
			return map[i];
		}
	}
	return nullptr;
}