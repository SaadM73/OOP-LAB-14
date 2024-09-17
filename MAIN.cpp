//#include"Q1.h"
#include"Q2.h"
#include"Q3.h"

int main() {

	//cout << "*******  QUESTION 1  *******\n\n";
	//shape* s1 = new triangle ("Triangle", 0, 10,10);
	//shape* s2 = new Rectangle ("Rectangle", 5, 10);
	//shape* s3 = new circle ("Circle", 0, 0, 5);

	//s1->display();
	//cout << s1->area() << endl;
	//
	//s2->display();
	//cout << s2->area() << endl;
	//
	//s3->display();
	//cout << s3->area() << endl<<endl;

	cout << "*******  QUESTION 2  *******\n\n";
	employee* e1;
	employee* e2;

	e1 = new driver(1, 10000);
	e2 = new developer(2, 60000);

	cout << "Driver salary : " << e1->getSalary() << endl;
	cout << "Driver ID : " << e1->getID() << endl << endl;
	cout << "Developer salary : " << e2->getSalary() << endl;
	cout << "Developer ID : " << e2->getID() << endl << endl;
	
	cout << "*******  QUESTION 3  *******\n\n";


	shape* s1 = new Rectangle(2, 3);
	shape* s2 = new Square(4);

	cout << "Shape 1 area : " << s1->getArea() << endl;
	cout << "Shape 1 Perimeter : " << s1->getPerimeter() << endl;
	
	cout << "Shape 2 area : " << s2->getArea() << endl;
	cout << "Shape 2 Perimeter : " << s2->getPerimeter() << endl;


}