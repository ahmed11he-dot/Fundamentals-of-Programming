#include<iostream>
using namespace std;

int ReadusedtoWhileloop(int from,int to)
{
	int Num;
	cout << "please enter the number from " << from << " to " << to << endl;
	cin >> Num;
	while (Num<from || Num>to)
	{
		cout << "Wrong Number\n";
		cout << "please enter the number from " << from << " to " << to << endl;

		cin >> Num;
	}
	return Num;
}
int ReadusedtoDoWhileloop(int from, int to)
{
	int Num;
	do
	{
		cout << "please enter the number from " << from << " to " << to << endl;
		cin >> Num;
	} while (Num<from || Num>to);

		return Num;
}



int main()
{
	cout << "The number is:" << ReadusedtoWhileloop(5, 9) << endl;

	cout << "The number is:" << ReadusedtoDoWhileloop(5, 9) << endl;

	return 0;
}