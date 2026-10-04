
#include<iostream>
using namespace std;

enum enuOddOrEven { odd = 1, even = 2 };

int EnterNum()
{
	int Number;
	cout << "please enter a Number:\n ";
	cin >> Number;

	return Number;
}

enuOddOrEven  CheckOddorEven(int Number)
{
	if (Number % 2 != 0)
		return enuOddOrEven::odd;
	else
		return enuOddOrEven::even;

}

int PrintSumEvenNumbersFrom_1_to_NumUsingWhileLoop(int N)
{
	cout << "Sum even Numbers From 1 to " << N << " using while statement:" << endl;
	int i = 0;
	int Sum = 0;
	while (i < N)
	{
		i++;
		if (CheckOddorEven(i) == enuOddOrEven::even)
		{
			Sum += i;
		}
	}
	return Sum;
}
int PrintSumEvenNumbersFrom_1_to_NumUsingForLoop(int N)
{
	cout << "Sum even Numbers From 1 to " << N << " using For statement:" << endl;
	int Sum = 0;
	for (int i = 1; i <= N; i++)
	{
		if (CheckOddorEven(i) == enuOddOrEven::even)
		{
			Sum += i;
		}
	}
	return Sum;
}
int  PrintSumEvenNumbersFrom_1_to_NumUsingDoWhileLoop(int N)
{
	cout << "Sum even Numbers From 1 to " << N << " using  Do while statement:" << endl;
	int i = 0;
	int Sum = 0;
	do
	{
		i++;
		if (CheckOddorEven(i) == enuOddOrEven::even)
		{
			Sum += i;
		}

	} while (i < N);
	return Sum;
}
int main()
{
	int N = EnterNum();

	cout << PrintSumEvenNumbersFrom_1_to_NumUsingWhileLoop(N) << endl;

	cout << PrintSumEvenNumbersFrom_1_to_NumUsingForLoop(N) << endl;

	cout << PrintSumEvenNumbersFrom_1_to_NumUsingDoWhileLoop(N) << endl;


	return 0;
}
