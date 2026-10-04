
#include <iostream>
using namespace std;
int main()
{
	int correctPassword = 1999,input;


	while (cin >> input)
	{
		if (input == correctPassword)
		{
			cout << "Correct\n";
			break;
		}
		else
		{
			cout << "Wrong\n";
			
		}
	}


	
}
