#include "Triangle.h"

Triangle::Triangle() :
	mHypotenuse(0.0),
	mBase(0.0),
	mHeight(0.0)
{
	std::cout << "Triangle Constructor : A Default Triangle Constructed" << std::endl;
}

Triangle::Triangle(double inHypotenus, double inBase, double inHeight) :
	mHypotenuse(inHypotenus),
	mBase(inBase),
	mHeight(inHeight)
{
	std::cout << "Triangle Constructor : A Parameterized Triangle Constructed" << std::endl;
}

Triangle::~Triangle()
{
	std::cout << "Triangle Destructor : Triangle Destroyed " << std::endl;
}

double Triangle::GetArea()
{
	return 0.5*mBase*mHeight;
}

double Triangle::GetPerimeter()
{
	return mBase+mHeight+mHypotenuse;
}

int Triangle::GetNumberOfEdges()
{
	return 3;
}
