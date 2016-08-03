#pragma once
/*
Class for 3D matrix
*/
#include "Vector3.h"

class Matrix3
{
public:
	// at some point, we may want to convert this to a union
	Vector3 m[3];

	Matrix3();
	// constructor receives column major input
	Matrix3(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3);
	~Matrix3();

	Vector3 & operator [] (int index); // [] operator returns the individual vec2s
	Matrix3 operator * (Matrix3 other);
	operator float*() { return (float*)m; }; // pointer to the start of the class in memory

	Vector3 operator * (Vector3 v); // multiply a vector
	void setRotateX(float radians); // set rotation of matrix
	void setRotateY(float radians); // set rotation of matrix
	void setRotateZ(float radians); // set rotation of matrix

};

