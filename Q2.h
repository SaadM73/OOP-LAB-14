#pragma once

#include<iostream>
using namespace std;

class employee {
	int EmpNo;

public:
	employee(int e) : EmpNo(e){}
	virtual int getSalary() = 0;
	int getID();
};


class driver : public employee {
	int salary;
public:
	driver(int e, int s):employee(e),salary(s){}
	int getSalary();
};


class developer : public employee {
	int salary;
public:
	developer(int e, int s):employee(e),salary(s){}
	int getSalary();
};