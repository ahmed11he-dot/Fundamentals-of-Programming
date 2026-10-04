#include <iostream>

using namespace std;

int main()
{
	for (int i = 65; i <= 90; i++)
	{
		cout << "Letter:" << char(i)<<"\n";

		for (int t = 65; t <= 90; t++)
		{
			
			cout <<char(i)<< char(t)<<endl;
			
		}
		 cout << "----------------------\n"; 
	}
	return 0;
}