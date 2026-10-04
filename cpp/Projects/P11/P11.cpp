#include<iostream>
using namespace std;

void Read(int Arra[100] , int& Length)
{
	cout << "How Many numbers you want to enter ? 1 to 100 !?\n";
	cin >> Length;
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "please enter number " << i + 1<< ":" << endl;
		cin >> Arra[i];
	}
}
void Print(int Arra[100], int Length)
{
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Number" << i + 1 <<":"<< Arra[i] <<endl;
		
	}
}
int Summ(int Arra[100], int Length)
{
	int Sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		Sum += Arra[i];

	}
	return Sum;
}
int Average(int Arra[100], int Length)
{
	return (float)Summ(Arra, Length) / Length;
}


int main()
{
	int Arra[100], Length = 0;
	Read(Arra, Length);
	Print(Arra, Length);

	cout << "*************************\n";

	cout << "Sum=" << Summ(Arra, Length)<<endl;

	cout << "Average=" << Average(Arra, Length)<<endl;


	return 0;
}



