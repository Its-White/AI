#include "Vector2.h"
#include <math.h>


Vector2::Vector2()
{
}

Vector2::Vector2(float inx, float iny)
{
	x = inx;
	y = iny;
}


Vector2::~Vector2()
{
}

Vector2 Vector2::operator+(Vector2 other)
{
	Vector2 result;

	result.x = x + other.x; // this accesses x via member variables
	result[1] = values[1] + other[1]; // this accesses y via subscript

	return result;
}

Vector2 Vector2::operator-(Vector2 other)
{
	Vector2 result;

	result.x = x - other.x; // this accesses x via member variables
	result[1] = values[1] - other[1]; // this accesses y via subscript

	return result;
}

Vector2 Vector2::operator*(float num)
{
	Vector2 result;

	result.x = x * num; // this accesses x via member variables
	result[1] = values[1] * num; // this accesses y via subscript

	return result;
}


void Vector2::normalise()
{
	float mag = magnitude();
	x = x / mag;
	y = y / mag;	
}

float Vector2::magnitude()
{
	//Pythagoras’ Theorem
	//x is a, y is b, c is magnitude
	return  sqrt((x * x) + (y * y));
}

float Vector2::dot(Vector2 other)
{
	return x * other.x + y * other.y;
}

float& Vector2::operator[](int index)
{
	return values[index];
}

Vector2 operator*(float num, Vector2 other)
{
	Vector2 result;

	result.x = other.x * num; // this accesses x via member variables
	result[1] = other.values[1] * num; // this accesses y via subscript

	return result;
}
