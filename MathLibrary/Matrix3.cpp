#include "Matrix3.h"
#include <math.h>


Matrix3::Matrix3()
{
	// construct as identity matrix
	m[0][0] = 1;	m[0][1] = 0;	m[0][2] = 0;

	m[1][0] = 0;	m[1][1] = 1;	m[1][2] = 0;

	m[2][0] = 0;	m[2][1] = 0;	m[2][2] = 1;
}


Matrix3::Matrix3(float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3)
{
	// storing vectors as row major
	m[0][0] = x1;	m[0][1] = y1;	m[0][2] = z1;

	m[1][0] = x2;	m[1][1] = y2;	m[1][2] = z2;

	m[2][0] = x3;	m[2][1] = y3;	m[2][2] = z3;
}

Matrix3::~Matrix3()
{
}

Vector3 & Matrix3::operator[](int index)
{
	return m[index];
}

Matrix3 Matrix3::operator*(Matrix3 other)
{
	Matrix3 Result;

	Result[0][0] = m[0][0] * other[0][0] + m[0][1] * other[1][0] + m[0][2] * other[2][0];
	Result[0][1] = m[0][0] * other[0][1] + m[0][1] * other[1][1] + m[0][2] * other[2][1];
	Result[0][2] = m[0][0] * other[0][2] + m[0][1] * other[1][2] + m[0][2] * other[2][2];

	Result[1][0] = m[1][0] * other[0][0] + m[1][1] * other[1][0] + m[1][2] * other[2][0];
	Result[1][1] = m[1][0] * other[0][1] + m[1][1] * other[1][1] + m[1][2] * other[2][1];
	Result[1][2] = m[1][0] * other[0][2] + m[1][1] * other[1][2] + m[1][2] * other[2][2];

	Result[2][0] = m[2][0] * other[0][0] + m[2][1] * other[1][0] + m[2][2] * other[2][0];
	Result[2][1] = m[2][0] * other[0][1] + m[2][1] * other[1][1] + m[2][2] * other[2][1];
	Result[2][2] = m[2][0] * other[0][2] + m[2][1] * other[1][2] + m[2][2] * other[2][2];

	return Result;
}

Vector3 Matrix3::operator*(Vector3 v)
{
	Vector3 result;
	result.x = m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z;
	result.y = m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z;
	result.z = m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z;
	return result;
}

void Matrix3::setRotateX(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[1][1] = cosTheta;	m[1][2] = -sinTheta;

	m[2][1] = sinTheta;	m[2][2] = cosTheta;
}

void Matrix3::setRotateY(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[0][0] = cosTheta;		m[0][2] = sinTheta;

	m[1][1] = 1;

	m[2][0] = -sinTheta;	m[2][2] = cosTheta;
}

void Matrix3::setRotateZ(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[0][0] = cosTheta;		m[0][1] = sinTheta;

	m[1][0] = -sinTheta;		m[1][1] = cosTheta;

	m[2][2] = 1;
}
