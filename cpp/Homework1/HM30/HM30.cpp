
#include<iostream>
using namespace std;


int EnterNum()
{
	int Number;
	do
	{
		cout << "please enter a posotive Number:\n ";
		cin >> Number;
	} while (Number < 0);

	return Number;
}


int PrintFsctoriaOfNumberUsingWhileLoop(int N)
{
	cout << "factoria of " << N << " using while statement:" << endl;
	int i = N+1;
	int fac = 1;
	while (i > 1)
	{
		i--;
		
		fac *= i;
	}
	return fac;
}
int PrintFsctoriaOfNumberUsingForWhileLoop(int N)
{
	cout << "factoria of " << N << " using For statement:" << endl;
	int fac = 1;
	for (int i = N; i >= 1; i--)
	{
		fac *= i;
	}
	return fac;
}
int  PrintFsctoriaOfNumberUsingDoWhileLoop(int N)
{
	cout << "factoria of " << N << " using  Do while statement:" << endl;
	int i = N+1;
	int fac = 1;
	do
	{
		i--;
		fac *= i;

	} while (i > 1);
	return fac;
}
int main()
{
	int N = EnterNum();

	cout << PrintFsctoriaOfNumberUsingWhileLoop(N) << endl;

	cout << PrintFsctoriaOfNumberUsingForWhileLoop(N) << endl;

	cout << PrintFsctoriaOfNumberUsingDoWhileLoop(N) << endl;


	return 0;
}
