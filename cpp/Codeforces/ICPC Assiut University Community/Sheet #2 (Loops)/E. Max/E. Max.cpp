#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int turns,maxValue = 0,input;
	cin >> turns;
	 
	for (int i = 0; i < turns; i++)
	{
		cin >> input;
		maxValue = max(maxValue, input);

	}
	cout << maxValue;
}


