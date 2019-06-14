#include "Point.h"
#include "Rectangle.h"

Rectangle::Rectangle() :
	mHeight(0.0),
	mWidth(0.0)
{
	std::cout << "Rectangle Constructor : A Default Rectangle Constructed" << std::endl;
}

Rectangle::Rectangle( Point<double> const & inBottomLeft, double inHeight, double inWidth) :
	mBottomLeft( inBottomLeft ),
	mBottomRight( Point<double>( inBottomLeft.GetX() + inWidth, inBottomLeft.GetY() ) ),
	mTopLeft(Point<double>(inBottomLeft.GetX(), inBottomLeft.GetY() + inHeight ) ),
	mTopRight(Point<double>(inBottomLeft.GetX() + inWidth, inBottomLeft.GetY() + inHeight ) ),
	mHeight(inHeight),
	mWidth(inWidth)
{
	std::cout << "Rectangle Constructor : A parameterized Rectangle Constructed" << std::endl;
}

Rectangle::~Rectangle()
{
	std::cout << "Rectangle Destructor : Rectangle Destroyed " << std::endl;
}

double Rectangle::GetArea()
{
	return mHeight * mWidth;
}

double Rectangle::GetPerimeter()
{
	return 2*mHeight + 2*mWidth;
}

int Rectangle::GetNumberOfEdges()
{
	return 4;
}
