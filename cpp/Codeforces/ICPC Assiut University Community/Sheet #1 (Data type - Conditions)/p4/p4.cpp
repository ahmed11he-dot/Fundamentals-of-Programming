
#include <iostream>
using namespace std;
int main()
{
	 double A, B;
	cin >> A >> B;

	int num = (int)A/B;
	
	cout << "floor " << A <<" / "<< B << " = " << num << endl;
	if (A / B > num)
	cout << "ceil " << A << " / " << B << " = " << num + 1 << endl;
	else
		cout << "ceil " << A << " / " << B << " = " << num << endl;
	cout << "round " << A << " / " << B << " = " << int(A/B + .5) << endl;
	
	
}
