#pragma once
#include "Shape.h"
class Triangle : public Shape
{
public:
	Triangle();
	Triangle(double inHypotenus, double inBase, double inHeight);
	~Triangle();

	double GetArea() override;
	double GetPerimeter() override;
	int GetNumberOfEdges() override;

private :
	double mHypotenuse;
	double mBase;
	double mHeight;
};

