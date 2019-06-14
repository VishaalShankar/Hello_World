#pragma once

#include "Shape.h"

//template class Point<double>;

class Rectangle : public Shape
{
public :
	Rectangle();
	Rectangle(Point<double> const & inBottomLeft, double inHeight, double inWidth);
	~Rectangle();

	double GetArea() override;
	double GetPerimeter() override;
	int GetNumberOfEdges() override;

private :
	Point<double> mBottomLeft;
	Point<double> mBottomRight;
	Point<double> mTopLeft;
	Point<double> mTopRight;
	double mHeight;
	double mWidth;
};
