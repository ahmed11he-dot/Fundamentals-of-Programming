
#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	/*
	

	long long l1, R1, l2, R2, start, end;

	cin >> l1 >> R1 >> l2 >> R2;
	if (((l1>l2) && (l1>R2)) || ((R1<l2) && (R1<R2)))
	{
		cout << -1 << endl;
	}
	else {

		if (l1 > l2)
		{
			start = l1;
		}
		else
		{
			start = l2;
		}
		if (R1 > R2)
		{
			end = R2;
		}
		else {
			end = R1;
		}
		cout << start << " " << end << endl;
	}
	*/
	// another solution:
	int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;
	if (max(num1, num3) > min(num2, num4))
	{
		cout << -1 << endl;
	}
		
	else
	{
		cout << max(num1, num3) << " " << min(num2, num4) << endl;
	}
		

}



	 