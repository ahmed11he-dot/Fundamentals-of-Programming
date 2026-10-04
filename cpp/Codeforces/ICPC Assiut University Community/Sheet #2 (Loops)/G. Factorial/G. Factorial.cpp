
#include <iostream>
using namespace std;
int main()
{
	int counter;
	long long factotial = 1;
	cin >> counter;
	while(counter--)
	{
		int num;
		cin >> num;
		
		
		for (int i = 1; i <= num ; i++)
		{
			factotial *= i;

		}

		cout << factotial <<endl;
		factotial = 1;
	};
	
}


