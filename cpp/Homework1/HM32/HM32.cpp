#include<iostream>
using namespace std;

int ReadNum()
{
	int Num;
	cout << "please enter a number:\n";
	cin >> Num;
	return Num;
}
int ReadPower()
{
	int Num;
	cout << "please enter a Power:\n";
	cin >> Num;
	return Num;
}

int PowerOfM(int Num,int M)
{
	
	if (M == 0)
	{
		return 1;
	}

	int pow = 1;
    for (int i = 1; i <= M; i++)
	{
		pow *= Num;

	}
	return pow;
	
}

int main()
{
	int a = ReadNum();
	int b = ReadPower();

	cout << endl << "The Result=" << PowerOfM(a, b);
	return 0;
}