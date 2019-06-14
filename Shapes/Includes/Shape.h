#pragma once
#include <iostream>

class Shape
{
public:
	Shape() { std::cout << "Shape Constructor : A Shape Constructed" << std::endl; }
	~Shape() {
		std::cout << "Shape Destructor : Shape Destroyed " << std::endl;
	}
	virtual double GetArea() = 0;
	virtual double GetPerimeter() = 0;
	virtual int GetNumberOfEdges() = 0;
};
