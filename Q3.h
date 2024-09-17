#pragma once
#include<iostream>
using namespace std;
class shape {
public:
	virtual int getArea() = 0;
	virtual int getPerimeter() = 0;
};

class Rectangle : public shape {
	int length;
	int width;
public:
	Rectangle(int l,int w):width(w),length(l){}
	int getArea();
	int getPerimeter();
};


class Square :public shape {
	int side;
public:
	Square(int s) :side(s) {}
	int getArea();

	int getPerimeter();
};