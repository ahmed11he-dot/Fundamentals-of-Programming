#pragma once

class Rectangle
{
private:

	float length;
	float wedth;
public:
	
	 void setlength(float l);
	float  getlength();
	void setwedth(float w);
	float getwedth();
	void print();
	
	Rectangle addrec(Rectangle r2);
	
	Rectangle(float l, float w);
	Rectangle();
	~Rectangle();
};

