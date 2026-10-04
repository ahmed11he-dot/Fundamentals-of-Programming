
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double N, K, A;
	cin >> N >> K >> A;
	 double r = (N * K) / A;
	 if(floor(r) == r)
	 {
		 if (r>=INT_MIN && r<= INT_MAX)
		 {
			 cout << "int";
		 }
		 else 
		 {
			 cout << "long long";
		 }

	 }
	     else
		 {
			 cout << "double";
		 }

}

