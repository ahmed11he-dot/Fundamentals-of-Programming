#pragma once
#include "shape.h"
class circle :public shape
{
private:
	float Radius;

public:
	circle(float R, string c) :shape(c)
	{
		Radius = R;
	}
	float Area() override
	{
		cout << "Area of the circle:" << 3.14 * Radius * Radius;
		return (3.14 * Radius * Radius);
	}
	void Draw() override
	{
		cout << "Circle draw\n";
	}



};

