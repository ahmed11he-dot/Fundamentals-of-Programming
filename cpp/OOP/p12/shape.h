#pragma once
#include<iostream>
#include<string>
using namespace std;
class shape
{
private:
	string color;
public:
	shape(string c)
	{
		color = c;
	}
	virtual float Area() = 0;
	
	virtual void Draw() = 0;

	virtual void print() final
	{
		cout << "let it\n";
	}
	virtual ~shape() {}
};

