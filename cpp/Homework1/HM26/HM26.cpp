#include<iostream>
using namespace std;

int EnterNum()
{
	int Num;
	cout << "please enter Number:\n ";
	cin >> Num;

	return Num;
}
void WhileLoop(int Num)
{
	cout << "Print Result from 1 to " << Num <<" using while statement:" << endl;
	int i = 0;
	while (i < Num)
	{
		i++;
		cout << i << endl;
	}

}
void ForLoop(int Num)
{
	cout << "Print Result from 1 to " << Num <<" using For statement:"<< endl;

	for (int i = 1; i <= Num; i++)
	{
		cout << i << endl;
	}
}
void DoWhileLoop(int Num)
{
	cout << "Print Result from 1 to " << Num << " using do While statement:" << endl;
	int i = 0;
	do
	{
		i++;
		cout << i << endl;

	} while (i < Num);
}
int main()
{
	int N = EnterNum();
	WhileLoop(N);
	ForLoop(N);
	DoWhileLoop(N);

	return 0;	
}