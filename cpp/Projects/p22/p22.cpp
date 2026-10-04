#include<iostream>
using namespace std;
int main()
{
	int Num = 0;
	int Sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "please enter Number:\n";
		cin >> Num;
		if (Num >= 50)
		{
			cout << "please enter Number Smaller than or Equal 50.\n";
				continue;
		}
		Sum += Num;
	}
	
	cout << "Sum =" << Sum<<endl;


	return 0;

}