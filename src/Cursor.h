#pragma once
#include <GLFW/glfw3.h>
#include "Vector2.h"
class Cursor
{
public:
	Cursor();
	~Cursor();

	bool cursor_enter_window(GLFWwindow* window, bool entered, double *posx, double *posy);

protected:
	float posx, posy;
};

