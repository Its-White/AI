#include "MathsLibrary.h"



MathsLibrary::MathsLibrary()
{
}


MathsLibrary::~MathsLibrary()
{
}

float MathsLibrary::degtoRad(float x)
{
	return x / radian;
}

float MathsLibrary::radToDeg(float x)
{
	return x * radian;
}

float MathsLibrary::sineRule(float A, float b, float B)
{
	return b / sin(degtoRad(B)) * sin(degtoRad(A));
}

float MathsLibrary::cosineRuleAngle(float a, float b, float c)
{
	return radToDeg(acos((b*b + c*c - a*a) / (2 * b*c)));
}

