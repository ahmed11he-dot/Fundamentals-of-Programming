#include<iostream>
using namespace std;

enum enNombertype{even=1,odd=2};

int Read()
{
	int Number;
	cout << "Please enter a Number:\n";
	cin >> Number;
	return Number;
}
enNombertype typeOfNum(int Number)
{
	if (Number % 2 == 0)
		return enNombertype::even;
	else 
		return enNombertype::odd;
}

void PrintNumberType(enNombertype type)
{
	if (type == enNombertype::even)
	{
		cout << "The Number is even\n";
	}
	else 
	{
		cout << "The Number is odd\n";
	}
}

int main()
{
	PrintNumberType(typeOfNum(Read()));
	return 0;
}

















