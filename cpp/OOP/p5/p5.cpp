
#include <iostream>
using namespace std;
class Rectangle
{
private:
	float length;
	float wedth;
public:
	void setlength(float l)
	{
		length = l;

	}
	void setwedth(float w)
	{
		wedth = w;

	}
	float getlength()
	{
		return length;

	}
	float getwedth()
	{
		return wedth;

	}

	float getArea()
	{
		return .5 * wedth * length;
	}

};

int main()
{
	
	Rectangle box;
	box.setlength(2.3);
	box.setwedth(4.23);
	cout <<"Rectangle Area ="<< box.getArea();




	return 0;
}

