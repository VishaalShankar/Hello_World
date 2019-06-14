#pragma once
#include <iostream>

template<typename T>
class Point
{
public:
	Point() :
		mX(T()),
		mY(T())
	{}

	Point(T inX, T inY) :
		mX(inX),
		mY(inY)
	{
	}

	Point(const Point & inPoint) :
		mX(inPoint.GetX()),
		mY(inPoint.GetY())
	{

	}

	Point & operator =(const Point & inPoint) {
		std::cout << "Invoking assignment operator " << std::endl;
		mX = inPoint.GetX();
		mY = inPoint.GetY();
		return *this;
	}

	T GetX() const {
		return mX;
	}

	T GetY() const {
		return mY;
	}

	void SetX(T inX) {
		mX = inX;
	}

	void SetY(T inY) {
		mY = inY;
	}

	void Print() const {
		std::cout << "( " << mX << ", " << mY << ")" << std::endl;
	}

	~Point() {
		std::cout << "Destroying the Point :  ";
		Print();
	}
private :
	T mX;
	T mY;
};

