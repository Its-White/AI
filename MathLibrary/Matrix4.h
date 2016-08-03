#pragma once

/*
Class for 4D matrix
*/

#include "Vector4.h"

class Matrix4
{
public:
	// at some point, we may want to convert this to a union
	Vector4 m[4];
	Matrix4();
	// constructor receives column major input
	Matrix4(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float z1, float z2, float z3, float z4, float w1, float w2, float wz3, float w4);
	~Matrix4();

	Vector4 & operator [] (int index); // [] operator returns the individual vec2s
	Matrix4 operator * (Matrix4 other);
	operator float*() { return (float*)m; }; // pointer to the start of the class in memory

	Vector4 operator * (Vector4 v); // multiply a vector
	void setRotateX(float radians); // set rotation of matrix
	void setRotateY(float radians); // set rotation of matrix
	void setRotateZ(float radians); // set rotation of matrix
};

