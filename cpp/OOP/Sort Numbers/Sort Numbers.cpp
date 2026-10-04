
#include <iostream>
using namespace std;

int main()
{
	int Num1, Num2, Num3;
	cin >> Num1>> Num2>> Num3;
	int max, def, min;
	if (Num1 >= Num2 && Num1 >= Num3)
	{
		max = Num1;
		if (Num2 >= Num3)
		{
			def = Num2;
			min = Num3;
		}
		else
		{
			def = Num3;
			min = Num2;
		}
	}
	else if(Num2 >= Num1 && Num2 >= Num3)
	{
		max = Num2;
		if (Num1 >= Num3)
		{
			def = Num1;
			min = Num3;
		}
		else
		{
			def = Num3;
			min = Num1;
		}
	}
	else
	{
		max = Num3;
		if (Num1 >= Num2)
		{
			def = Num1;
			min = Num2;
		}
		else
		{
			def = Num2;
			min = Num1;
		}
	}
	cout << min << "\n" << def << "\n" << max << endl;

	cout <<endl<< Num1 << "\n" << Num2 << "\n" << Num3 ;

}
