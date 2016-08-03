#include "Vector4.h"
#include <math.h>


Vector4::Vector4()
{
}

Vector4::Vector4(float inx, float iny, float inz, float inw)
{
	x = inx;
	y = iny;
	z = inz;
	w = inw;
}

Vector4::~Vector4()
{
}

Vector4 Vector4::operator+(Vector4 other)
{
	Vector4 result;

	result.x = x + other.x; // this accesses x via member variables
	result[1] = values[1] + other[1]; // this accesses y via subscript
	result[2] = values[2] + other[2]; // this accesses z via subscript
	result[3] = values[3] + other[3]; // this accesses w via subscript

	return result;
}

Vector4 Vector4::operator-(Vector4 other)
{
	Vector4 result;

	result.x = x - other.x; // this accesses x via member variables
	result[1] = values[1] - other[1]; // this accesses y via subscript
	result[2] = values[2] - other[2]; // this accesses z via subscript
	result[3] = values[3] - other[3]; // this accesses w via subscript

	return result;
}

Vector4 Vector4::operator*(float num)
{
	Vector4 result;

	result.x = x * num; // this accesses x via member variables
	result[1] = values[1] * num; // this accesses y via subscript
	result[2] = values[2] * num; // this accesses z via subscript
	result[3] = values[3] * num; // this accesses w via subscript

	return result;
}

float Vector4::magnitude()
{
	//Pythagoras’ Theorem
	//x is a, y is b, c is magnitude
	return  sqrt((x * x) + (y * y) + (z * z));
}

void Vector4::normalise()
{
	float mag = magnitude();
	x = x / mag;
	y = y / mag;
	z = z / mag;
	w = w / mag;
}

float Vector4::dot(Vector4 other)
{
	return x * other.x + y * other.y + z * other.z + w * other.w;
}

Vector4 Vector4::cross(Vector4 other)
{
	Vector4 Result;

	Result[0] = values[1] * other[2] - values[2] * other[1];
	Result[1] = values[2] * other[0] - values[0] * other[2];
	Result[2] = values[0] * other[1] - values[1] * other[0];
	Result[3] = 0;

	return Result;
}

float & Vector4::operator[](int index)
{
	return values[index];
}

Vector4 operator*(float num, Vector4 other)
{
	Vector4 result;

	result.x = other.x * num; // this accesses x via member variables
	result[1] = other.values[1] * num; // this accesses y via subscript
	result[2] = other.values[2] * num; // this accesses z via subscript
	result[3] = other.values[3] * num; // this accesses w via subscript

	return result;
}
