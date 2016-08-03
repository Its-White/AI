#pragma once
/*
Class for 2D matrix
*/
#include "Vector2.h"
class Matrix2
{
public:

	// at some point, we may want to convert this to a union
	Vector2 m[2];
	
	Matrix2();
	// constructor receives column major input
	Matrix2(float x1, float x2, float y1, float y2);
	~Matrix2();

	Vector2 & operator [] (int index); // [] operator returns the individual vec2s
	Matrix2 operator * (Matrix2 other);
	operator float*() { return (float*)m; }; // pointer to the start of the class in memory
	
	Vector2 operator * (Vector2 v); // multiply a vector
	void setRotateZ(float radians); // set rotation of matrix
};