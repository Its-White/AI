/*
	Created:		9th June 2016
	Last Edited:	16th June 2016

	Alex Armstrong (alexarmstrong.business@gmail.com)

	Game Object that allows a sprite to be controlled using matrices
	and can work with matrix hierarchy.
*/

#pragma once

#include "MathsLibrary.h"
#include <string>
#include "Node.h"

class SpriteBatch;
class Texture;

class GameObject
{
public:
	GameObject();
	~GameObject();

	float m_rotation;
	Vector3 m_position;

	void Update(float dt, bool a);
	void Draw(SpriteBatch* batch);
	const Matrix3 & getWorldTransform() { return worldTransform; };	// Return the World Transform of this object
	const Matrix3 & getLocalTransform() { return localTransform; };

	void setPosition(float x, float y);	// Set the local position
	void setRotate(float x);
	void setLocal();
	void setNode(Node* a);
	Vector3 setScale(Vector3 x);
	Vector2 getPosition();
	Vector2 cursorPos;
	float getPositionX();
	float getPositionY();
	char* getXY();
	void setParent(int p) { parent = p; };	// Set parent
	void setSprite(std::string filename);	// Set the local filename for the sprite
	void loadSprite();						// Loads sprite from stored filename
	void setAABB(Vector2 min, Vector2 max);

	Vector3 mousePosition;
protected:
	Texture* m_sprite;
	std::string spriteFile;

	Matrix3 localTransform;
	Matrix3 worldTransform;

	

	Vector3 m_velocity;

	Vector2 positionMin;
	Vector2 positionMax;

	Vector3 m_scale;

	int parent;
	char* text;
};
