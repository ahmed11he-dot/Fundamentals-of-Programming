#pragma once
class Distance
{
private:
	int feet;
	int inches;
public:
	Distance();
	Distance(int f, int i);
	void Print();
	Distance operator+(Distance d2);

	Distance operator-(Distance d2);
	
};

