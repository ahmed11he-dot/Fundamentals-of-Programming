#include <iostream>
using namespace std;
char Enter()
{
	char x;
	cin >> x;
	return x;

}
char theNextChar(char x)
{
	if (x >= 'a' && x < 'z')
	{
		

		return x + 1;

	}
	else if (x == 'z')
	{
		 return 'a';

	}
}

int main()
{

	cout << theNextChar(Enter());
}
