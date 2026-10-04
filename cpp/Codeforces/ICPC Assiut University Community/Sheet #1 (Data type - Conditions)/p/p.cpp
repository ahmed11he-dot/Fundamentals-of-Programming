//#include<bits/stdc++.h>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long double pi = 3.141592653;
    long double Area, R;
	
	do {
		cin >> R;

	} while (R < 1 || R > 100);
	Area = pi * R * R;
	cout << fixed << setprecision(9)<<Area;
	return 0;
}
