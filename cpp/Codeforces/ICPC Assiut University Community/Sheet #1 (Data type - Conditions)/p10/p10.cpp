#include <iostream>
using namespace std;
void Enterinputs(int& A,int& B,char& operation)
{
	
	cin >> A>> operation>>B;
	
}
int Result(int A, int B, char operation)
{
	switch (operation)
	{
	case '+':
		return A + B;
	case'-':
		return A - B;
	case'*':
		return A * B;
	case'/':
		return A / B;
	}

}
int main()
{
	int A, B;
	char operation;
	Enterinputs(A, B, operation);
	cout << Result(A, B, operation);
}