#pragma once
#include <string>
using namespace std;

class Vector2 {
public:
	// Members
	float x;
	float y;

	// Constructors
	Vector2() :x(0), y(0) {};
	Vector2(float _x, float _y);

	// static members
	static Vector2 up;
	static Vector2 right;
	static Vector2 down;
	static Vector2 left;
	static Vector2 zero;
	static Vector2 one;

	// Methods
	float angle(const Vector2 b);
	float cross(const Vector2& b);
	float distance(const Vector2& b);
	float dot(const Vector2& b);
	float length();
	Vector2 normalized();
	void normalize();
	Vector2 scale(Vector2 b);
	void set(float _x, float _y);
	string toString();

	// Overloading operators 
	Vector2 operator+(const Vector2& b);
	Vector2 operator-(const Vector2& b);
	Vector2 operator*(const int b);
	Vector2 operator/(const int b);
};
