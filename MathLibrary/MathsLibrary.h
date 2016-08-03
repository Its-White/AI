#pragma once
/*
Maths Library for calculations
*/
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"

#include <math.h>

//1 radian is 57.2958 degrees
static const float radian = 57.2958f;

class MathsLibrary
{
public:
	MathsLibrary();
	~MathsLibrary();

	//converts degrees to radians
	float degtoRad(float x);

	//converts radians to degrees
	float radToDeg(float x);

	//the Sine Rule for sides
	float sineRule(float A, float b, float B);

	//the Cosine Rule for angles
	float cosineRuleAngle(float a, float b, float c);
};

