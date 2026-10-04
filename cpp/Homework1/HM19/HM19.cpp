
#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
	float Diameter;
	cout << "please enter the Diameter: \n";
	cin >> Diameter;

	return Diameter;
}


float CircleAreaByDiameter(float Diameter)
{
	const float Pi = 3.14;
	float Area = Pi * pow(Diameter / 2, 2);

	return Area;
}

void PrintResult(float Area)
{
	cout << "Circle Area = " << Area;

}

int main()
{
	
	PrintResult(CircleAreaByDiameter(ReadDiameter()));
	
   return 0;
}


