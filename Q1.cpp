#include "Q1.h"

shape::shape(string s, float w, float h)
{
	{
		type = s;
		width = w;
		height = h;
	}
}

string shape::getType() {
	return type;
}

float shape::getWidth() {
	return width;
}

float shape::getHeight() {
	return height;
}

float Rectangle::area() {
	return getWidth() * getHeight();
}


void Rectangle::display() {
	cout << "Type : " << getType() << endl;
	cout << "Width : " << getWidth() << endl;
	cout << "Height : " << getHeight() << endl;
}

float triangle::area() {
	return 0.5 * base * getHeight();
}


void triangle::display() {
	cout << "Type : " << getType() << endl;
	cout << "Base : " << base << endl;
	cout << "Height : " << getHeight() << endl;
}

float circle::area() {
	return 3.142 * radius * radius;
}


void circle::display() {
	cout << "Type : " << getType() << endl;
	cout << "Radius : " << radius << endl;
}

