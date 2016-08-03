#include "Matrix2.h"
#include <math.h>


Matrix2::Matrix2()
{
	// construct as identity matrix
	m[0][0] = 1;	m[0][1] = 0;
	m[1][0] = 0;	m[1][1] = 1;
}

Matrix2::Matrix2(float x1, float x2, float y1, float y2)
{
	// storing vectors as row major
	m[0][0] = x1;	m[0][1] = y1;
	m[1][0] = x2;	m[1][1] = y2;
}


Matrix2::~Matrix2()
{
}

Vector2 & Matrix2::operator[](int index)
{
	return m[index];
}

Matrix2 Matrix2::operator*(Matrix2 other)
{
	Matrix2 Result;

	Result[0][0] = m[0][0] * other[0][0] + m[0][1] * other[1][0];
	Result[0][1] = m[0][0] * other[0][1] + m[0][1] * other[1][1];

	Result[1][0] = m[1][0] * other[0][0] + m[1][1] * other[1][0];
	Result[1][1] = m[1][0] * other[0][1] + m[1][1] * other[1][1];
	return Result;
}

Vector2 Matrix2::operator*(Vector2 v)
{
	Vector2 result;
	result.x = m[0][0] * v.x + m[0][1] * v.y;
	result.y = m[1][0] * v.x + m[1][1] * v.y;
	return result;
}

void Matrix2::setRotateZ(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);
	m[0][0] = cosTheta;
	m[0][1] = -sinTheta;
	m[1][0] = sinTheta;
	m[1][1] = cosTheta;
}
