#include "Cursor.h"

Cursor::Cursor()
{
}


Cursor::~Cursor()
{
}

bool Cursor::cursor_enter_window(GLFWwindow * window, bool entered, double *posx, double *posy)
{

	if (entered) 
	{
		glfwSetCursorPos(window, *posx, *posy);
		return true;
	}
	return false;
}
