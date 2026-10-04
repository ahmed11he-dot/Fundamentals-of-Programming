
#include <iostream>
using namespace std;
int main()
{
long long eyes,mouths,bodies,mn;
cin >> eyes >> mouths >> bodies;

mn = min(min(eyes, mouths), bodies);

eyes -= mn;
bodies -= mn;

if (eyes / 2 >= bodies)
{
	cout << bodies + mn;
}
else
{
	cout << (eyes / 2) + mn;
}
}

