#include <iostream>
#include <memory>

#include <Circle.h>
#include "Point.h"
#include "Rectangle.h"
#include "Triangle.h"

int GetShapeEdgeCount(Shape * inShape)
{
	return inShape->GetNumberOfEdges();
}

double GetArea(Shape * inShape)
{
	return inShape->GetArea();
}

double GetPerimeter(Shape * inShape)
{
	return inShape->GetPerimeter();
}

int main()
{
	std::unique_ptr<Rectangle> rect = std::make_unique<Rectangle>( Rectangle( Point<double>(20,24),25.32, 30.30) );
	std::cout << "Number of edges in a rect = " << GetShapeEdgeCount(rect.get()) << std::endl;

	std::unique_ptr<Triangle> triangle = std::make_unique<Triangle>( Triangle(13, 12, 5) );
	std::cout << "Number of edges in a triangle = " << GetShapeEdgeCount(triangle.get()) << std::endl;

	std::unique_ptr<Circle> circle = std::make_unique<Circle>( Circle(12, Point<double>(11.2, 23.45) ) );
	std::cout << "Number of edges in a circle = " << GetShapeEdgeCount(circle.get()) << std::endl;

	std::cout << "Perimeter of Rectangle : " << GetPerimeter(rect.get()) << std::endl;
	std::cout << "Perimeter of Triangle : " << GetPerimeter(triangle.get()) << std::endl;
	std::cout << "Perimeter of Circle : " << GetPerimeter(circle.get()) << std::endl;

	std::cout << "Area of Rectangle : " << GetArea(rect.get()) << std::endl;
	std::cout << "Area of Triangle : " << GetArea(triangle.get()) << std::endl;
	std::cout << "Area of Circle : " << GetArea(circle.get()) << std::endl;

	auto & point = circle->GetCenter();
	point.Print();

	Point<double> x;
	x = point;
	x.Print();
}