#include <cmath>
#include "Vector2.hpp"
#define PI 3.14159265f

Vector2 Vector2::up = Vector2(0.0f, 1.0f);
Vector2 Vector2::right = Vector2(1.0f, 0.0f);
Vector2 Vector2::down = Vector2(0.0f, -1.0f);
Vector2 Vector2::left = Vector2(-1.0f, 0.0f);
Vector2 Vector2::zero = Vector2();
Vector2 Vector2::one = Vector2(1.0f, 1.0f);

#pragma region Constructor
Vector2::Vector2(float _x, float _y) {
	x = _x;
	y = _y;
}
#pragma endregion

#pragma region Methods
float Vector2::cross(const Vector2& b) {
	return x * b.y - y * b.x;
}

float Vector2::distance(const Vector2& b) {
	return sqrt(pow((b.x - x), 2) + pow((b.y - y), 2));
}

float Vector2::dot(const Vector2& b) {
	return (x*b.x + y*b.y);
}

float Vector2::length() {
	return sqrt(x*x + y*y);
}

float Vector2::angle(Vector2 b) {
	Vector2 v1 = this->normalized();
	Vector2 v2 = b.normalized();
	return acos(v1.dot(v2)) * 180.0f / PI;
}

Vector2 Vector2::normalized() {
	Vector2 v = Vector2(this->x, this->y);
	float l = v.length();
	v.x = x / l;
	v.y = y / l;
	return v;
}

void Vector2::set(float _x, float _y) {
	x = _x;
	y = _y;
}

string Vector2::toString() {
	return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}
#pragma endregion

#pragma region Operators
Vector2 Vector2::operator+(const Vector2& b) {
	return Vector2(this->x + b.x, this->y + b.y);
}

Vector2 Vector2::operator-(const Vector2& b) {
	return Vector2(this->x - b.x, this->y - b.y);
}

Vector2 Vector2::operator*(const int b) {
	return Vector2(x * b, y * b);
}

Vector2 Vector2::operator/(const int b) {
	return Vector2(x / b, y / b);
}
#pragma endregion