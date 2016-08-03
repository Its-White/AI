#pragma once
/*
Class for 2D Vector
*/

class Vector2
{
public:
	union { // access the one piece of memory from different types
		struct {
			float x, y;
		};
		float values[2];
	};
	Vector2();
	Vector2(float inx, float iny);
	~Vector2();

	Vector2 operator + (Vector2 other); // overload + to add vectors
	Vector2 operator - (Vector2 other); // overload - to subtract vectors
	Vector2 operator * (float num);		// overload * to times vector by float
	friend Vector2 operator * (float num, Vector2 other);

	float magnitude();					//find magnitude
	void normalise();					//normalise vector	
	float dot(Vector2 other);			// dot product

	float& operator [](int index);
	operator float*() { return (float*)this; }; // pointer to the start of the class in memory
};

