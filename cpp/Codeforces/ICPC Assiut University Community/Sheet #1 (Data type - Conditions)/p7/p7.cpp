
#include <iostream>
using namespace std;
void enterNumbers(int& A,int& B,int& C)
{
	
	cin >> A >> B >> C;
}
void maxNum(int A,int B,int C)
{
	

	int max = A;
	if (B > max)
		max= B;
	if (C > max)
		max=C;
	cout << max;
}
void minNum(int A, int B, int C)
{
	
	int min = A;
	if (B < min)
		min = B;
	if (C < min)
		min = C;
	cout << min;

}
int main()
{
	int A, B, C;
	enterNumbers(A, B, C);
	minNum(A, B, C);
	cout << " ";
	maxNum(A, B, C);
	
	

}
