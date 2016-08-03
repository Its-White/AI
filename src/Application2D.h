#pragma once

#include "BaseApplication.h"
#include <vector>

class SpriteBatch;
class Texture;
class Font;
class GameObject;
class Node;

class Application2D : public BaseApplication {
private:
	static Application2D* m_pInstance;

public:
	static Application2D* getInstance();

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual bool update(float deltaTime);
	virtual void draw();

	bool IsKeyDown(int key) {return BaseApplication::isKeyPressed(key);}

	std::vector<GameObject *>&  getObjects() { return objects; }; // returning a reference so has the potential for other classes to change things

	void save(); // save current (write the vector of game objects to disk)
	void load(); // load from file (read the vector of game objects from disk,
				 // then reinitialise their texture pointers

protected:

	SpriteBatch*	m_spriteBatch;
	Font*			m_font;
	
	GameObject* m_pPlayer;
	std::vector<GameObject *> objects;
	std::string saveFile = "gameSave.sav";

	bool m_bPause;
};