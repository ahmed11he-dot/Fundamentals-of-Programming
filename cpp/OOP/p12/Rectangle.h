#pragma once
#include"shape.h"

class Rectangle :public shape
{
private:
	float weight;
	float length;

public:
	Rectangle( float w, float l, string c) :shape(c)
	{
		weight = w;
		length = l;
	}
	float Area() override
	{
		cout << "Area of rectangle:" << weight * length << endl;
		return weight * length;
	}

	void Draw() override
	{
		cout << "Rectangle draw\n";
	}

};

