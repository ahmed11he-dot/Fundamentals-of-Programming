#include<iostream>
using namespace std;

void cppp()
{
	static int x = 0;

	 x++;

	 cout << x<<endl;
}




int main()
{
	cppp();

	cppp();
	

	return 0;
}