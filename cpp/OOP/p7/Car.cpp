#include<iostream>
#include "Car.h"
using namespace std;

 int Car::count = 0;

void Car::setmodel(int m)
{
	model = m;
}

int Car::getmodel()
{
	return model;
}
void Car::settype(string t)
{
	type = t;
}

string Car::gettype()
{
	return type;
}
void Car::setcolor(string c)
{
	color = c;
}

string Car::getcolor()
{
	return color;
}
 int Car::getcount()
{
	return count;
}


Car::Car(int m, string t, string c) :model(m), type(t), color(c)
{
	count++;

}
Car::Car() :model(2009), type("Toyota"), color("White")
{
	count++;

}
Car::~Car()
{
	count--;


}