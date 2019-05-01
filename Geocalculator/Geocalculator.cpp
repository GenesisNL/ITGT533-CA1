// Geocalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
static const double PI = 3.14159;



class Circle {

private:
	double m_radius;

public:
	Circle(double t_radius)
		: m_radius(t_radius)
	{
	}

	double getArea() {
		return PI * m_radius * m_radius;
	}
};

class Triangle {
private:
	double m_base;
	double m_height;

public:
	Triangle(double t_base, double t_height)
		: m_base(t_base), m_height(t_height)
	{
	}

	double getArea() {
		return (1.0 / 2.0) * m_base * m_height;
	}
};



class Rectangle {
private:
	double m_width;
	double m_length;

public:
	Rectangle(double t_width, double t_length)
		: m_width(t_width), m_length(t_length)
	{
	}

	double getArea() {
		return m_width * m_length;
	}
};

int main()
{
	Circle *circle = nullptr;
	Triangle *triangle = nullptr;
	Rectangle *rectangle = nullptr;

	while (true) {
		int num_shape;
		cout << "Geometric Area Calculator" << endl;
		cout << "Enter 1 for Circle" << endl;
		cout << "Enter 2 for Triangle" << endl;
		cout << "Enter 3 for Rectangle" << endl;
		cout << "Enter 4 for quit the program" << endl;
		cin >> num_shape;
		cout << endl;

		switch (num_shape) {
		
		case 1:
			double radius;
			cout << "Please put the number of  circle radius: ";
			cin >> radius;
			circle = new Circle(radius);
			cout << "The area of circle is " << circle->getArea() << endl;
			break;

		case 2:
			double base, height;
			cout << "Please put the number of triangle base : ";
			cin >> base;
			cout << "Please put the number of triangle height : ";
			cin >> height;
			triangle = new Triangle(base, height);
			cout << "The area of triangle is " << triangle->getArea() << endl;
			break;

		case 3:
			double width, length;
			cout << "Please put the number of rectangle width : ";
			cin >> width;
			cout << "Please put the number of rectangle length : ";
			cin >> length;
			rectangle = new Rectangle(width, length);
			cout << "The area of rectangle is " << rectangle->getArea() << endl;
			break;

		case 4:
			cout << "Quitting the program";
			return 0;

		default:
			cout << "Your Enter the wrong value, Please enter the new value" << endl;
			break;

		}
		 
 
		system("pause");
		system("CLS");
	}





}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
