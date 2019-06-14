#pragma once
#include "Shape.h"
#include "Point.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(double inRadius, Point<double> const & inCentre );
	~Circle();
	double GetArea() override;
	double GetPerimeter() override;
	int GetNumberOfEdges() override;
	Point<double> & GetCenter();

private:
	Point<double> mCenter;
	double mRadius;
};

