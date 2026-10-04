#include <iostream>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int first_digit = x / 1000;
	if (first_digit % 2 == 0)
	{
		cout << "EVEN";
	}
	else
	{
		cout << "ODD";
	}
}

