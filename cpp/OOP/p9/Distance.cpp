#include "Distance.h"
#include<iostream>;
using namespace std;

Distance::Distance() :feet(0), inches(0)
{
}
Distance::Distance(int f,int i) :feet(f), inches(i)
{
}
void Distance::Print()
{
	cout << "feet:" << feet<<endl;
	cout << "inches:" << inches << endl;
}
Distance  Distance::operator+(Distance d2)
{
	int f = feet + d2.feet;
	int i = inches + d2.inches;
	if (i >= 12)
	{
		i -= 12;
		f++;
	}
	return Distance(f, i);
}
Distance  Distance::operator-(Distance d2)
{
	int f = feet - d2.feet;
	int i = inches - d2.inches;
	if (i >= 12)
	{
		i -= 12;
		f++;
	}
	return Distance(f, i);
}