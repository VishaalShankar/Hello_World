#define _USE_MATH_DEFINES

#include "Circle.h"

#include <math.h>

Circle::Circle():
	mCenter(Point<double>()),
	mRadius(0.0)
{
	std::cout << "Circle Constructor : A Default Circle Constructed" << std::endl;
}

Circle::Circle(double inRadius, Point<double> const & inCenter):
	mCenter(inCenter),
	mRadius(inRadius)
{
	std::cout << "Circle Constructor : A Parameterized Circle Constructed" << std::endl;
}


Circle::~Circle()
{
	std::cout << "Circle Destructor : Circle Destroyed " << std::endl;
}

double Circle::GetArea()
{
	return M_PI * (mRadius * mRadius);
}

double Circle::GetPerimeter()
{
	return 2*M_PI*mRadius;
}

int Circle::GetNumberOfEdges()
{
	return 0;
}

Point<double> & Circle::GetCenter()
{
	return mCenter;
}
