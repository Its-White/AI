#ifndef __GAMEDEFS_H__
#define __GAMEDEFS_H__

#define _USE_MATH_DEFINES
#include <math.h>
#include "MathsLibrary.h" //you'll need to do the static library connection stuff to include this
#include "Application2D.h"
#include <GLFW/glfw3.h>
#include "Cursor.h"
#include "SpriteBatch.h"
#include "Texture.h"
#include "Font.h"
#include "GameObject.h"
#include "Node.h"
#include "Graph.h"
#include "Path.h"
#include <iostream>
#include <math.h>
#include <fstream>
#include <iterator>
#include <string>
#include <cmath>


const int SCREEN_WIDTH = 1280;
const int SCREEN_HEIGHT = 720;
Vector2	  SCREEN_SIZE(1280, 720);

const int HALF_SCRW = SCREEN_WIDTH>>1;
const int HALF_SCRH= SCREEN_HEIGHT>>1;

const float GROUND_Y = 31.85f;

const int PLAYER_HALFH = 150/2;

const int SPEED = 2;
const int GRAVITY = 1;



#endif