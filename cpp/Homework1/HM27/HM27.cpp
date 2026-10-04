
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
	cout << "Print Result from " << Num << " to 1 using while statement:" << endl;
	int i = Num + 1;
	while (i > 1)
	{
		i--;
		cout << i << endl;
	}

}
void ForLoop(int Num)
{
	cout << "Print Result from " << Num << " to 1 using For statement:" << endl;

	for (int i = Num; i >= 1; i--)
	{
		cout << i << endl;
	}
}
void DoWhileLoop(int Num)
{
	cout << "Print Result from " << Num << " to 1 using do While statement:" << endl;
	int i = Num + 1;
	do
	{
		i--;
		cout << i << endl;

	} while (i > 1);
}
int main()
{
	int N = EnterNum();
	WhileLoop(N);
	ForLoop(N);
	DoWhileLoop(N);

	return 0;
}
