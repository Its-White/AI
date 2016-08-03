#pragma once

/*
Class for 4D Vector
*/

class Vector4
{
public:
	union { // access the one piece of memory from different types
		struct {
			float x, y, z, w;
		};
		float values[4];
	};
	Vector4();
	Vector4(float inx, float iny, float inz, float inw);
	~Vector4();

	Vector4 operator + (Vector4 other); // overload + to add vectors
	Vector4 operator - (Vector4 other); // overload - to subtract vectors
	Vector4 operator * (float num);		// overload * to times vector by float
	friend Vector4 operator * (float num, Vector4 other);

	float magnitude();					//find magnitude
	void normalise();					//normalise vector	
	float dot(Vector4 other);			// dot product
	Vector4 cross(Vector4 other);			// cross product **INCOMPLETE**

	float& operator [](int index);
	operator float*() { return (float*)this; }; // pointer to the start of the class in memory
};

