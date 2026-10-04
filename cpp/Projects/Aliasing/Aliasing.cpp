#include <iostream>
using namespace std;
int main()
{
	int x = 8;

	int& y = x;

	int& z = y;
	cout << x << " " << y << " " << z << endl;

	x++;
	cout << x << " " << y << " " << z << endl;



	return 0;
}
