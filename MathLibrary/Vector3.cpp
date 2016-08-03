#include "Vector3.h"
#include <math.h>


Vector3::Vector3()
{
}

Vector3::Vector3(float inx, float iny, float inz)
{
	x = inx;
	y = iny;
	z = inz;
}

Vector3 Vector3::operator+(Vector3 other)
{
	Vector3 result;

	result.x = x + other.x; // this accesses x via member variables
	result[1] = values[1] + other[1]; // this accesses y via subscript
	result[2] = values[2] + other[2]; // this accesses z via subscript

	return result;
}

Vector3 Vector3::operator-(Vector3 other)
{
	Vector3 result;

	result.x = x - other.x; // this accesses x via member variables
	result[1] = values[1] - other[1]; // this accesses y via subscript
	result[2] = values[2] - other[2]; // this accesses z via subscript

	return result;
}

Vector3 Vector3::operator*(float num)
{
	Vector3 result;

	result.x = x * num; // this accesses x via member variables
	result[1] = values[1] * num; // this accesses y via subscript
	result[2] = values[2] * num; // this accesses y via subscript

	return result;
}

float Vector3::magnitude()
{
	//Pythagoras’ Theorem
	//x is a, y is b, c is magnitude
	return  sqrt((x * x) + (y * y) + (z * z));
}

void Vector3::normalise()
{
	float mag = magnitude();
	x = x / mag;
	y = y / mag;
	z = z / mag;
}

float Vector3::dot(Vector3 other)
{
	return x * other.x + y * other.y + z * other.z;
}

Vector3 Vector3::cross(Vector3 other)
{
	Vector3 Result;

	Result[0] = values[1] * other[2] - values[2] * other[1];
	Result[1] = values[2] * other[0] - values[0] * other[2];
	Result[2] = values[0] * other[1] - values[1] * other[0];

	return Result;
}

float & Vector3::operator[](int index)
{
	return values[index];
}


Vector3::~Vector3()
{
}

Vector3 operator*(float num, Vector3 other)
{
	Vector3 result;

	result.x = other.x * num; // this accesses x via member variables
	result[1] = other.values[1] * num; // this accesses y via subscript
	result[2] = other.values[2] * num; // this accesses z via subscript

	return result;
}
