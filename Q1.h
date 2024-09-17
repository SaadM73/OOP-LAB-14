#pragma once
#include<iostream>
using namespace std;


class shape {
	string type;
	float width;
	float height;

public:
	shape(string s, float w, float h);

	string getType();

	float getWidth();

	float getHeight();


	void setType( string s) {
		type=s;
	}

	void setWidth(float w) {
		width=w;
	}

	void setHeight(float h) {
		 height=h;
	}

	virtual float area() = 0;
	virtual void display() = 0;

};

class Rectangle : public shape {
public:
	Rectangle(string s, float w, float h):shape(s,w,h){}
	float area();

	void display();
};

class triangle : public shape {
	float base;
public:
	triangle(string s, float w, float h, float b) :shape(s, w, h) {
		base = b;
	}
	float area();
	void display();

};

class circle : public shape {
	float radius;

public:
	circle(string s, float w, float h, float r) :shape(s, w, h), radius(r) {}
	float area();
	void display();

};