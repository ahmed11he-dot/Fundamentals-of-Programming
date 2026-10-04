
#include <iostream>
#include<cmath>
using namespace std;

//A=D=2R
float ReadSquareSide()
{
	float A ;
	cout << "please enter the Square Side A: \n";
	cin >> A;

	return A;
}



float Circle_Area(float A)
{
	const float Pi = 3.14;
    float Area = Pi * pow(A / 2, 2);

	return Area;
}
void PrintResult(float Area)
{
	cout << "\nCircle Area = " << Area<<endl;

}

int main()
{
	

	PrintResult(Circle_Area(ReadSquareSide()));
	
	return 0;
}
