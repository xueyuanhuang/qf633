// C++ program to demonstrate working of a Pointers
#include <iostream>
#include <string>
#include <vector>
#include <exception>

using namespace std;

class Rectangle
{
public:
	Rectangle(){};
	Rectangle(int l, int b) : length(l), breadth(b){};
	int length;
	int breadth;
};

void fun()
{
	// By taking a pointer p and dynamically creating object of class rectangle
	Rectangle *p = new Rectangle();
	std::cout << "Rectangle length is: " << p->length << std::endl;
}

void some_complex_function(Rectangle *ptr)
{
	try
	{
		double edge = ptr->length;
		double area = ptr->length * ptr->breadth;
		cout << "area of shape: " << area << endl;
		cout << area / 0 << endl;
	}
	catch (exception &e)
	{
		cout << "some error" << endl;
	}
}

int main()
{
	if (1)
	{
		// Infinite Loop case
		string input ="";
		while (input != "stop")
		{
			std::cout << "Enter a command (type 'stop' to end): ";
			std::cin >> input;
			fun();
		}
	}

	if (0)
	{
		vector<double> values({1.0, 0., 0.2, 3.2, -2, 3.4, 5.1});
		for (auto &value : values)
		{
			Rectangle *p = new Rectangle(value, value);
			some_complex_function(p);
			delete p;
		}
	}
}
