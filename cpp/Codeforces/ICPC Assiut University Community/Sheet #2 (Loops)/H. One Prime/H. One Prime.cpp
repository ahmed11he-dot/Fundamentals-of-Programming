#include <iostream>
	using namespace std;
	int main()
	{
		int n, m = 0;
		cin >> n;
		for (int i = 2; i <= n - 1; i++)
		{
			if (n % i == 0)
				m = 1;
		}
		if (m == 1)
			cout << "NO";
		else
			cout << "YES";
	}




