#include "Q3.h"

int Rectangle::getArea() {
	return length * width;
}

int Rectangle::getPerimeter() {
	return 2 * (length + width);
}

int Square::getArea() {
	return side * side;
}

int Square::getPerimeter() {
	return 4 * side;
}


