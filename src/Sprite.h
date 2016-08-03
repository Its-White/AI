#pragma once
#include "SceneNode.h"

class Texture;
class SpriteBatch;

class Sprite : public SceneNode
{
public:
	Sprite(const char* szPath);
	~Sprite();

	void SetLocalTransform(Matrix3 mat3);
			
	void Update(float dt);
	void Draw(SpriteBatch* spritebatch);

private:
	Texture* m_sprite;
};

