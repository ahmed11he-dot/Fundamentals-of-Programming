#include<iostream>
#include<string>
using namespace std;
float Read()
{
	float Num;
	cout << "please enter a Number:\n";
	cin >> Num;
	return Num;
}
float CalculateHalfOfNum(float Num)
{
	return Num / 2;

}
void PrintHalfOfNum(float Num)
{
	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfOfNum(Num));
	cout << Result;
}

int main()
{
	PrintHalfOfNum(Read());
	return 0;
}

















