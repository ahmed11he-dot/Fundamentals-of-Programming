#include <iostream>
using namespace std;
int main()
{
  int x;
	cin >> x;
	int first_digth = x % 10;
	int second_digth = x / 10;
	bool Condition = ((first_digth % second_digth == 0) || (second_digth % first_digth == 0));

	if (Condition)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

