#include <iostream>
using namespace std;

void PrintLetters()
{
	for (int i = 65; i <= 90; i++)
	{
		
		cout << (char)i << endl;
	}
}

int main()
{
	cout << "Print all letters from A to Z:\n";
	PrintLetters();
	return 0;
}
