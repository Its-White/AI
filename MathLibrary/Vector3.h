#pragma once
/*
Class for 3D Vector
*/

class Vector3
{
public:
	union { // access the one piece of memory from different types
		struct {
			float x, y, z;
		};
		float values[3];
	};
	Vector3();
	Vector3(float inx, float iny, float inz);
	~Vector3();

	Vector3 operator + (Vector3 other); // overload + to add vectors
	Vector3 operator - (Vector3 other); // overload - to subtract vectors
	Vector3 operator * (float num);		// overload * to times vector by float
	friend Vector3 operator * (float num, Vector3 other);

	//Vector3 operator * (Matrix3 matrix); //incomplete
	float magnitude();					//find magnitude
	void normalise();					//normalise vector	
	float dot(Vector3 other);			// dot product
	Vector3 cross(Vector3 other);			// cross product

	float& operator [](int index);
	operator float*() { return (float*)this; }; // pointer to the start of the class in memory
};

