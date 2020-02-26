#include "Vector.h"

Vector::Vector() : x(0), y(0) {
}

Vector::Vector(int x_, int y_) : x(x_), y(y_) {
}

Vector::~Vector() {
}

int Vector::GetX() {
	return x;
}

int Vector::GetY() {
	return y;
}

void Vector::SetX(int x_) {
	x = x_;
}

void Vector::SetY(int y_) {
	y = y_;
}

bool Vector::operator==(Vector vec) {
	return x == vec.GetX() && y == vec.GetY();
}