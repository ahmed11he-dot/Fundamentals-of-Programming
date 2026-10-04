#include<iostream>
#include "Rectangle.h"
using namespace std;

void Rectangle::setlength(float l)
{
	length = l;
}

float Rectangle::getlength()
{
	return length;
}
void Rectangle::setwedth(float w)
{
	wedth=w;

}
void Rectangle::print()
{
	cout << "length:" << length << "\n";
	cout << "wedth:" << wedth << "\n";
}
Rectangle Rectangle::addrec(Rectangle r2)
{
	Rectangle Result;
	Result.length = length + r2.length;
	Result.wedth = wedth + r2.wedth;
	return Result;
}

Rectangle::Rectangle(float l, float w) :length(l), wedth(w)
{
	
	//cout << "Area of Rectangle = " << length * wedth << endl;
	//	cout<<"------------------------\n";
}
Rectangle::Rectangle():length(2), wedth(3)
{
	//cout << "Area of Rectangle = " << length * wedth << endl;
	//cout << "------------------------\n";
}

Rectangle::~Rectangle()
{
	
}
