#include "Matrix4.h"
#include <math.h>

Matrix4::Matrix4()
{
	// construct as identity matrix
	m[0][0] = 1;	m[0][1] = 0;	m[0][2] = 0;	m[0][3] = 0;

	m[1][0] = 0;	m[1][1] = 1;	m[1][2] = 0;	m[1][3] = 0;

	m[2][0] = 0;	m[2][1] = 0;	m[2][2] = 1;	m[2][3] = 0;

	m[3][0] = 0;	m[3][1] = 0;	m[3][2] = 0;	m[3][3] = 1;
}


Matrix4::Matrix4(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4, float z1, float z2, float z3, float z4, float w1, float w2, float w3, float w4)
{
	// storing vectors as row major
	m[0][0] = x1;	m[0][1] = y1;	m[0][2] = z1;	m[0][3] = w1;

	m[1][0] = x2;	m[1][1] = y2;	m[1][2] = z2;	m[1][3] = w2;

	m[2][0] = x3;	m[2][1] = y3;	m[2][2] = z3;	m[2][3] = w3;

	m[3][0] = x4;	m[3][1] = y4;	m[3][2] = z4;	m[3][3] = w4;
}

Matrix4::~Matrix4()
{
}

Vector4 & Matrix4::operator[](int index)
{
	return m[index];
}

Matrix4 Matrix4::operator*(Matrix4 other)
{
	Matrix4 Result;	

	Result[0][0] = m[0][0] * other[0][0] + m[0][1] * other[1][0] + m[0][2] * other[2][0] + m[0][3] * other[3][0];
	Result[0][1] = m[0][0] * other[0][1] + m[0][1] * other[1][1] + m[0][2] * other[2][1] + m[0][3] * other[3][1];
	Result[0][2] = m[0][0] * other[0][2] + m[0][1] * other[1][2] + m[0][2] * other[2][2] + m[0][3] * other[3][2];
	Result[0][3] = m[0][0] * other[0][3] + m[0][1] * other[1][3] + m[0][2] * other[2][3] + m[0][3] * other[3][3];

	Result[1][0] = m[1][0] * other[0][0] + m[1][1] * other[1][0] + m[1][2] * other[2][0] + m[1][3] * other[3][0];
	Result[1][1] = m[1][0] * other[0][1] + m[1][1] * other[1][1] + m[1][2] * other[2][1] + m[1][3] * other[3][1];
	Result[1][2] = m[1][0] * other[0][2] + m[1][1] * other[1][2] + m[1][2] * other[2][2] + m[1][3] * other[3][2];
	Result[1][3] = m[1][0] * other[0][3] + m[1][1] * other[1][3] + m[1][2] * other[2][3] + m[1][3] * other[3][3];

	Result[2][0] = m[2][0] * other[0][0] + m[2][1] * other[1][0] + m[2][2] * other[2][0] + m[2][3] * other[3][0];
	Result[2][1] = m[2][0] * other[0][1] + m[2][1] * other[1][1] + m[2][2] * other[2][1] + m[2][3] * other[3][1];
	Result[2][2] = m[2][0] * other[0][2] + m[2][1] * other[1][2] + m[2][2] * other[2][2] + m[2][3] * other[3][2];
	Result[2][3] = m[2][0] * other[0][3] + m[2][1] * other[1][3] + m[2][2] * other[2][3] + m[2][3] * other[3][3];
	
	Result[3][0] = m[3][0] * other[0][0] + m[3][1] * other[1][0] + m[3][2] * other[2][0] + m[3][3] * other[3][0];
	Result[3][1] = m[3][0] * other[0][1] + m[3][1] * other[1][1] + m[3][2] * other[2][1] + m[3][3] * other[3][1];
	Result[3][2] = m[3][0] * other[0][2] + m[3][1] * other[1][2] + m[3][2] * other[2][2] + m[3][3] * other[3][2];
	Result[3][3] = m[3][0] * other[0][3] + m[3][1] * other[1][3] + m[3][2] * other[2][3] + m[3][3] * other[3][3];
	
	return Result;
}


Vector4 Matrix4::operator*(Vector4 v)
{
	Vector4 result;
	result.x = m[0][0] * v.x + m[0][1] * v.y + m[0][2] * v.z + m[0][3] * v.w;
	result.y = m[1][0] * v.x + m[1][1] * v.y + m[1][2] * v.z + m[0][3] * v.w;
	result.z = m[2][0] * v.x + m[2][1] * v.y + m[2][2] * v.z + m[0][3] * v.w;
	result.w = m[3][0] * v.x + m[3][1] * v.y + m[3][2] * v.z + m[3][3] * v.w;

	return result;
}

void Matrix4::setRotateX(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[1][1] = cosTheta;	m[1][2] = -sinTheta;

	m[2][1] = sinTheta;	m[2][2] = cosTheta;
}

void Matrix4::setRotateY(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[0][0] = cosTheta;		m[0][2] = sinTheta;

	m[2][0] = -sinTheta;	m[2][2] = cosTheta;
}

void Matrix4::setRotateZ(float radians)
{
	// assuming that setRotate replaces the current matrix
	float sinTheta = sin(radians);
	float cosTheta = cos(radians);

	m[0][0] = cosTheta;		m[0][1] = -sinTheta;

	m[1][0] = sinTheta;		m[1][1] = cosTheta;
}